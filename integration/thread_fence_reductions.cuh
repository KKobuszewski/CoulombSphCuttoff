/* *********************************************************************** *
 *   WARSAW UNIVERSITY OF TECHNOLOGY                                       *
 *   FACULTY OF PHYSICS                                                    *
 *   NUCLEAR THEORY GROUP                                                  *
 *                                                                         *
 *   Author: Konrad Kobuszewski                                            *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                         *
 * *********************************************************************** */ 
 
 
#ifndef __THREAD_FENCE_H__
#define __THREAD_FENCE_H__

#include <device_functions.h>


// =============================================== GLOBAL VARIABLES AND FUNCTIONS =============================================

// Global variable used by reduceSinglePass to count how many blocks have finished
__device__ unsigned int retirementCount = 0;

cudaError_t setRetirementCount(int retCnt)
{
    return cudaMemcpyToSymbol(retirementCount, &retCnt, sizeof(unsigned int), 0, cudaMemcpyHostToDevice);
}


// ======================================================= DEVICE FUNCTIONS ===================================================

bool isPow2(unsigned int x) {return ((x&(x-1))==0);}

template <typename T, unsigned int block_size>
inline __device__ void reduce_block(volatile T *sdata, T sum, const unsigned int tid)
{
    sdata[tid] = sum;
    __syncthreads();

    // do reduction in shared mem
    if (block_size >= 512) {  if (tid < 256) sdata[tid] = sum = sum + sdata[tid + 256]; __syncthreads();  }
    if (block_size >= 256) {  if (tid < 128) sdata[tid] = sum = sum + sdata[tid + 128]; __syncthreads();  }
    if (block_size >= 128) {  if (tid <  64) sdata[tid] = sum = sum + sdata[tid +  64]; __syncthreads();  }
    
    if (tid < 32)
    {
        if (block_size >=  64)  sdata[tid] = sum = sum + sdata[tid + 32];
        if (block_size >=  32)  sdata[tid] = sum = sum + sdata[tid + 16];
        if (block_size >=  16)  sdata[tid] = sum = sum + sdata[tid +  8];
        if (block_size >=   8)  sdata[tid] = sum = sum + sdata[tid +  4];
        if (block_size >=   4)  sdata[tid] = sum = sum + sdata[tid +  2];
        if (block_size >=   2)  sdata[tid] = sum = sum + sdata[tid +  1];
    }
}





// This reduction kernel reduces an arbitrary size array in a single kernel invocation
// It does so by keeping track of how many blocks have finished.  After each thread
// block completes the reduction of its own block of data, it "takes a ticket" by
// atomically incrementing a global counter.  If the ticket value is equal to the number
// of thread blocks, then the block holding the ticket knows that it is the last block
// to finish.  This last block is responsible for summing the results of all the other
// blocks.
//
// In order for this to work, we must be sure that before a block takes a ticket, all
// of its memory transactions have completed.  This is what __threadfence() does -- it
// blocks until the results of all outstanding memory transactions within the
// calling thread are visible to all other threads.
//
// For more details on the reduction algorithm (notably the multi-pass approach), see
// the "reduction" sample in the CUDA SDK.
template <typename T, unsigned int block_size, bool nIsPow2>
__global__ void kernel_reduce_threadfence(const T *d_arr_in, T *d_wrk_mem, unsigned int n)
{
    extern __shared__ T smem[];
    __shared__ bool amLast;

    unsigned int tid = threadIdx.x;
    unsigned int i = blockIdx.x*(block_size*2) + threadIdx.x;
    unsigned int gridSize = block_size*2*gridDim.x;

    //
    // PHASE 1: Process all inputs assigned to this block
    //
    // we reduce multiple elements per thread.  The number is determined by the
    // number of active thread blocks (via gridDim).  More blocks will result
    // in a larger gridSize and therefore fewer elements per thread
    T sum = 0;
    while (i < n)
    {
        sum += d_arr_in[i];

        // check bounds <- this is optimized for 2^N sized arrays
        if (nIsPow2 || i + block_size < n)
            sum += d_arr_in[i+block_size];

        i += gridSize;
    }
    // perform first level of reduction,
    // reading from global memory, writing to shared memory

    // do reduction in shared mem
    reduce_block<T,block_size>(smem, sum, tid);

    // write result for this block to global mem
    if (tid == 0) d_wrk_mem[blockIdx.x] = smem[0];

    //
    // PHASE 2: Last block finished will process all partial sums
    //

    if (gridDim.x > 1)
    {
        //const unsigned int tid = threadIdx.x;
        //__shared__ bool amLast;
        //extern float __shared__ smem[];
        
        __threadfence(); // wait until all outstanding memory instructions in this thread are finished

        // Thread 0 takes a ticket. If the ticket ID is equal to the number of blocks, we are the last block!
        if (tid==0)  { unsigned int ticket = atomicInc(&retirementCount, gridDim.x); amLast = (ticket == gridDim.x-1); }
        __syncthreads();

        // The last block sums the results of all other blocks
        if (amLast)
        {
            int i = tid; //float mySum = 0;
            while (i < gridDim.x)  { sum += d_wrk_mem[i]; i += block_size; }
            reduce_block<T,block_size>(smem, sum, tid);
            if (tid==0)  { d_wrk_mem[0] = smem[0]; retirementCount = 0; } 
        }
    }
}

