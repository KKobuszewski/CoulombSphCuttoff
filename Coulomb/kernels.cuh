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

__device__ inline cuDoubleComplex cmath_DZ_mul(double r, cuDoubleComplex z1)
{
    cuDoubleComplex z2;
    z2.x = r*z1.x;
    z2.y = r*z1.y;
    return z2;
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
                  cmath_DZ_mul( d_charge[0]*( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*_k2)) )/( (double)nx*ny*nz * _k2 ), density ):
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
        
        kz = 2.*M_PI/((double)nz) * iz; // TODO: not sure if the results are 100% reliable!!!
        
        
        _k2 = (kx*kx + ky*ky + kz*kz); // 
        density = density_k[ixyz];

        density = cmath_DZ_mul( d_charge[0]*( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*_k2)) )/( (double)nx*ny*nz * _k2 ), density );
        vcoulomb_k[ixyz] = density;
        
        /*
        if (iz == 0)
        {
            density = density_k[nz/2 + (nz/2+1)*iy + (nz/2+1)*ny*ix];
            kz = 2.*M_PI/((double)nz) * nz/2;
            _k2 = kx*kx + ky*ky + M_PI*M_PI;
            density = cmath_DZ_mul( d_charge[0]*( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*_k2)) )/( (double)nx*ny*nz * _k2 ), density );
            vcoulomb_k[nz/2 + (nz/2+1)*iy + (nz/2+1)*ny*ix] = density;
        }
        */
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
        // decode cartesian coordinates
        GET_ixiyiz(ixyz,ix,iy,iz,i,nx,ny,(nz/2+1));
        
        
        // extract momentum
        kx = 2.*M_PI/( double )nx * ((double) ( ix - nx * ( (2*ix) / (nx) )  ) ); //
        ky = 2.*M_PI/( double )ny * ((double) ( iy - ny * ( (2*iy) / (ny) )  ) ); //
        kz = 2.*M_PI/( double )nz * ((double) ( iz - nz * ( (2*iz) / (nz) )  ) ); //
        
        _k2 = (kx*kx + ky*ky + kz*kz); // 
        
        density = density_k[ixyz];

        density = cmath_DZ_mul( d_charge[0]*( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*_k2)) )/( (double)nx*ny*nz * _k2 ), density );
        vcoulomb_k[ixyz] = density;
    }
}




// =============================================== CONSTANT MEMORY =======================================================


template<const int nx, const int ny, const int nz>
__global__ void kernel_coulomb_sph_cutoff_cnst0(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    size_t ixyz= threadIdx.x + blockIdx.x * blockDim.x; // compute for this point
    int ix, iy, iz, i;
    double k2; //kx, ky, kz, 
    cufftDoubleComplex density;
    
    if ( ixyz == 0 )
    {
        density = density_k[ixyz];
        density = make_cuDoubleComplex( density.x * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz),
                                        density.y * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz)  );
        vcoulomb_k[ixyz] = density;
    }
    else if(ixyz<nx*ny*(nz/2+1))
    {
        GET_ixiyiz(ixyz,ix,iy,iz,i,nx,ny,(nz/2+1)); // decode cartesian coordinates
        
        // extract momentum
        k2 = (d_kkx[ix]*d_kkx[ix] + d_kky[iy]*d_kky[iy] + d_kkz[iz]*d_kkz[iz]);
        
        density = cmath_DZ_mul( d_charge[0]*( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*k2)) )/( (double)nx*ny*nz * k2 ), density_k[ixyz] );
        vcoulomb_k[ixyz] =  density;
    }
}

// check out for strides
template<const int nx, const int ny, const int nz>
__global__ void kernel_coulomb_sph_cutoff_cnst1(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    size_t ixyz= threadIdx.x + blockIdx.x * blockDim.x; // compute for this point
    int ix, iy, iz, i;
    double k2; //kx, ky, kz, 
    cufftDoubleComplex density;
    
    while (ixyz<nx*ny*(nz/2+1))
    {
        if ( ixyz == 0 )
        {
            density = density_k[ixyz];
            density = make_cuDoubleComplex( density.x * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz),
                                            density.y * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz)  );
            vcoulomb_k[ixyz] = density;
        }
        else
        {
            GET_ixiyiz(ixyz,ix,iy,iz,i,nx,ny,(nz/2+1)); // decode cartesian coordinates
            
            // extract momentum
            k2 = (d_kkx[ix]*d_kkx[ix] + d_kky[iy]*d_kky[iy] + d_kkz[iz]*d_kkz[iz]);
            
            density = cmath_DZ_mul( d_charge[0]*( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*k2)) )/( (double)nx*ny*nz * k2 ), density_k[ixyz] );
            vcoulomb_k[ixyz] =  density;
        }
        ixyz +=nx*ny*(nz/2+1)/2;
    }
}

template<const int nx, const int ny, const int nz>
__global__ void kernel_coulomb_sph_cutoff_cnst2(cuDoubleComplex* density_k, cuDoubleComplex* vcoulomb_k)
{
    size_t ixyz= threadIdx.x + blockIdx.x * blockDim.x; // compute for this point
    int ix, iy, iz, i;
    double k2; //kx, ky, kz, 
    cufftDoubleComplex density;
    
    while (ixyz<nx*ny*(nz/2+1))
    {
        if ( ixyz == 0 )
        {
            density = density_k[ixyz];
            density = make_cuDoubleComplex( density.x * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz),
                                            density.y * 1.5 * d_charge[0] * d_lcutoff[0]*d_lcutoff[0] / ((double)nx*ny*nz)  );
            vcoulomb_k[ixyz] = density;
        }
        else
        {
            GET_ixiyiz(ixyz,ix,iy,iz,i,nx,ny,(nz/2+1)); // decode cartesian coordinates
            
            // extract momentum
            k2 = (d_kkx[ix]*d_kkx[ix] + d_kky[iy]*d_kky[iy] + d_kkz[iz]*d_kkz[iz]);
            
            density = cmath_DZ_mul( d_charge[0]*( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*k2)) )/( (double)nx*ny*nz * k2 ), density_k[ixyz] );
            vcoulomb_k[ixyz] =  density;
        }
        ixyz +=nx*ny*(nz/2+1)/4;
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
        
        density = cmath_DZ_mul( d_charge[0]*( 1.0 - cos(d_lcutoff[0]*sqrt(3.0*_k2)) )/( (double)nx*ny*nz * _k2 ), density );
        vcoulomb_k[ixyz] = density;
        
        ixyz += nx*ny*(nz/2+1)/batch;
    }
}

