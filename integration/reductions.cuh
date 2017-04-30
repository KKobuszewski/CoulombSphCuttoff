#include <stdlib.h>
#include <stdio.h>
#include <cuda.h>
#include <cuda_runtime.h>


#ifndef __REDUCTIONS_CUH__
#define __REDUCTIONS_CUH__


static inline int opt_threads(int new_blocks,int threads, int current_size)
{
    int new_threads;
    if(new_blocks==1)
    {
        new_threads=2;
        while(new_threads<threads)
        {
            if(new_threads>=current_size) break;
            new_threads*=2;
        }
    }
    else new_threads=threads;
    return new_threads;
}

template <unsigned int block_size, typename T>
__device__ inline void warpReduce(volatile T *sdata, unsigned int tid)
{
    if (block_size >= 64) sdata[tid] += sdata[tid + 32];
    if (block_size >= 32) sdata[tid] += sdata[tid + 16];
    if (block_size >= 16) sdata[tid] += sdata[tid +  8];
    if (block_size >=  8) sdata[tid] += sdata[tid +  4];
    if (block_size >=  4) sdata[tid] += sdata[tid +  2];
    if (block_size >=  2) sdata[tid] += sdata[tid +  1];
}

template <unsigned int block_size, typename T>
__global__ void __reduce_kernel__(T *g_idata, T *g_odata, int n)
{
    extern __shared__ T sdata[];
    unsigned int tid = threadIdx.x;
    unsigned int i = blockIdx.x*(blockDim.x*2) + threadIdx.x;
    unsigned int ishift=i+blockDim.x;

    if(ishift<n) sdata[tid] = g_idata[i] + g_idata[ishift];
    else if(i<n) sdata[tid] = g_idata[i];
    else         sdata[tid] = 0.0;
    __syncthreads();

    if (block_size >= 1024) { if (tid < 512) { sdata[tid] += sdata[tid + 512]; } __syncthreads(); }
    if (block_size >=  512) { if (tid < 256) { sdata[tid] += sdata[tid + 256]; } __syncthreads(); }
    if (block_size >=  256) { if (tid < 128) { sdata[tid] += sdata[tid + 128]; } __syncthreads(); }
    if (block_size >=  128) { if (tid <  64) { sdata[tid] += sdata[tid +  64]; } __syncthreads(); }
    if (tid < 32) warpReduce<block_size,T>(sdata, tid);

    if (tid == 0) g_odata[blockIdx.x] = sdata[0];
}

template<typename T>
static inline void call_reduction_kernel(int dim_grid, int dim_block, int size, T *d_idata, T *d_odata, cudaStream_t stream)
{
    int smemSize=dim_block*sizeof(double);
    switch (dim_block)
    {
        case 1024:
            __reduce_kernel__<1024,T><<< dim_grid, dim_block, smemSize , stream >>>(d_idata, d_odata, size); break;
        case 512:
            __reduce_kernel__< 512,T><<< dim_grid, dim_block, smemSize , stream >>>(d_idata, d_odata, size); break;
        case 256:
            __reduce_kernel__< 256,T><<< dim_grid, dim_block, smemSize , stream >>>(d_idata, d_odata, size); break;
        case 128:
            __reduce_kernel__< 128,T><<< dim_grid, dim_block, smemSize , stream >>>(d_idata, d_odata, size); break;
        case 64:
            __reduce_kernel__<  64,T><<< dim_grid, dim_block, smemSize , stream >>>(d_idata, d_odata, size); break;
    }
}

/**
 * Function does fast reduction (sum of elements) of array.
 * Result is located in partial_sums[0] element
 * If partial_sums==array then array will be destroyed
 * @param array - 
 * @param size
 * @param partial_sums
 * @param threads
 * @param stream - stream which the reduction will be performed on
 * */
