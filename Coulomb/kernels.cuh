#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
#include <stdint.h>

#include <cuda.h>
#include <cuComplex.h>

#include "cuerror.cuh"
#include "Coulomb.hpp"
#include "complex_operators.cuh"

#define SQRT2  ((double) sqrt(2.))
#define SQRTPI ((double) 1.7724538509055159)

// here assuming NX > NY and NX > NZ

// #define CX 64
// #define CY (CX+(NX-NY)/2)
// #define CZ (CX+(NX-NZ)/2)
// 
// #ifndef NXYZ
// #define NXYZ (NX*NY*NZ)
// #endif

#define SQRT2  ((double) sqrt(2.))
#define SQRTPI ((double) 1.7724538509055159)

    
// ============================================================== ARRAY RESIZING KERNELS ====================================================================



/*
 * TODO:
 *      - think how to optimize it together with inserting 0. to empty elements!
 *      - optimize it in case not to read from different memory chunks when N_i is not a multiple of 32
 */
template <const unsigned nx, const unsigned ny, const unsigned nz,
          const unsigned cx, const unsigned cy, const unsigned cz>
__global__ void __kernel_enlarge_1Dindexing__(cuDoubleComplex* array_in, double* array_out)
{
    size_t ixyz = threadIdx.x + blockIdx.x * blockDim.x;
    size_t ix,iy,iz,i;
    
    if (ixyz < nx*ny*nz)
    {
        ixyz2ixiyiz(ixyz,ix,iy,iz,i); // indexes in smaller array
        double density = array_in[ixyz].x*array_in[ixyz].x + array_in[ixyz].y*array_in[ixyz].y;
        //i = (cz + iz) + (2*cz+nz)*(iy+cy) + (2*cz+nz)*(2*cy+ny)*(ix+cx);
        //i = (cx + ix) + (2*cx+nx)*(iy+cy) + (2*cx+nx)*(2*cy+ny)*(iz+cz);
        ixiziy2ixyz(i,cx+ix,cy+iy,cz+iz,nx+2*cx,ny+2*cy,nz+2*cz); // indexes in bigger array
        array_out[i] = density;
    }
}

/*
template <typename T1, typename T2, unsigned nx = NX, unsigned ny = NY, unsigned cx = CX, unsigned cy = CY>
__global__ void __kernel_enlarge_2Dindexing__(T1* array_in, T2* array_out)
{
    
}
*/


template <const unsigned nx, const unsigned ny, const unsigned nz,
          const unsigned cx, const unsigned cy, const unsigned cz>
__global__ void __kernel_lessen_1Dindexing__(double* array_in, double* array_out)
{
    // NOTE: Assuming exactly as many threads as elements in smaller array!
    size_t ixyz = threadIdx.x + blockIdx.x * blockDim.x;
    size_t ix,iy,iz,i;
    
    if (ixyz < NX*NY*NZ)
    {
        ixyz2ixiyiz(ixyz,ix,iy,iz,i); // indexes in smaller array
        ixiziy2ixyz(i,cx+ix,cy+iy,cz+iz,NX+2*CX,NY+2*CY,NZ+2*CZ); // indexes in bigger array
        array_out[ixyz] = array_in[i];
    }
}

/*
template <typename T1, typename T2, unsigned nx = NX, unsigned ny = NY, unsigned cx = CX, unsigned cy = CY>
__global__ void __kernel_lessen_2Dindexing__(T1* array_in, T2* array_out)
{
    
}
*/



// ============================================================= CONVOLUTION KERNELS ======================================================================

__device__ inline cuDoubleComplex _cuRCmul(double r, cuDoubleComplex z1)
{
    cuDoubleComplex z2;
    z2.x = r*z1.x;
    z2.y = r*z1.y;
    return z2;
}

