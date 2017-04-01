/* *
 * Copyright 1993-2012 NVIDIA Corporation.  All rights reserved.
 *
 * Please refer to the NVIDIA end user license agreement (EULA) associated
 * with this source code for terms and conditions that govern your use of
 * this software. Any use, reproduction, disclosure, or distribution of
 * this software and related documentation outside the terms of the EULA
 * is strictly prohibited.
 */

#ifndef __SPACE_LATTICE_CUH__
#define __SPACE_LATTICE_CUH__
 
#include <stdio.h>
#include <stdlib.h>
#include <cuda.h>
#include <cufft.h>
#include <math.h>
#include <complex.h>
#include <cuComplex.h>

#include "cuerror.cuh"

#ifndef NX
	#define NX 64
#endif
#ifndef NY
	#define NY 32
#endif
#ifndef NZ
	#define NZ 32
#endif

#ifndef DX
	#define DX 1.
#endif
#ifndef DY
	#define DY 1.
#endif
#ifndef DZ
	#define DZ 1.
#endif

#define NXYZ (NX*NY*NZ)

//TODO: Check if this macros work properly!!!
#define ixyz2ixiyiz(_ixyz,_ix,_iy,_iz,_i)       \
    _i  = _ixyz;                                \
    _ix = (_i)/(NY*NZ);                           \
    _i  = (_i)-(_ix) * NY * NZ;                     \
    _iy = (_i)/NZ;                                \
    _iz = (_i)-(_iy) * NZ;

#define ixiziy2ixyz(_ixyz,_ix,_iy,_iz,nx,ny,nz)          \
    _ixyz = (_iz) + (nz)*(_iy) + (nz)*(ny)*(_ix);

#define ixyz2ix(_ixyz)  (_ixyz/(NY*NZ))
#define ixyz2iy(_ixyz) ((_ixyz - ixyz2ix(_ixyz)*NY*NZ)/NZ)
#define ixyz2iz(_ixyz)  (_ixyz - ixyz2ix(ixyz)*NY*NZ - ixyz2iy(_ixyz)*NZ)

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

#endif  /* __SPACE_LATTICE_CUH__ */
