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
 
 
#ifndef __CUB_UTILS_CUH__
#define __CUB_UTILS_CUH__

#include <stdio.h>
#include <stdlib.h>

// CUDA
#include <cuda.h>
#include <cuda_runtime.h>

// CUB Library
#include <cub/util_debug.cuh>
#include <cub/util_device.cuh>
#include <cub/util_type.cuh>
#include <cub/util_macro.cuh>
#include <cub/util_allocator.cuh>
#include <cub/device/device_reduce.cuh>

// Ensure printing of CUDA runtime errors to console
#define CUB_STDERR
cub::CachingDeviceAllocator  g_allocator(true);  // Caching allocator for device memory



inline cudaError_t device_init(const int dev = 0)
{
    const cudaError_t error = CubDebug(cudaSetDevice(dev));
    if (error != cudaSuccess) exit(EXIT_FAILURE);
    
    return error;
}

inline cudaError_t device_properties(const int dev = 0)
{
    cudaError_t error = cudaSuccess;
    
    cudaDeviceProp  deviceProp;
    float           device_giga_bandwidth;
    size_t          device_free_physmem;
    size_t          device_total_physmem;
    
    CubDebugExit(cudaMemGetInfo(&device_free_physmem, &device_total_physmem));
    
    int ptx_version;
    error = CubDebug(cub::PtxVersion(ptx_version));
    if (error != cudaSuccess) exit(EXIT_FAILURE);
    
    error = CubDebug(cudaGetDeviceProperties(&deviceProp, dev));
    if (error != cudaSuccess) exit(EXIT_FAILURE);
    
    error = CubDebug(cudaGetDeviceProperties(&deviceProp, dev));
    if (error != cudaSuccess) exit(EXIT_FAILURE);
    
    if (deviceProp.major < 1)
    {
        fprintf(stderr, "Device does not support CUDA.\n");
        exit(1);
    }
    
    device_giga_bandwidth = float(deviceProp.memoryBusWidth) * deviceProp.memoryClockRate * 2 / 8 / 1000 / 1000;

    printf("Using device %d: %s (PTX version %d, SM%d, %d SMs, "
           "%lld free / %lld total MB physmem, "
           "%.3f GB/s @ %d kHz mem clock, ECC %s)\n",
           dev,
           deviceProp.name,
           ptx_version,
           deviceProp.major * 100 + deviceProp.minor * 10,
           deviceProp.multiProcessorCount,
           (unsigned long long) device_free_physmem / 1024 / 1024,
           (unsigned long long) device_total_physmem / 1024 / 1024,
           device_giga_bandwidth,
           deviceProp.memoryClockRate,
           (deviceProp.ECCEnabled) ? "on" : "off");
           fflush(stdout);
    return error;
}

/**
 * Function counts elementwise sum of array with help of CUB library routines.
 * @param T*     d_in   - input array of type T
 * @param size_t n      - size of input array
 * 
 * @return T            - sum of elements of array
 * */
template<typename T> inline T cub_reduce(T* d_in, size_t n)
{
    // Allocate device output array
    T sum, *d_out = NULL;
    CubDebugExit(g_allocator.DeviceAllocate((void**)&d_out, sizeof(T) * 1));

    // Request and allocate temporary storage
    T* d_temp_storage = NULL;
    size_t  temp_storage_bytes = 0;
    CubDebugExit( cub::DeviceReduce::Sum(d_temp_storage, temp_storage_bytes, d_in, d_out, n) );
    printf("CUB bytes requested: %lu / %lu\n",temp_storage_bytes, n*sizeof(T));
    CubDebugExit( g_allocator.DeviceAllocate((void**)&d_temp_storage, temp_storage_bytes)                );
//     if ( !d_temp_storage )
//     {
//         CubDebugExit( g_allocator.DeviceAllocate((void**)&d_temp_storage, temp_storage_bytes)  );
//     }
    
    // Perform reduction algorithm
    CubDebugExit( cub::DeviceReduce::Sum(d_temp_storage, temp_storage_bytes, d_in, d_out, n) );
    
    // Copy result to host
    cudaMemcpy(&sum, d_out, sizeof(T), cudaMemcpyDeviceToHost);
    
    return sum;
}

/**
 * TODO: FIND OUT WHY NOT WORKING!!!
 * Function counts elementwise sum of array with help of CUB library routines.
 * @param T*     d_in   - input array of type T
 * @param size_t n      - size of input array
 * 
 * @return T            - sum of elements of array
 * */
template<typename T> inline T cub_reduce(T* d_in, size_t n, T* d_temp_storage)
{
    // Allocate device output array
    T sum, *d_out = NULL;
    CubDebugExit(g_allocator.DeviceAllocate((void**)&d_out, sizeof(T) * 1));

    // Request and allocate temporary storage
    size_t  temp_storage_bytes = 0;
    CubDebugExit( cub::DeviceReduce::Sum(d_temp_storage, temp_storage_bytes, d_in, d_out, n) );
    
    // Perform reduction algorithm
    CubDebugExit( cub::DeviceReduce::Sum(d_temp_storage, temp_storage_bytes, d_in, d_out, n) );
    
    // Copy result to host
    cudaMemcpy(&sum, d_out, sizeof(T), cudaMemcpyDeviceToHost);
    
    return sum;
}




#endif