__device__ inline cuDoubleComplex _vcoulomb_k(cuDoubleComplex density_k, const double kx, const double ky, const double kz, double d_charge)
{
    const double k2 = kx*kx + ky*ky + kz*kz;

    return (k2 > 1e-15) ? _cuRCmul(d_charge/k2, density_k ): make_cuDoubleComplex(0.,0.);
}

/*
__global__ void __density_time_vcoulomb_k__(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    size_t ixyz = threadIdx.x + blockIdx.x * blockDim.x;
    unsigned int ix, iy, iz, i;

    // registers
    cuDoubleComplex density;


    if(ixyz<NXYZ)
    {
        ixyz2ixiyiz(ixyz,ix,iy,iz,i);
        density = density_k[ixyz];

        density = _vcoulomb_k(density, d_kkx[ix], d_kky[iy], d_kkz[iz], d_charge[0]);
        density.x = density.x/NXYZ;
        density.y = density.y/NXYZ;
        vcoulomb_k[ixyz] = density;
    }
}
*/

__device__ inline cuDoubleComplex _vcoulomb_sph_cutoff_k(cuDoubleComplex density_k, const double kx, const double ky, const double kz, const double d_charge, const double lcutoff)
{
    const double k2 = kx*kx + ky*ky + kz*kz;

    return (k2 > 1e-15) ? _cuRCmul(d_charge*(1 - sqrt(3)*lcutoff*sqrt(k2))/k2, density_k ): make_cuDoubleComplex(0.,0.);
}

/*
__global__ void kernel_coulomb(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    // registers
    size_t ixyz = threadIdx.x + blockIdx.x * blockDim.x;
    int ix, iy, iz, i;
    double _k2;
    cuDoubleComplex density;
    
    if(ixyz<NXYZ)
    {
        density = density_k[ixyz];
        ixyz2ixiyiz(ixyz,ix,iy,iz,i);
        _k2 =  4. * M_PI * M_PI * ((double) ( ix - NX * ((2*ix)/((int)NX)) ) ) * ((double) ( ix - NX * ((2*ix)/((int)NX)) ) )/((double) NX * DX * NX * DX);
        _k2 += 4. * M_PI * M_PI * ((double) ( iy - NY * ((2*iy)/((int)NY)) ) ) * ((double) ( iy - NY * ((2*iy)/((int)NY)) ) )/((double) NY * DY * NY * DY);
        _k2 += 4. * M_PI * M_PI * ((double) ( iz - NZ * ((2*iz)/((int)NZ)) ) ) * ((double) ( iz - NZ * ((2*iz)/((int)NZ)) ) )/((double) NZ * DZ * NZ * DZ);
        
        density.x = d_charge[0]*density.x/((double)NXYZ * _k2);
        density.y = d_charge[0]*density.y/((double)NXYZ * _k2);
        vcoulomb_k[ixyz] = density;
    }
}
*/

#define GET_ixiyiz(_ixyz,_ix,_iy,_iz,_i,nx,ny,nz)  \
    _i  = _ixyz;                                   \
    _ix = _i/( (ny)*(nz) );                        \
    _i  = _i-_ix * (ny) * (nz);                    \
    _iy = _i/(nz);                                 \
    _iz = _i-_iy * (nz);