template <typename T>
T threadfence_reduce(T *d_data, T *d_wrk_mem, const int size, int threads = 256)
{
    int blocks=(int)ceil((float)size/threads);
    dim3 dimBlock(threads, 1, 1);
    dim3 dimGrid(blocks, 1, 1);
    int smemSize = threads * sizeof(T);

    // choose which of the optimized versions of reduction to launch
    if (isPow2(size))
    {
        switch (threads)
        {
            case 512:
                kernel_reduce_threadfence< T, 512, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case 256:
                kernel_reduce_threadfence< T, 256, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case 128:
                kernel_reduce_threadfence< T, 128, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case 64:
                kernel_reduce_threadfence< T,  64, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case 32:
                kernel_reduce_threadfence< T,  32, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case 16:
                kernel_reduce_threadfence< T,  16, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case  8:
                kernel_reduce_threadfence< T,   8, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case  4:
                kernel_reduce_threadfence< T,   4, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case  2:
                kernel_reduce_threadfence< T,   2, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case  1:
                kernel_reduce_threadfence< T,   1, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;
        }
    }
    else
    {
        switch (threads)
        {
            case 512:
                kernel_reduce_threadfence< T, 512, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case 256:
                kernel_reduce_threadfence< T, 256, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case 128:
                kernel_reduce_threadfence< T, 128, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case 64:
                kernel_reduce_threadfence< T,  64, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case 32:
                kernel_reduce_threadfence< T,  32, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case 16:
                kernel_reduce_threadfence< T,  16, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case  8:
                kernel_reduce_threadfence< T,   8, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case  4:
                kernel_reduce_threadfence< T,   4, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case  2:
                kernel_reduce_threadfence< T,   2, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;

            case  1:
                kernel_reduce_threadfence< T,   1, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_wrk_mem, size);
                break;
        }
    }
    
    T gpu_result;
    cudaMemcpy(&gpu_result, d_wrk_mem, sizeof(T), cudaMemcpyDeviceToHost);
    return gpu_result;
}













// ================================================================== 



