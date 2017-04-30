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
 

#ifndef __COULOMB_HPP__
#define __COULOMB_HPP__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
#include <stdint.h>

#include <algorithm>

#include <cuda.h>
#include <cufft.h>
#include <cuComplex.h>

#include "cuerror.cuh"
#include "cutimer.h"

#define SQRT2  ((double) sqrt(2.))
#define SQRTPI ((double) 1.7724538509055159)

// TODO: Consider using a macro below in case of memory alignment
#define ROUND_UP(N, S) ((((N) + (S) - 1) / (S)) * (S))

#ifndef NX
#define NX 64
#endif

#ifndef NY
#define NY 48
#endif

#ifndef NZ
#define NZ 32
#endif

#ifndef CX
#define CX ROUND_UP( (97*NX/112), 32 )  // sqrt(3)/2 * Nx -> size of bigger cell is then (1 + sqrt(3))*Nx, https://pl.wikipedia.org/wiki/Pierwiastek_kwadratowy_z_3
#endif

#ifndef CY
#define CY (CX + (NX-NY)/2)
#endif

#ifndef CZ
#define CZ (CX + (NX-NZ)/2)
#endif

#ifndef NXYZ
#define NXYZ (NX*NY*NZ)
#endif

#ifndef DX
	#define DX 1.
#endif
#ifndef DY
	#define DY (DX)
#endif
#ifndef DZ
	#define DZ (DX)
#endif

#define NCX (NX+2*CX)
#define NCY (NY+2*CY)
#define NCZ (NZ+2*CZ)


//TODO: Check if this macros work properly!!!
#define ixyz2ixiyiz(_ixyz,_ix,_iy,_iz,_i)       \
    _i  = _ixyz;                                \
    _ix = (_i)/(NY*NZ);                           \
    _i  = (_i)-(_ix) * NY * NZ;                     \
    _iy = (_i)/NZ;                                \
    _iz = (_i)-(_iy) * NZ;

#define ixiziy2ixyz(_ixyz,_ix,_iy,_iz,nx,ny,nz)          \
    _ixyz = (_iz) + (nz)*(_iy) + (nz)*(ny)*(_ix);

#define GET_IXIYIZ(_ixyz,_ix,_iy,_iz,_i,_nx,_ny,_nz)       \
    _i  = _ixyz;                                           \
    _ix = (_i)/( (_ny)*(_nz) );                            \
    _i  = (_i)-(_ix) * (_ny) * (_nz);                      \
    _iy = (_i)/(_nz);                                      \
    _iz = (_i)-(_iy) * (_nz);

#define ixyz2ix(_ixyz,nx,ny,nz)  (_ixyz/((ny)*(nz)))
#define ixyz2iy(_ixyz,nx,ny,nz) ((_ixyz - ixyz2ix(_ixyz,nx,ny,nz)*(ny)*(nz))/(nz))
#define ixyz2iz(_ixyz,nx,ny,nz)  (_ixyz - ixyz2ix(_ixyz,nx,ny,nz)*(ny)*(nz) - ixyz2iy(_ixyz,nx,ny,nz)*(nz))

#define ix_minus_half_nx(_ix) ((double)_ix - NX/2.)
#define iy_minus_half_ny(_iy) ((double)_iy - NY/2.)
#define iz_minus_half_nz(_iz) ((double)_iz - NZ/2.)



uint16_t nx, ny, nz;

// what for???
inline void set_lattice_size(const uint16_t _nx,const uint16_t _ny,const uint16_t _nz)
{
    nx = _nx;
    ny = _ny;
    nz = _nz;
}

inline void set_lattice()
{
	set_lattice_size((uint16_t) NX,(uint16_t) NY,(uint16_t) NZ);
}

inline void get_lattice_size(uint16_t *_nx,uint16_t *_ny,uint16_t *_nz)
{
    *_nx = nx;
    *_ny = ny;
    *_nz = nz;
}

// CUDA const memory
__constant__ double d_charge[1];
__constant__ double d_lcutoff[1];
__constant__ double d_kkx[NX+2*CX];
__constant__ double d_kky[NY+2*CY];
__constant__ double d_kkz[NZ+2*CZ];


/* CUFFT CALLBACKS
 * 
 * The callback API is available in the statically linked cuFFT library only, and only on 64 bit LINUX operating systems. 
 * Use of this API requires a current license. 
 * Free evaluation licenses are available for registered developers until 6/30/2015. To learn more please visit the cuFFT developer page.
 * 
 */

class Coulomb
{
    
public:
    // constructors
    Coulomb(int devId=0,int nthreads=1024);
    ~Coulomb();
    
    // setters
    void set_charge(const double charge);
    
    // algorithm methods
    void get_density_enlarged(cuDoubleComplex* d_psi, double* h_result = NULL, double* h_t = NULL, const int _nthreads = -1);
    void get_vcoulomb_enlarged(cuDoubleComplex* h_result = NULL, double* h_t = NULL, int _nthreads = -1, unsigned kernel_type=0);
//     void get_vcoulomb_enlarged_idx3d(cuDoubleComplex* h_result, double* h_t, int _nthreads = -1);
    void get_vcoulomb_lessened(double* d_vcoulomb, double* h_result = NULL, double* h_t = NULL, const int _nthreads = -1);
    
    // utilities
    void save_info(const double sigma);
    void get_lattice(unsigned* nx, unsigned* ny, unsigned* nz, unsigned* cx, unsigned* cy, unsigned* cz, double* _lcutoff);
    void get_lattice(unsigned* lattice, double* _lcutoff);
    
    // cufft plans
    cufftHandle plan_forward;
    cufftHandle plan_forward_cb;
    cufftHandle plan_inverse;
    cufftHandle plan_inverse_cb;
    
    
    
private:
    cuDoubleComplex* d_wrk_arr;
    cuDoubleComplex* d_density_k;
    double* d_density;
    
    int _devId;
    cudaDeviceProp dev_prop;
    dim3 gpu_threads;
    dim3 gpu_blocks;
    double lcutoff;
    
    
    
};

#endif