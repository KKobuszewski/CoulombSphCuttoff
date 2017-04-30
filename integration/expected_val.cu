#include <thrust/device_ptr.h>
#include <thrust/device_vector.h>
#include <thrust/inner_product.h>
#include <thrust/functional.h>
#include <thrust/iterator/counting_iterator.h>
//#include <thrust/functional.h>
//#include <thrust/transform_reduce.h>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
#include <stdint.h>

#include <cuda.h>
#include <cufft.h>
#include <cuComplex.h>



#include <cuerror.cuh>
#include <cutimer.h>
//#include <reductions.cuh>
#include <cub_utils.cuh>
#include <Integration.hpp>


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

/*
 * Calculation of integral 
 * Integrate[
 *   Exp[-((x^2 + y^2 + z^2)/\[Sigma]^2)] (x /\[Sigma])^2, 
 *   {x, -Infinity, Infinity}, {y, -Infinity, Infinity}, {z, -Infinity, Infinity}
 * ]
 * The result should be 0.5 pi^3/2 sigma^3
 */

inline __complex__ double gaussian3D(double x, double y,double z, double sigma)
{
    return cexp( -1.*(x*x + y*y + z*z)/( 2.*sigma*sigma) );
}

inline void fill_array(__complex__ double *psi, double *params)
{
    printf("%lf\n",params[0]);
    #pragma omp parallel for num_threads(8) 
    for (int ix = 0; ix < NX; ix++)  
    for (int iy = 0; iy < NY; iy++)  
    for (int iz = 0; iz < NZ; iz++)
    {
        //psi[iz + NZ*(iy + NY*ix)] = 1.0 + I*0.;
        psi[iz + NZ*(iy + NY*ix)] = gaussian3D((double) ix-NX/2,(double) iy-NY/2,(double) iz-NZ/2,params[0]); //  
        //if (iz == 1) printf("%lf+%lfj\n",creal(psi[iz + NZ*(iy + NY*ix)]), cimag(psi[iz + NZ*(iy + NY*ix)]) );
    }
}

inline void potential(double *V, double *params)
{
    #pragma omp parallel for num_threads(8) 
    for (int ix = 0; ix < NX; ix++)
    for (int iy = 0; iy < NY; iy++)
    for (int iz = 0; iz < NZ; iz++)
    {
        //V[iz + NZ*(iy + NY*ix)] = ((double) (ix-NX/2 + iy-NY/2 + iz-NZ/2))/params[0]; // 0
        V[iz + NZ*(iy + NY*ix)] = 1.0; // times to
        //V[iz + NZ*(iy + NY*ix)] = ( ((double)ix-NX/2) * ((double)ix-NX/2) )/params[0]/params[0]; // what printed
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
    __complex__ double *h_psi; // used as a buffer on host side, be careful of 'magic' with pointer casting
    cuDoubleComplex *d_psi;
    double* h_entity, *d_entity;
    cuErrCheck(  cudaMallocHost((void**) &h_psi,(size_t)  NXYZ * sizeof(__complex__  double))  );
    cuErrCheck(  cudaMallocHost((void**) &h_entity,(size_t)  NXYZ * sizeof(double))    );
    cuErrCheck(  cudaMalloc((void**) &d_psi,(size_t)  NXYZ * sizeof(cuDoubleComplex))  );
    cuErrCheck(  cudaMalloc((void**) &d_entity,(size_t)  NXYZ * sizeof(double))        );
    
    // initialize Integration module
    Integration<NX,NY,NZ>* integ = new Integration<NX,NY,NZ>();
    
    
    // get analytical result
    double sigma = 5.0; // a_ho, charge
    fill_array(h_psi,&sigma);
    potential(h_entity,&sigma);
    save_file<__complex__ double>("orginal.bin",(void*) h_psi, NX*NY*NZ );
    cuErrCheck(  cudaMemcpy(d_psi, h_psi, (size_t) NX*NY*NZ * sizeof(cuDoubleComplex), cudaMemcpyHostToDevice)  );
    cuErrCheck(  cudaMemcpy(d_entity, h_entity, (size_t) NX*NY*NZ * sizeof(double), cudaMemcpyHostToDevice)  );
    
    
    double val = 0.0;
    
    printf("Integrating custom...\n");
    for (int it=0; it<100; it++)
        val = integ->get_exp_val_rect_custom(d_entity, d_psi);
    printf( "%e\t/\t%e\n", val, 0.5*pow(sqrt(M_PI)*sigma,3) );
    printf("\n");
    
    
    printf("Integrating custom...\n");
    for (int it=0; it<100; it++)
        val = integ->get_exp_val_rect_threadfence(d_entity,d_psi,128);
    printf( "%e\t/\t%e\n", val, 0.5*pow(sqrt(M_PI)*sigma,3) );
    printf("\n");
    
    
    printf("Integrating Thrust...\n");
    for (int it=0; it<100; it++)
        val = integ->get_exp_val_rect_thrust(d_entity,d_psi);
    printf( "%e\t/\t%e\n", val, 0.5*pow(sqrt(M_PI)*sigma,3) );
    printf("\n");
    
    
    
    printf("Integrating CUBLAS...\n");
    cuDoubleComplex c_val;
    for (int it=0; it<100; it++)
        c_val = integ->get_exp_val_rect_cublas(d_entity,d_psi);
    printf( "%lf+%lfj\t/\t%lf\n", c_val.x, c_val.y, 0.5*pow(sqrt(M_PI)*sigma,3) );
    printf("\n");
    
    delete integ;
    cudaFree(d_psi);
    cudaFree(d_entity);
    cudaFreeHost(h_psi);
    cudaFreeHost(h_entity);
    
    return EXIT_SUCCESS;
}