#include <thrust/device_ptr.h>
#include <thrust/device_vector.h>
#include <thrust/transform_reduce.h>
#include <thrust/functional.h>

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <stdint.h>

#include <cuda.h>
#include <cufft.h>
#include <cuComplex.h>


#include <cuerror.cuh>
#include <reductions.cuh>
#include <thread_fence_reductions.cuh>
#include <cub_utils.cuh>


#ifndef NX
#define NX 128
#endif

#ifndef NY
#define NY 128
#endif

#ifndef NZ
#define NZ 128
#endif

#define NXYZ (NX*NY*NZ)

inline double gaussian3D(double x, double y,double z, double sigma)
{
    return exp( -1.*(x*x + y*y + z*z)/( 2.*sigma*sigma) );
}

inline void fill_array(double *psi, double *params)
{
    #pragma omp parallel for num_threads(8) 
    for (int ix = 0; ix < NX; ix++)  
    for (int iy = 0; iy < NY; iy++)  
    for (int iz = 0; iz < NZ; iz++) 
    {
        psi[iz + NZ*(iy + NY*ix)] = gaussian3D((double) ix-NX/2,(double) iy-NY/2,(double) iz-NZ/2,params[0]);
    }
}



template<typename T>
inline void save_file(const char* filename, void* data, size_t size)
{
    FILE* file = fopen(filename,"wb");
    fwrite(data,(size_t) size * sizeof(T),1,file);
    fclose(file);
}

int main(int argc, char* argv[])
{
    double *h_psi; // used as a buffer on host side, be careful of 'magic' with pointer casting
    double *d_psi, *d_wrk_mem;
    cuErrCheck(  cudaMallocHost((void**) &h_psi,(size_t)  NXYZ * sizeof(double))  );
    cuErrCheck(  cudaMalloc((void**) &d_psi,(size_t)  NXYZ * sizeof(double))  );
    cuErrCheck(  cudaMalloc((void**) &d_wrk_mem,(size_t)  NXYZ * sizeof(double))  );
    
    
    
    
    // get analytical result
    double sigma = 5.0; // a_ho, charge
    fill_array(h_psi,&sigma);
    //save_file<double>("orginal.bin",(void*) h_psi, NX*NY*NZ );
    cuErrCheck(  cudaMemcpy(d_psi, h_psi, (size_t) NXYZ * sizeof(double), cudaMemcpyHostToDevice)  );
    
    
    double result = 0.0;
    
    printf("Threadfence reduce\n");
    for (int it=0; it<100; it++)
    result = threadfence_reduce<double>(d_psi, d_wrk_mem, NXYZ);
    printf("result: %lf   /    %lf\n",result,pow( 2.*sigma*sigma*M_PI, 1.5 ) );
    printf("\n");
    
    printf("Simple reduce\n");
    for (int it=0; it<100; it++)
    result = block_reduce<double>(d_psi, NXYZ, d_wrk_mem);
    printf("result: %lf   /    %lf\n",result,pow( 2.*sigma*sigma*M_PI, 1.5 ) );
    printf("\n");
    
    printf("CUB reduce\n");
    for (int it=0; it<100; it++)
    //result = cub_reduce<double>(d_psi, NXYZ, d_wrk_mem);
    result = cub_reduce<double>(d_psi, NXYZ);
    printf("result: %lf   /    %lf\n",result,pow( 2.*sigma*sigma*M_PI, 1.5 ) );
    printf("\n");
    
    printf("Thrust reduce\n");
    for (int it=0; it<100; it++)
    result = thrust::reduce(thrust::device_pointer_cast<double>(d_psi),
                            thrust::device_pointer_cast<double>(d_psi+NXYZ),
                            (double) 0.0, thrust::plus<double>());
    printf("result: %lf   /    %lf\n",result,pow( 2.*sigma*sigma*M_PI, 1.5 ) );
    printf("\n");
    
    
    cudaFree(d_psi);
    cudaFreeHost(h_psi);
    
    return EXIT_SUCCESS;
}