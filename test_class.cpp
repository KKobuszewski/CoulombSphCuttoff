#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#define SQRT2  ((double) sqrt(2.))
#define SQRTPI ((double) 1.7724538509055159)

#include <Coulomb.hpp>

inline __complex__ double gaussian3D(double x, double y,double z, double sigma)
{
    return cexp( -1.*(x*x + y*y + z*z)/( 2.*sigma*sigma) );
    //return 1. + I*0.;
}

inline void fill_array(__complex__ double *psi, double *params)
{
    for (int ixyz = 0; ixyz < NXYZ; ixyz++) 
    {  
        int ix,iy,iz,i;
        ixyz2ixiyiz(ixyz,ix,iy,iz,i);
        psi[ixyz] = pow(1./SQRTPI/params[0],1.5) *
                    gaussian3D((double) ix-NX/2.,(double) iy-NY/2.,(double) iz-NZ/2.,params[0]) + I*0.;
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
    double *d_vcoulomb;
    cuErrCheck(  cudaMallocHost((void**) &h_psi,(size_t)  (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(__complex__  double))  );
    cuErrCheck(  cudaMalloc((void**) &d_psi,(size_t)  NX*NY*NZ * sizeof(cuDoubleComplex))  );
    cuErrCheck(  cudaMalloc((void**) &d_vcoulomb,(size_t)  NX*NY*NZ * sizeof(double))  );
    
    // fill orginal array with values
    double sigma = 5.;
    fill_array(h_psi,&sigma);
    cuErrCheck(  cudaMemcpy( d_psi, h_psi, (size_t) NX*NY*NZ * sizeof(cuDoubleComplex), cudaMemcpyHostToDevice)  );
    save_file<cuDoubleComplex>("data/orginal3D.bin",(void*) h_psi, NXYZ);
    
    // initialize Coulomb
    Coulomb* c = new Coulomb();
    c->set_charge(1.0);
    
    // timing
    double time_enlarging = 0.0;
    double time_coulomb   = 0.0;
    double time_lessening = 0.0;
    
    // get density from given wavefunction and save to enlarged array
    c->get_density_enlarged(d_psi,(cuDoubleComplex*) h_psi,&time_enlarging);
    save_file<cuDoubleComplex>("data/resized3D.bin",(void*) h_psi, (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) );
    
    // perform FFTs and convole with Coulomb kernel
    c->get_vcoulomb_enlarged((cuDoubleComplex*) h_psi, &time_coulomb);
    save_file<cuDoubleComplex>("data/density_transform3D.bin",(void*) h_psi, (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ));
    
    // truncate vcoulomb array to size of orginal array and save to given location
    c->get_vcoulomb_lessened(d_vcoulomb, (double*) h_psi, &time_lessening);
    save_file<double>("data/vcoulomb.bin",(void*) h_psi, NXYZ);
    
    c->save_info(sigma);
    
    delete c;
    cudaFree(d_psi);
    cudaFreeHost(h_psi);
    
    return EXIT_SUCCESS;
}