template<const int nx, const int ny, const int nz>
__global__ void kernel_coulomb_real0(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    size_t ixyz= threadIdx.x + blockIdx.x * blockDim.x; // compute for this point
    int ix, iy, iz, i;
    double kx, ky, kz, k2;
    cufftDoubleComplex density;

    if(ixyz<nx*ny*(nz/2+1))
    {
        //ixyz2ixiyizD2Z(ixyz,ix,iy,iz,i); // decode cartesian coordinates
        GET_ixiyiz(ixyz,ix,iy,iz,i,nx,ny,(nz/2+1));
        
        
        // extract momentum
        if   ( ix < (nx/2) ) kx=2.*M_PI/( double )nx * ( double )(ix   ); // 
        else                 kx=2.*M_PI/( double )nx * ( double )(ix-nx); // 
        
        if   ( iy < (ny/2) ) ky=2.*M_PI/( double )ny * ( double )(iy   ); // 
        else                 ky=2.*M_PI/( double )ny * ( double )(iy-ny); // 
        
        if   ( iz < (nz/2) ) kz=2.*M_PI/( double )nz * ( double )(iz   ); // 
        else                 kz=2.*M_PI/( double )nz * ( double )(iz-nz); // 
        
        
        k2 = (kx*kx + ky*ky + kz*kz); // 
        density = density_k[ixyz];

        density = (k2 > 1e-15) ? _cuRCmul(d_charge[0]/k2/(nx*ny*nz), density ): make_cuDoubleComplex(0.,0.);
        //density.x = density.x/(nx*ny*nz);
        //density.y = density.y/(nx*ny*nz);
        vcoulomb_k[ixyz] = density;
                     
    }
}

template<const int nx, const int ny, const int nz>
__global__ void kernel_coulomb_sph_cutoff0(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    size_t ixyz= threadIdx.x + blockIdx.x * blockDim.x; // compute for this point
    int ix, iy, iz, i;
    double kx, ky, kz, _k2;
    cufftDoubleComplex density;

    if(ixyz<nx*ny*(nz/2+1))
    {
        //ixyz2ixiyizD2Z(ixyz,ix,iy,iz,i); // decode cartesian coordinates
        GET_ixiyiz(ixyz,ix,iy,iz,i,nx,ny,(nz/2+1));
        
        
        // extract momentum
        if   ( ix < (nx/2) ) kx=2.*M_PI/( double )nx * ( double )(ix   ); // 
        else                 kx=2.*M_PI/( double )nx * ( double )(ix-nx); // 
        
        if   ( iy < (ny/2) ) ky=2.*M_PI/( double )ny * ( double )(iy   ); // 
        else                 ky=2.*M_PI/( double )ny * ( double )(iy-ny); // 
        
        if   ( iz < (nz/2) ) kz=2.*M_PI/( double )nz * ( double )(iz   ); // 
        else                 kz=2.*M_PI/( double )nz * ( double )(iz-nz); // 
        
        
        _k2 = (kx*kx + ky*ky + kz*kz); // 
        density = density_k[ixyz];

        density = (_k2 > 1e-15) ? 
                  _cuRCmul( d_charge[0]*( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*_k2)) )/( (double)nx*ny*nz * _k2 ), density ):
                  make_cuDoubleComplex( density.x * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz),
                                        density.y * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz)  );
        //density.x = density.x/(nx*ny*nz);
        //density.y = density.y/(nx*ny*nz);
        vcoulomb_k[ixyz] = density;
                     
    }
}


// =============================================== ELIMINATING CONDITIONAL EXPRESSIONS =======================================================

template<const int nx, const int ny, const int nz>
__global__ void kernel_coulomb_sph_cutoff1(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    size_t ixyz= threadIdx.x + blockIdx.x * blockDim.x; // compute for this point
    int ix, iy, iz, i;
    double kx, ky, kz, _k2;
    cufftDoubleComplex density;
    
    if      (ixyz == 0)
    {
        density = density_k[ixyz];
        density = make_cuDoubleComplex( density.x * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz),
                                        density.y * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz)  );
        vcoulomb_k[ixyz] = density;
    }
    else if (ixyz<nx*ny*(nz/2+1))
    {
        //ixyz2ixiyizD2Z(ixyz,ix,iy,iz,i); // decode cartesian coordinates
        GET_ixiyiz(ixyz,ix,iy,iz,i,nx,ny,(nz/2+1));
        
        
        // extract momentum
        if   ( ix < (nx/2) ) kx=2.*M_PI/( double )nx * ( double )(ix   ); // 
        else                 kx=2.*M_PI/( double )nx * ( double )(ix-nx); // 
        
        if   ( iy < (ny/2) ) ky=2.*M_PI/( double )ny * ( double )(iy   ); // 
        else                 ky=2.*M_PI/( double )ny * ( double )(iy-ny); // 
        
        if   ( iz < (nz/2) ) kz=2.*M_PI/( double )nz * ( double )(iz   ); // 
        else                 kz=2.*M_PI/( double )nz * ( double )(iz-nz); // 
        
        
        _k2 = (kx*kx + ky*ky + kz*kz); // 
        density = density_k[ixyz];

        density = _cuRCmul( d_charge[0]*( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*_k2)) )/( (double)nx*ny*nz * _k2 ), density );
        vcoulomb_k[ixyz] = density;
                     
    }
}