template<typename T>
inline T block_reduce(T *array, int size, T *partial_sums = NULL, int threads = 1024, cudaStream_t stream = 0)
{
    if (!partial_sums) partial_sums = array;
    
    int blocks=(int)ceil((float)size/threads);
    unsigned int lthreads=threads/2; // Threads is always power of 2
    if(lthreads<64) lthreads=64; // at least 2*warp_size
    unsigned int new_blocks, current_size;
    
    // First reduction of the array
    call_reduction_kernel<T>(blocks, lthreads, size, array, partial_sums,stream);
    
    // Do iteratively reduction of partial_sums
    current_size=blocks;
    while(current_size>1)
    {
        new_blocks=(int)ceil((float)current_size/threads);
        lthreads=opt_threads(new_blocks,threads, current_size)/2;
        if(lthreads<64) lthreads=64; // at least 2*warp_size
        call_reduction_kernel<T>(new_blocks, lthreads, current_size, partial_sums, partial_sums,stream);
        current_size=new_blocks;
    }
    
    T result;
    cudaMemcpy(&result, partial_sums, sizeof(T), cudaMemcpyDeviceToHost);
    
    return result;
}



// ==============================================  EXPECTATION VALUES  ==============================================================================



// make reduction of |\psi|^2 V
template <unsigned int block_size>
__global__ void kernel_DZdreduce(double *entity, cuDoubleComplex *psi, double *d_wrk_mem, int n)
{
    extern __shared__ double sdata[];
    unsigned int tid = threadIdx.x;
    unsigned int i = blockIdx.x*(blockDim.x*2) + threadIdx.x;
    unsigned int ishift=i+blockDim.x;
    
    // count |\psi|^2 * V
    if(ishift<n) sdata[tid] = entity[i]*(psi[i].x*psi[i].x + psi[i].y*psi[i].y) + 
                              entity[ishift]*(psi[ishift].x*psi[ishift].x + psi[ishift].y*psi[ishift].y);
    else if(i<n) sdata[tid] = entity[i]*(psi[i].x*psi[i].x + psi[i].y*psi[i].y);
    else         sdata[tid] = 0.0;
    __syncthreads();

    if (block_size >= 1024) { if (tid < 512) { sdata[tid] += sdata[tid + 512]; } __syncthreads(); }
    if (block_size >=  512) { if (tid < 256) { sdata[tid] += sdata[tid + 256]; } __syncthreads(); }
    if (block_size >=  256) { if (tid < 128) { sdata[tid] += sdata[tid + 128]; } __syncthreads(); }
    if (block_size >=  128) { if (tid <  64) { sdata[tid] += sdata[tid +  64]; } __syncthreads(); }
    if (tid < 32) warpReduce<block_size,double>(sdata, tid);

    if (tid == 0) d_wrk_mem[blockIdx.x] = sdata[0];
}


static inline void call_DZdreduction(int dim_grid, int dim_block, int size, double *d_entity, cuDoubleComplex* d_psi, double *d_wrk_mem, cudaStream_t stream)
{
    int smemSize=dim_block*sizeof(double);
    switch (dim_block)
    {
        case 1024:
            kernel_DZdreduce<1024><<< dim_grid, dim_block, smemSize , stream >>>(d_entity, d_psi, d_wrk_mem, size);
            break;
        case 512:
            kernel_DZdreduce< 512><<< dim_grid, dim_block, smemSize , stream >>>(d_entity, d_psi, d_wrk_mem, size);
            break;
        case 256:
            kernel_DZdreduce< 256><<< dim_grid, dim_block, smemSize , stream >>>(d_entity, d_psi, d_wrk_mem, size);
            break;
        case 128:
            kernel_DZdreduce< 128><<< dim_grid, dim_block, smemSize , stream >>>(d_entity, d_psi, d_wrk_mem, size);
            break;
        case 64:
            kernel_DZdreduce<  64><<< dim_grid, dim_block, smemSize , stream >>>(d_entity, d_psi, d_wrk_mem, size);
            break;
    }
}






#endif