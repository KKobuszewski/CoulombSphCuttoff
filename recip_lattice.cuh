/* *
 * Copyright 1993-2012 NVIDIA Corporation.  All rights reserved.
 *
 * Please refer to the NVIDIA end user license agreement (EULA) associated
 * with this source code for terms and conditions that govern your use of
 * this software. Any use, reproduction, disclosure, or distribution of
 * this software and related documentation outside the terms of the EULA
 * is strictly prohibited.
 */

#ifndef __RECIP_LATTICE_CUH__
#define __RECIP_LATTICE_CUH__
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>

#include <cuda.h>
#include <cuComplex.h>

#include "cuerror.cuh"
#include "space_lattice.cuh"   // macro definitions for NX,NY,NZ

// reciprocal lattice constants

__constant__ double d_kkx[NX];
__constant__ double d_kky[NY];
__constant__ double d_kkz[NZ];
 
typedef struct
{
  
  double *kkx, *kky, *kkz;
}
gpu_const_mem_t;
gpu_const_mem_t gpu_const_mem;



/*
 * Allocates memory and creates arrays containing reciprocal lattice points' coordinates.
 */
inline void k_lattice_init()
{
    // NOTE : nx , ny , nz = 2j forall j integers (e.g. even numbers for the lattice dimensions)
    // Initialize lattice in momentum space (first Brullion zone)

    // Generate arrays on host
    gpu_const_mem.kkx = (double*) malloc((size_t) NX*sizeof(double));
    gpu_const_mem.kky = (double*) malloc((size_t) NY*sizeof(double));
    gpu_const_mem.kkz = (double*) malloc((size_t) NZ*sizeof(double));

    /* initialize the k-space lattice */
    uint16_t i;
    int j;
    for (i = 0; i <= NX/2 - 1; i++) {  gpu_const_mem.kkx[i] = 2. * M_PI/((double) NX * (double) DX) * (double) i;     }  j = - i;
    for (i = NX/2; i < NX; i++)     {  gpu_const_mem.kkx[i] = 2. * M_PI/((double) NX * (double) DX) * (double) j; j++;}
    cuErrCheck(  cudaMemcpyToSymbol(d_kkx, gpu_const_mem.kkx, NX*sizeof(double))  );

    for (i = 0; i <= NY/2 - 1; i++) {  gpu_const_mem.kky[i] = 2. * M_PI/((double) NY * (double) DY) * (double) i;     }  j = - i;
    for (i = NY/2 ; i < NY ; i++)   {  gpu_const_mem.kky[i] = 2. * M_PI/((double) NY * (double) DY) * (double) j; j++;}
    cuErrCheck(  cudaMemcpyToSymbol(d_kky, gpu_const_mem.kky, NY*sizeof(double))  );

    for (i = 0; i <= NZ/2 - 1; i++) {  gpu_const_mem.kkz[i] = 2. * M_PI/((double) NZ * (double) DZ) * (double) i;     }  j = - i;
    for (i = NZ / 2; i < NZ; i++)   {  gpu_const_mem.kkz[i] = 2. * M_PI/((double) NZ * (double) DZ) * (double) j; j++;}
    cuErrCheck(  cudaMemcpyToSymbol(d_kkz, gpu_const_mem.kkz, NZ*sizeof(double))  );
    
}

inline void k_lattice_free()
{
    free(gpu_const_mem.kkx);
    free(gpu_const_mem.kky);
    free(gpu_const_mem.kkz);
}

#endif  /* __RECIP_LATTICE_CUH__ */