template<const int nx, const int ny, const int nz>
__global__ void kernel_coulomb_sph_cutoff2(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    size_t ixyz= threadIdx.x + blockIdx.x * blockDim.x; // compute for this point
    int ix, iy, iz, i;
    double kx, ky, kz, _k2;
    cufftDoubleComplex density;
    
    if      (ixyz == 0)
    {
        density = density_k[ixyz];
        density = make_cuDoubleComplex( density.x * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz),
                                        density.y * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz)  );
        vcoulomb_k[ixyz] = density;
    }
    else if (ixyz<nx*ny*(nz/2+1))
    {
        //ixyz2ixiyizD2Z(ixyz,ix,iy,iz,i); // decode cartesian coordinates
        GET_ixiyiz(ixyz,ix,iy,iz,i,nx,ny,(nz/2+1));
        
        
        // extract momentum
        kx = 2.*M_PI/( double )nx * ((double) ( ix - nx * ( (2*ix) / (nx) )  ) ); //
        ky = 2.*M_PI/( double )ny * ((double) ( iy - ny * ( (2*iy) / (ny) )  ) ); //
        kz = 2.*M_PI/( double )nz * ((double) ( iz - nz * ( (2*iz) / (nz) )  ) ); //
        
        _k2 = (kx*kx + ky*ky + kz*kz); // 
        
        density = density_k[ixyz];

        density = _cuRCmul( d_charge[0]*( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*_k2)) )/( (double)nx*ny*nz * _k2 ), density );
        vcoulomb_k[ixyz] = density;
                     
    }
}


// =============================================== BATCHES AND MEMORY ALIGNMENT =======================================================

template<const int nx, const int ny, const int nz, const int batch>
__global__ void kernel_coulomb_sph_cutoff3(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    size_t ixyz= threadIdx.x + blockIdx.x * blockDim.x; // compute for this point
    int ix, iy, iz, i;
    double kx, ky, kz, _k2;
    cufftDoubleComplex density;
    
    if (ixyz == 0)
    {
        density = density_k[0];
        density = make_cuDoubleComplex( density.x * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz),
                                        density.y * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz)  );
        vcoulomb_k[ixyz] = density;
    }
    else
    while (ixyz<nx*ny*(nz/2+1))
    {
        //ixyz2ixiyizD2Z(ixyz,ix,iy,iz,i); // decode cartesian coordinates
        GET_ixiyiz(ixyz,ix,iy,iz,i,nx,ny,(nz/2+1));
        
        // extract momentum
        kx = 2.*M_PI/( double )nx * ((double) ( ix - nx * ((2*ix) / (nx)) )); //
        kx = 2.*M_PI/( double )nx * ((double) ( ix - ny * ((2*iy) / (ny)) )); //
        kx = 2.*M_PI/( double )nx * ((double) ( ix - nz * ((2*iz) / (nz)) )); //
        
        _k2 = (kx*kx + ky*ky + kz*kz); // 
        
        density = density_k[ixyz];
        
        density = _cuRCmul( d_charge[0]*( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*_k2)) )/( (double)nx*ny*nz * _k2 ), density );
        vcoulomb_k[ixyz] = density;
        
        ixyz += nx*ny*(nz/2+1)/batch;
    }
}