template <typename T, unsigned int block_size, bool nIsPow2>
__global__ void kernel_DZdreduce_threadfence(const T *d_arr_in, cuDoubleComplex* d_psi, T *d_wrk_mem, unsigned int n)
{
    extern __shared__ T smem[];
    __shared__ bool amLast;

    unsigned int tid = threadIdx.x;
    unsigned int i = blockIdx.x*(block_size*2) + threadIdx.x;
    unsigned int gridSize = block_size*2*gridDim.x;

    //
    // PHASE 1: Process all inputs assigned to this block
    //
    // we reduce multiple elements per thread.  The number is determined by the
    // number of active thread blocks (via gridDim).  More blocks will result
    // in a larger gridSize and therefore fewer elements per thread
    T sum = 0;
    while (i < n)
    {
        sum += d_arr_in[i]*(d_psi[i].x*d_psi[i].x + d_psi[i].y*d_psi[i].y);

        // check bounds <- this is optimized for 2^N sized arrays
        if (nIsPow2 || i + block_size < n)
            sum += d_arr_in[i+block_size]*(d_psi[i+block_size].x*d_psi[i+block_size].x +
                                           d_psi[i+block_size].y*d_psi[i+block_size].y);

        i += gridSize;
    }
    // perform first level of reduction,
    // reading from global memory, writing to shared memory

    // do reduction in shared mem
    reduce_block<T,block_size>(smem, sum, tid);

    // write result for this block to global mem
    if (tid == 0) d_wrk_mem[blockIdx.x] = smem[0];

    //
    // PHASE 2: Last block finished will process all partial sums
    //

    if (gridDim.x > 1)
    {
        //const unsigned int tid = threadIdx.x;
        //__shared__ bool amLast;
        //extern float __shared__ smem[];
        
        __threadfence(); // wait until all outstanding memory instructions in this thread are finished

        // Thread 0 takes a ticket. If the ticket ID is equal to the number of blocks, we are the last block!
        if (tid==0)  { unsigned int ticket = atomicInc(&retirementCount, gridDim.x); amLast = (ticket == gridDim.x-1); }
        __syncthreads();

        // The last block sums the results of all other blocks
        if (amLast)
        {
            int i = tid; //float mySum = 0;
            while (i < gridDim.x)  { sum += d_wrk_mem[i]; i += block_size; }
            reduce_block<T,block_size>(smem, sum, tid);
            if (tid==0)  { d_wrk_mem[0] = smem[0]; retirementCount = 0; } 
        }
    }
}

template <typename T>
T threadfence_DZdreduce(T *d_data, cuDoubleComplex* d_psi, T *d_wrk_mem, const int size, int threads)
{
    int blocks=(int)ceil((float)size/threads);
    dim3 dimBlock(threads, 1, 1);
    dim3 dimGrid(blocks, 1, 1);
    int smemSize = threads * sizeof(T);

    // choose which of the optimized versions of reduction to launch
    if (isPow2(size))
    {
        switch (threads)
        {
            case 512:
                kernel_DZdreduce_threadfence< T, 512, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case 256:
                kernel_DZdreduce_threadfence< T, 256, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case 128:
                kernel_DZdreduce_threadfence< T, 128, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case 64:
                kernel_DZdreduce_threadfence< T,  64, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case 32:
                kernel_DZdreduce_threadfence< T,  32, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case 16:
                kernel_DZdreduce_threadfence< T,  16, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case  8:
                kernel_DZdreduce_threadfence< T,   8, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case  4:
                kernel_DZdreduce_threadfence< T,   4, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case  2:
                kernel_DZdreduce_threadfence< T,   2, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case  1:
                kernel_DZdreduce_threadfence< T,   1, true><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;
        }
    }
    else
    {
        switch (threads)
        {
            case 512:
                kernel_DZdreduce_threadfence< T, 512, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case 256:
                kernel_DZdreduce_threadfence< T, 256, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case 128:
                kernel_DZdreduce_threadfence< T, 128, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case 64:
                kernel_DZdreduce_threadfence< T,  64, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case 32:
                kernel_DZdreduce_threadfence< T,  32, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case 16:
                kernel_DZdreduce_threadfence< T,  16, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case  8:
                kernel_DZdreduce_threadfence< T,   8, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case  4:
                kernel_DZdreduce_threadfence< T,   4, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case  2:
                kernel_DZdreduce_threadfence< T,   2, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;

            case  1:
                kernel_DZdreduce_threadfence< T,   1, false><<< dimGrid, dimBlock, smemSize >>>(d_data, d_psi, d_wrk_mem, size);
                break;
        }
    }
    
    T gpu_result;
    cudaMemcpy(&gpu_result, d_wrk_mem, sizeof(T), cudaMemcpyDeviceToHost);
    return gpu_result;
}


#endif // __THREAD_FENCE_H__
