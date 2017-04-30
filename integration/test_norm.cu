#include <thrust/device_ptr.h>
#include <thrust/device_vector.h>
#include <thrust/inner_product.h>
#include <thrust/functional.h>
#include <thrust/iterator/counting_iterator.h>

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <stdint.h>

#include <cuda.h>
#include <cufft.h>
#include <cuComplex.h>

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

inline __complex__ double gaussian3D(double x, double y,double z, double sigma)
{
    return cexp( -1.*(x*x + y*y + z*z)/( 2.*sigma*sigma) );
    //return 1. + I*0.;
}

inline void fill_array(__complex__ double *psi, double *params)
{
    #pragma omp parallel for num_threads(8) 
    for (int ix = 0; ix < NX; ix++)  
    for (int iy = 0; iy < NY; iy++)  
    for (int iz = 0; iz < NZ; iz++) 
    {
        psi[iz + NZ*(iy + NY*ix)] = gaussian3D((double) ix-NX/2,(double) iy-NY/2,(double) iz-NZ/2,params[0]) + I*0.;
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
    cuErrCheck(  cudaMallocHost((void**) &h_psi,(size_t)  NXYZ * sizeof(__complex__  double))  );
    cuErrCheck(  cudaMalloc((void**) &d_psi,(size_t)  NXYZ * sizeof(cuDoubleComplex))  );
    
    
    
    // initialize Integration module
    Integration<NX,NY,NZ>* integ = new Integration<NX,NY,NZ>();
    
    
    // get analytical result
    double sigma = 5.0; // a_ho, charge
    fill_array(h_psi,&sigma);
    save_file<__complex__ double>("orginal.bin",(void*) h_psi, NX*NY*NZ );
    cuErrCheck(  cudaMemcpy(d_psi, h_psi, (size_t) NX*NY*NZ * sizeof(cuDoubleComplex), cudaMemcpyHostToDevice)  );
    
    
    double norm = 0.0;
    norm = integ->normalize_cublas(d_psi);
    
    printf("psi(0,0): %lf\n",creal(h_psi[NZ/2 + NZ*(NY/2 + NY*NX/2)]));
    printf("norm^2= %lf\t\t(sigma*sigma*pi)^(3/2): %lf\n",norm*norm, pow( sigma*sigma*M_PI, 1.5 ) ); // norm of square of gaussian!
    // for sigma = 10  ->  15749.609945722419
    printf("%lf\n",integ->get_norm_cublas(d_psi));
    cuErrCheck(  cudaMemcpy(h_psi, d_psi, (size_t) NX*NY*NZ * sizeof(cuDoubleComplex), cudaMemcpyDeviceToHost)  );
    
    
    printf("psi(0,0): %lf\t%lf\n",creal(h_psi[NZ/2 + NZ*(NY/2 + NY*NX/2)]), 1./norm);
    
    delete integ;
    cudaFree(d_psi);
    cudaFreeHost(h_psi);
    
    return EXIT_SUCCESS;
}