// =============================================== CONSTANT MEMORY =======================================================


/*
template<const int nx, const int ny, const int nz, const int batch>
__global__ void kernel_coulomb_sph_cutoff#(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    size_t ixyz= threadIdx.x + blockIdx.x * blockDim.x; // compute for this point
    int ix, iy, iz, i;
    double kx, ky, kz, _k2;
    cufftDoubleComplex density;
    
    ...
    
}
*/


// ============================================ 3D INDEXING ==============================================================


template <const int nx, const int ny, const int nz>
__global__ void kernel_coulomb_sph_cutoff_3Didx0(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    // registers
    int ix = threadIdx.x + blockIdx.x * blockDim.x;
    int iy = threadIdx.y + blockIdx.y * blockDim.y;
    int iz = threadIdx.z + blockIdx.z * blockDim.z;
    //size_t ixyz = iz + nz*iy + nz*ny*ix;
    double _k2;
    cuDoubleComplex density;
    
    //if (ixyz<(nx*ny*nz))
    if ( (iz + nz*iy + nz*ny*ix) == 0 )
    {
        vcoulomb_k[iz + nz*iy + nz*ny*ix] = _cuRCmul(1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz), density_k[0]);
    }
    else if ( (iz < nz) && (iy < ny) && (ix < nx) )
    {
        density = density_k[iz + nz*iy + nz*ny*ix];
        _k2 =  4. * M_PI * M_PI * ((double) ( ix - nx * ((2*ix)/((int)nx)) ) ) * ((double) ( ix - nx * ((2*ix)/((int)nx)) ) )/((double) nx * DX * nx * DX);
        _k2 += 4. * M_PI * M_PI * ((double) ( iy - ny * ((2*iy)/((int)ny)) ) ) * ((double) ( iy - ny * ((2*iy)/((int)ny)) ) )/((double) ny * DY * ny * DY);
        _k2 += 4. * M_PI * M_PI * ((double) ( iz - nz * ((2*iz)/((int)nz)) ) ) * ((double) ( iz - nz * ((2*iz)/((int)nz)) ) )/((double) nz * DZ * nz * DZ);
        
        density.x = d_charge[0]*density.x*(1 - d_lcutoff[0]*sqrt(3.0*_k2))/((double)NXYZ * _k2);
        density.y = d_charge[0]*density.y*(1 - d_lcutoff[0]*sqrt(3.0*_k2))/((double)NXYZ * _k2);
        
        vcoulomb_k[iz + nz*iy + nz*ny*ix] = density;
    }
}


