// needed for thrust compilation ...
#include <thrust/device_ptr.h>
#include <thrust/device_vector.h>
#include <thrust/inner_product.h>
#include <thrust/functional.h>
#include <thrust/extrema.h>

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <stdint.h>

#include <cuda.h>
#include <cufft.h>
#include <cuComplex.h> 

// custom includes
#include <utils/compare_thrust.cuh>
#include <Coulomb/Coulomb.hpp>

#define SQRT2  ((double) sqrt(2.))
#define SQRTPI ((double) 1.7724538509055159)



inline __complex__ double gaussian3D(double x, double y,double z, double sigma)
{
    return cexp( -1.*(x*x + y*y + z*z)/( 2.*sigma*sigma) );
    //return 1. + I*0.;
}

inline void fill_array(__complex__ double *psi, double *params)
{
    #pragma omp parallel for num_threads(8) 
    for (int ixyz = 0; ixyz < NXYZ; ixyz++) 
    {  
        int ix,iy,iz,i;
        ixyz2ixiyiz(ixyz,ix,iy,iz,i);
        psi[ixyz] = pow(1./SQRTPI/params[0],1.5) *
                    gaussian3D((double) ix-NX/2.,(double) iy-NY/2.,(double) iz-NZ/2.,params[0]) + I*0.;
    }
}