template <const int nx, const int ny, const int nz>
__global__ void kernel_coulomb_sph_cutoff_3Didx(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    // registers
    int ix = threadIdx.x + blockIdx.x * blockDim.x;
    int iy = threadIdx.y + blockIdx.y * blockDim.y;
    int iz = threadIdx.z + blockIdx.z * blockDim.z;
    //size_t ixyz = iz + nz*iy + nz*ny*ix;
    double k2;
    cuDoubleComplex density;
    
    // density_k[:,:,:NZ/2]
    if ( (iz < nz/2) && (iy < ny) && (ix < nx) )
    {
        density = density_k[iz + (nz/2+1)*iy + (nz/2+1)*ny*ix];
        
        // TODO: use ((double) ix*ix)
        k2 =  4. * M_PI * M_PI * ((double) ( ix - nx * ((2*ix)/((int)nx)) ) ) * ((double) ( ix - nx * ((2*ix)/((int)nx)) ) )/((double) nx * DX * nx * DX);
        k2 += 4. * M_PI * M_PI * ((double) ( iy - ny * ((2*iy)/((int)ny)) ) ) * ((double) ( iy - ny * ((2*iy)/((int)ny)) ) )/((double) ny * DY * ny * DY);
        k2 += 4. * M_PI * M_PI * ((double) ( iz - nz * ((2*iz)/((int)nz)) ) ) * ((double) ( iz - nz * ((2*iz)/((int)nz)) ) )/((double) nz * DZ * nz * DZ);
        
        vcoulomb_k[iz + (nz/2+1)*iy + (nz/2+1)*ny*ix] = (k2 > 1e-15) ? (d_charge[0]*(1 - d_lcutoff[0]*sqrt(3.0*k2))/((double)NXYZ * k2))*density :
                                                  make_cuDoubleComplex( density.x * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz),
                                                                        density.y * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz)  );
    }
    
    // density_k[:,:,NZ/2+1] <- known index iz
    if (iz == 0)
    {
        density = density_k[nz/2 + (nz/2+1)*iy + (nz/2+1)*ny*ix];
        
        k2 =  4. * M_PI * M_PI * ((double) ( ix - nx * ((2*ix)/((int)nx)) ) ) * ((double) ( ix - nx * ((2*ix)/((int)nx)) ) )/((double) nx * DX * nx * DX);
        k2 += 4. * M_PI * M_PI * ((double) ( iy - ny * ((2*iy)/((int)ny)) ) ) * ((double) ( iy - ny * ((2*iy)/((int)ny)) ) )/((double) ny * DY * ny * DY);
        k2 += 4. * M_PI * M_PI * ((double) ( nz/2 - nz * ((2*iz)/((int)nz)) ) ) * ((double) ( nz/2 - nz * ((2*iz)/((int)nz)) ) )/((double) nz * DZ * nz * DZ);
        
        vcoulomb_k[nz/2 + (nz/2+1)*iy + (nz/2+1)*ny*ix] = (k2 > 1e-15) ? (d_charge[0]*(1 - d_lcutoff[0]*sqrt(3.0*k2))/((double)NXYZ * k2))*density :
                                                    make_cuDoubleComplex( density.x * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz),
                                                                          density.y * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz)  );
        //printf( "%d %d %d %d \n",ix, iy, iz, nz/2 + (nz/2+1)*iy + (nz/2+1)*ny*ix );
    }
}



// =============================================== OTHER =================================================================

template <const int nx, const int ny, const int nz>
__global__ void kernel_coulomb_sph_cutoff(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    // registers
    size_t ixyz = threadIdx.x + blockIdx.x * blockDim.x;
    int i,ix,iy,iz;
    double _k2;
    cuDoubleComplex density;
    
    // else if should generate one ptx instruction less?
    if (ixyz == 0)
    {
        //GET_IXIYIZ(ixyz,ix,iy,iz,i,nx,ny,nz);
        density = density_k[0];
        
        density.x *= 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz);
        density.y *= 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz);
        
        vcoulomb_k[ixyz] = density;
    }
    else if ( ixyz<(nx*ny*nz) )
    {
        GET_IXIYIZ(ixyz,ix,iy,iz,i,nx,ny,nz);
        density = density_k[ixyz];
        _k2 =  4. * M_PI * M_PI * ((double) ( ix - nx * ( (2*ix) / (nx) )  ) ) *
                                  ((double) ( ix - nx * ( (2*ix) / (nx) )  ) )/((double) nx * DX * nx * DX);
        _k2 += 4. * M_PI * M_PI * ((double) ( iy - ny * ( (2*iy) / (ny) )  ) ) *
                                  ((double) ( iy - ny * ( (2*iy) / (ny) )  ) )/((double) ny * DY * ny * DY);
        _k2 += 4. * M_PI * M_PI * ((double) ( iz - nz * ( (2*iz) / (nz) )  ) ) *
                                  ((double) ( iz - nz * ( (2*iz) / (nz) )  ) )/((double) nz * DZ * nz * DZ);
        
        density.x = d_charge[0] * density.x * ( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*_k2)) )/( (double)nx*ny*nz * _k2 );
        density.y = d_charge[0] * density.y * ( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*_k2)) )/( (double)nx*ny*nz * _k2 );
        
        vcoulomb_k[ixyz] = density;
    }
}