inline void analytical(double* potential, double* params)
{
    #pragma omp parallel for num_threads(8) 
    for (int ixyz = 0; ixyz < NXYZ; ixyz++) 
    {  
        int ix,iy,iz,i;
        ixyz2ixiyiz(ixyz,ix,iy,iz,i);
        const double r = sqrt( pow((double) ix-NX/2.,2) + pow((double) iy-NY/2.,2) + pow((double) iz-NZ/2.,2) );
        potential[ixyz] = (r == 0) ? params[1]*params[1] / ( 2.0 * SQRTPI*SQRTPI*SQRTPI * params[0]) : 
                                     params[1]*params[1] * erf( r / params[0] ) / (4. * M_PI * r);
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
    double* h_analytical;
    cuDoubleComplex *d_psi;
    double *d_vcoulomb, *d_analytical;
    cuErrCheck(  cudaMallocHost((void**) &h_psi,(size_t)  (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(__complex__  double))  );
    cuErrCheck(  cudaMallocHost((void**) &h_analytical,(size_t)  NX*NY*NZ * sizeof(double))  );
    cuErrCheck(  cudaMalloc((void**) &d_psi,(size_t)  NX*NY*NZ * sizeof(cuDoubleComplex))  );
    cuErrCheck(  cudaMalloc((void**) &d_vcoulomb,(size_t)  NX*NY*NZ * sizeof(double))  );
    cuErrCheck(  cudaMalloc((void**) &d_analytical,(size_t)  NX*NY*NZ * sizeof(double))  );
    
    
    printf("cx: %u %u %u\n",CX,CY,CZ);
    printf("Nx: %ux%ux%u\r%lu\n",NX,NY,NZ,NXYZ);
    
    // initialize Coulomb
    double sigma = 3.;    // rather aho
    double charge = 1.0;
    Coulomb* c = new Coulomb();
    c->set_charge(charge);
    double lcutoff = 0.;
    unsigned lattice[6] = {0};
    c->get_lattice(lattice, &lcutoff);
    
    
    // get analytical result
    double params[2] = { sigma, charge }; // a_ho, charge
    analytical(h_analytical,params);
    save_file<double>("analytical.bin",(void*) h_analytical, NX*NY*NZ );
    cuErrCheck(  cudaMemcpy(d_analytical, h_analytical, (size_t) NX*NY*NZ * sizeof(double), cudaMemcpyHostToDevice)  );
    
    
    // init timing file
    char timing_filename[256];
    snprintf(timing_filename, 256, "timing%ux%ux%u.dat", lattice[0], lattice[1], lattice[2]);
    FILE* file_timing = fopen(timing_filename,"w");
    fprintf(file_timing,"nx\tny\tnz\tthreads\tenlarging\t\t\tcoulomb\t\t\tlessening\n");
    
    unsigned threads = 1024;
    //for (unsigned threads = 32; threads <= 1024; threads += 32)
    //{
        printf("Threads: %u\n",threads);
        
        // timing
        double mean_time_enlarging = 0.0;
        double mean_time_coulomb   = 0.0;
        double mean_time_lessening = 0.0;
        double var_time_enlarging = 0.0;
        double var_time_coulomb   = 0.0;
        double var_time_lessening = 0.0;
        
        unsigned iters = 100;
        for (unsigned it = 0; it < iters; it++)
        {
            // fill orginal array with values
            fill_array(h_psi,&sigma);
            cuErrCheck(  cudaMemcpy( d_psi, h_psi, (size_t) NX*NY*NZ * sizeof(cuDoubleComplex), cudaMemcpyHostToDevice)  );
            if (it == 0) save_file<cuDoubleComplex>("orginal3D.bin",(void*) h_psi, NX*NY*NZ);
            
            // timing
            double time_enlarging = 0.0;
            double time_coulomb   = 0.0;
            double time_lessening = 0.0;
            
            // get density from given wavefunction and save to enlarged array
            c->get_density_enlarged(d_psi,(double*) h_psi,&time_enlarging,threads);
            //if (it == 0) save_file<double>("data/resized3D.bin",(void*) h_psi, (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) );
            
            // perform FFTs and convole with Coulomb kernel
            //c->get_vcoulomb_enlarged((cuDoubleComplex*) h_psi, &time_coulomb,threads);
            c->get_vcoulomb_enlarged_idx3d((cuDoubleComplex*) h_psi, &time_coulomb,threads);
            //if (it == 0) save_file<cuDoubleComplex>("data/density_transform3D.bin",(void*) h_psi, (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ));
            
            // truncate vcoulomb array to size of orginal array and save to given location
            c->get_vcoulomb_lessened(d_vcoulomb, (double*) h_psi, &time_lessening,threads);
            if (it == 0) save_file<double>("vcoulomb.bin",(void*) h_psi, NXYZ);
            
            int differences = 0;
            differences = thrust_compare_arrays<double,-7>(d_vcoulomb, d_analytical, (size_t) NX*NY*NZ);
            if (differences) printf("WARNING: Number of differences: %d\n",differences);
            
            mean_time_enlarging += time_enlarging;
            mean_time_coulomb   += time_coulomb;
            mean_time_lessening += time_lessening;
            var_time_enlarging  += time_enlarging*time_enlarging;
            var_time_coulomb    += time_coulomb*time_coulomb;
            var_time_lessening  += time_lessening*time_lessening;
        }
        
        mean_time_enlarging /= iters;
        mean_time_coulomb   /= iters;
        mean_time_lessening /= iters;
        var_time_enlarging = (var_time_enlarging - mean_time_enlarging*mean_time_enlarging)/(iters - 1);
        var_time_coulomb   = (var_time_coulomb   - mean_time_coulomb*mean_time_coulomb)/(iters - 1);
        var_time_lessening = (var_time_lessening - mean_time_lessening*mean_time_lessening)/(iters - 1);
        
        fprintf(file_timing,"%u\t%u\t%u\t%u\t%.6e\t%.6e\t%.6e\t%.6e\t%.6e\t%.6e\n",
                            lattice[0],lattice[1],lattice[2],threads,
                            mean_time_enlarging,var_time_enlarging,
                            mean_time_coulomb,var_time_coulomb,
                            mean_time_lessening,var_time_lessening);
        //printf("\n\n");
    //}
    
    c->save_info(sigma);
    
    // close files
    fclose(file_timing);
    
    // clean memory
    delete c;
    cudaFree(d_psi);
    cudaFree(d_vcoulomb);
    cudaFree(d_analytical);
    cudaFreeHost(h_psi);
    cudaFreeHost(h_analytical);
    
    return EXIT_SUCCESS;
}