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
 

#include "Coulomb.hpp"

#include "kernels.cuh"



Coulomb::Coulomb(int devId, int nthreads):
                 _devId(devId)
{    
    //
    cudaSetDevice(_devId);
    cudaGetDeviceProperties(&dev_prop, _devId);
    dim3 _threads(nthreads);
    dim3 _blocks((int) ceilf( ((float) (NXYZ)) / nthreads ));
    gpu_threads = _threads;
    gpu_blocks  = _blocks;
    
    
    lcutoff = ((double) (NX+2*CX)) / (1.0 + sqrt(3.0)); // size of cube over 1 + 3
    cuErrCheck(  cudaMemcpyToSymbol(d_lcutoff, &lcutoff, sizeof(double))  );
    
    // allocate memory
    cuErrCheck(  cudaMalloc((void**) &d_density,   (size_t) (NCX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(double))             );
    cuErrCheck(  cudaMalloc((void**) &d_density_k, (size_t) (NX+2*CX)*(NY+2*CY)*(NZ/2+CZ+1) * sizeof(cuDoubleComplex))  );
    
    // create plans
    size_t wrk_sizes[4] = {0};
    cufftErrChk(  cufftCreate(&plan_forward)              );
    cufftErrChk(  cufftSetAutoAllocation(plan_forward,0)  );
    cufftErrChk(  cufftMakePlan3d(plan_forward, NX+2*CX, NY+2*CY, NZ+2*CZ, CUFFT_D2Z, &wrk_sizes[0])  );
    
    cufftErrChk(  cufftCreate(&plan_forward_cb)              );
    cufftErrChk(  cufftSetAutoAllocation(plan_forward_cb,0)  );
    cufftErrChk(  cufftMakePlan3d(plan_forward, NX+2*CX, NY+2*CY, NZ+2*CZ, CUFFT_D2Z, &wrk_sizes[1])  );
    
    cufftErrChk(  cufftCreate(&plan_inverse)              );
    cufftErrChk(  cufftSetAutoAllocation(plan_inverse,0)  );
    cufftErrChk(  cufftMakePlan3d(plan_inverse, NX+2*CX, NY+2*CY, NZ+2*CZ, CUFFT_Z2D, &wrk_sizes[2])  );
    
    cufftErrChk(  cufftCreate(&plan_inverse_cb)              );
    cufftErrChk(  cufftSetAutoAllocation(plan_inverse_cb,0)  );
    cufftErrChk(  cufftMakePlan3d(plan_inverse_cb, NX+2*CX, NY+2*CY, NZ+2*CZ, CUFFT_Z2D, &wrk_sizes[3])  );
    
    // allocate additional memory (work space for cufft)
    cuErrCheck(  cudaMalloc((void**) &d_wrk_arr,  (size_t)  *std::max_element(wrk_sizes, &wrk_sizes[3]))  );
    cufftErrChk(  cufftSetWorkArea(plan_forward,    d_wrk_arr)  );
    cufftErrChk(  cufftSetWorkArea(plan_forward_cb, d_wrk_arr)  );
    cufftErrChk(  cufftSetWorkArea(plan_inverse,    d_wrk_arr)  );
    cufftErrChk(  cufftSetWorkArea(plan_inverse_cb, d_wrk_arr)  );
    
    // initialize constant memory
    double kkx[NCX];
    double kky[NCY];
    double kkz[NCZ];
    uint16_t i;  int j;
    for (i = 0; i <= NCX/2 - 1; i++) {  kkx[i] = 2. * M_PI/((double) NCX) * (double) i;     }  j = - i;
    for (i = NCX/2; i < NCX; i++)     {  kkx[i] = 2. * M_PI/((double) NCX) * (double) j; j++;}
    cuErrCheck(  cudaMemcpyToSymbol(d_kkx, kkx, NCX*sizeof(double))  );

    for (i = 0; i <= NCY/2 - 1; i++) {  kky[i] = 2. * M_PI/((double) NCY) * (double) i;     }  j = - i;
    for (i = NCY/2 ; i < NCY ; i++)   {  kky[i] = 2. * M_PI/((double) NCY) * (double) j; j++;}
    cuErrCheck(  cudaMemcpyToSymbol(d_kky, kky, NCY*sizeof(double))  );

    for (i = 0; i <= NCZ/2 - 1; i++) {  kkz[i] = 2. * M_PI/((double) NCZ) * (double) i;     }  j = - i;
    for (i = NCZ / 2; i < NCZ; i++)   {  kkz[i] = 2. * M_PI/((double) NCZ) * (double) j; j++;}
    cuErrCheck(  cudaMemcpyToSymbol(d_kkz, kkz, NCZ*sizeof(double))  );
    
    
    
#ifdef VERBOSE
    printf("Instance of class Coulomb.\n");
    printf("Compiled for lattice:  %ux%ux%u\n",NX,NY,NZ);
    printf("Computational lattice: %ux%ux%u\n",NX+2*CX,NY+2*CY,NZ+2*CZ);
    printf("Computational lattice: %ux%ux%u\n",NCX,NCY,NCZ);
    printf("Cutoff length lc:      %.3lf\n",lcutoff);
    
    for (unsigned ii=0; ii<4; ii++)
        printf("Plan %u: %lu\n",ii,wrk_sizes[ii]);
    
    printf("Mem allocated:\n");
    printf("    density (real space)    %lu\tB\n",(NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(double));
    printf("    density (recip. space)  %lu\tB\n",(NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex));
    printf("    total                   %lu\tB\n",(NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * (sizeof(cuDoubleComplex)+sizeof(double)) 
                                                                             + *std::max_element(wrk_sizes, &wrk_sizes[3]));
    
    printf("\n");
    printf("threads: (%u,%u,%u)\n",gpu_threads.x,gpu_threads.y,gpu_threads.z);
    printf("blocks:  (%u,%u,%u)\n",gpu_blocks.x,gpu_blocks.y,gpu_blocks.z);
    printf("\n");
    printf("\n");
#endif
}

Coulomb::~Coulomb()
{
    if (d_density != NULL) cuErrCheck(  cudaFree(d_density)    );
    if (d_density != NULL) cuErrCheck(  cudaFree(d_density_k)  );
    if (d_density != NULL) cuErrCheck(  cudaFree(d_wrk_arr)    );
    
    //k_lattice_free();
    
    cufftDestroy(plan_forward);
    cufftDestroy(plan_forward_cb);
    cufftDestroy(plan_inverse);
    cufftDestroy(plan_inverse_cb);
}

void Coulomb::set_charge(const double charge)
{
    cuErrCheck(  cudaMemcpyToSymbol(d_charge, &charge, sizeof(double))  );
}


void Coulomb::get_density_enlarged(cuDoubleComplex* d_psi, double* h_result, double* h_t, const int _nthreads)
{
    dim3 _threads(_nthreads);
    dim3 _blocks((int) ceilf( ((float) (NX)*(NY)*(NZ)) / _nthreads ));
    if (_nthreads < 32) { _threads = gpu_threads; _blocks=gpu_blocks; }
    
    float rep;
    TIMER_CREATE(rep);
    TIMER_START(rep);
    
    // fill density array with zeros - TODO: check if it could be done once or move to kernel
    cuErrCheck(  cudaMemset((void*)   d_density,   0,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(double))             );
    //cuErrCheck(  cudaMemset((void*)   d_density_k, 0,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ/2+CZ+1) * sizeof(cuDoubleComplex))  );
    
    __kernel_enlarge_1Dindexing__<NX,NY,NZ,CX,CY,CZ><<<_blocks,_threads>>>(d_psi,d_density); // no errors in cuda-memcheck
    cuErrCheck( cudaGetLastError() );
    TIMER_END(rep);
    
    if (h_result)     cuErrCheck(  cudaMemcpy(h_result, d_density,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(double), cudaMemcpyDeviceToHost)  );
    if (h_t)         *h_t = (double) rep;
}


void Coulomb::get_vcoulomb_enlarged(cuDoubleComplex* h_result, double* h_t, int _nthreads, unsigned kernel_type)
{
    if (_nthreads < 32) _nthreads = 1024;
    
    
    float rep;
    TIMER_CREATE(rep);
    TIMER_START(rep);
    
    //if (h_result)     cuErrCheck(  cudaMemcpy(h_result, d_density,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex), cudaMemcpyDeviceToHost)  );
    
    // fft forward
    cufftErrChk(  cufftExecD2Z(plan_forward, (double*) d_density, (cuDoubleComplex*) d_density_k)  ); // CUFFT_FORWARD
    
    // Coulomb kernel
    switch (kernel_type)
    {
        case 0:
        {
            dim3 _threads0(_nthreads);
            dim3 _blocks0((int) ceilf( ((float) (NX+2*CX)*(NY+2*CY)*(NZ/2+CZ+1)) / _nthreads ));
            kernel_coulomb_sph_cutoff0<NX+2*CX,NY+2*CY,NZ+2*CZ><<<_blocks0,_threads0>>>(d_density_k,d_density_k); break;
        }
        case 1:
        {
            dim3 _threads1(_nthreads);
            dim3 _blocks1((int) ceilf( ((float) (NX+2*CX)*(NY+2*CY)*(NZ/2+CZ+1)) / _nthreads ));
            kernel_coulomb_sph_cutoff1<NX+2*CX,NY+2*CY,NZ+2*CZ><<<_blocks1,_threads1>>>(d_density_k,d_density_k); break;
        }
        case 2:
        {
            dim3 _threads2(_nthreads);
            dim3 _blocks2((int) ceilf( ((float) (NX+2*CX)*(NY+2*CY)*(NZ/2+CZ+1)) / _nthreads ));
            kernel_coulomb_sph_cutoff2<NX+2*CX,NY+2*CY,NZ+2*CZ><<<_blocks2,_threads2>>>(d_density_k,d_density_k); break;
        }
        case 3:
        {
            dim3 _threads3(_nthreads);
            dim3 _blocks3((int) ceilf( ((float) (NX+2*CX)*(NY+2*CY)*(NZ/2+CZ+1)) / _nthreads ));
            kernel_coulomb_sph_cutoff_cnst0<NX+2*CX,NY+2*CY,NZ+2*CZ><<<_blocks3,_threads3>>>(d_density_k,d_density_k); break;
        }
        case 4:
        {
            dim3 _threads3(_nthreads);
            dim3 _blocks3((int) ceilf( ((float) (NX+2*CX)*(NY+2*CY)*(NZ/2+CZ+1)/2) / _nthreads ));
            kernel_coulomb_sph_cutoff_cnst1<NX+2*CX,NY+2*CY,NZ+2*CZ><<<_blocks3,_threads3>>>(d_density_k,d_density_k); break;
        }
        case 5:
        {
            dim3 _threads3(_nthreads);
            dim3 _blocks3((int) ceilf( ((float) (NX+2*CX)*(NY+2*CY)*(NZ/2+CZ+1)/4) / _nthreads ));
            kernel_coulomb_sph_cutoff_cnst2<NX+2*CX,NY+2*CY,NZ+2*CZ><<<_blocks3,_threads3>>>(d_density_k,d_density_k); break;
        }
    }
    
    
    //if (h_result)     cuErrCheck(  cudaMemcpy(h_result, d_density_k,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex), cudaMemcpyDeviceToHost)  );
    
    // fft inverse
    cufftErrChk(  cufftExecZ2D(plan_inverse, (cuDoubleComplex*) d_density_k, (double*) d_density)  ); // CUFFT_INVERSE
    TIMER_END(rep);
    
    if (h_result)     cuErrCheck(  cudaMemcpy(h_result, d_density_k,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ/2+CZ+1) * sizeof(cuDoubleComplex), cudaMemcpyDeviceToHost)  );
    if (h_t)         *h_t = (double) rep;
}


void Coulomb::get_vcoulomb_lessened(double* d_vcoulomb, double* h_result, double* h_t, const int _nthreads)
{
    dim3 _threads(_nthreads);
    dim3 _blocks((int) ceilf( ((float) (NX)*(NY)*(NZ)) / _nthreads ));
    if (_nthreads < 32) { _threads = gpu_threads; _blocks=gpu_blocks; }
    
    float rep;
    TIMER_CREATE(rep);
    TIMER_START(rep);
    
    __kernel_lessen_1Dindexing__<NX,NY,NZ,CX,CY,CZ><<<_blocks,_threads>>>(d_density,d_vcoulomb); // no errors in cuda-memcheck
    cuErrCheck( cudaGetLastError() );
    TIMER_END(rep);
    
    if (h_result)     cuErrCheck(  cudaMemcpy(h_result, d_vcoulomb,(size_t) NX*NY*NZ * sizeof(double), cudaMemcpyDeviceToHost)  );
    if (h_t)         *h_t = (double) rep;
}

void Coulomb::save_info(const double sigma)
{
    // save info
    FILE* file_info = fopen("coulomb.info","w");
    fprintf(file_info,"nx\t%u\n",NX);
    fprintf(file_info,"ny\t%u\n",NY);
    fprintf(file_info,"nz\t%u\n",NZ);
    fprintf(file_info,"cx\t%u\n",CX);
    fprintf(file_info,"cy\t%u\n",CY);
    fprintf(file_info,"cz\t%u\n",CZ);
    fprintf(file_info,"aho\t%lf\n",sigma);
    fclose(file_info);
}

void Coulomb::get_lattice(unsigned* nx, unsigned* ny, unsigned* nz, unsigned* cx, unsigned* cy, unsigned* cz, double* _lcutoff)
{
    if (nx)       *nx = NX;
    if (ny)       *ny = NY;
    if (nz)       *nz = NZ;
    if (cx)       *cx = CX;
    if (cy)       *cy = CY;
    if (cz)       *cz = CZ;
    if (_lcutoff) *_lcutoff = lcutoff;
}

void Coulomb::get_lattice(unsigned* lattice, double* _lcutoff)
{
    this->get_lattice(lattice+0,lattice+1,lattice+2,lattice+3,lattice+4,lattice+5,_lcutoff);
}


































//  ======================================== 
/*
void Coulomb::get_vcoulomb_enlarged_idx3d(cuDoubleComplex* h_result, double* h_t, int _nthreads)
{
    int nx_threads = 1;
    int ny_threads = 2;
#if ((NZ+2*CZ) > 32)
    int nz_threads = 64;
#else
    int nz_threads = 32;
#endif
    dim3 gpu_threads(nx_threads,ny_threads,nz_threads);
    dim3 gpu_blocks( (NX + 2*CX + nx_threads -1)/nx_threads,
                     (NY + 2*CY + ny_threads -1)/ny_threads,
                     (NZ/2 + CZ + 1 + nz_threads -1)/nz_threads ); // NOTE: run NZ/2 threads in z direction and not NZ/2+1
    //printf("threads: %dx%dx%d\t\tblocks: %dx%dx%d\t\ttotal: \n",_threads.x,_threads.y,_threads.z,_blocks.x,_blocks.y,_blocks.z);
    
    float rep;
    TIMER_CREATE(rep);
    TIMER_START(rep);
    
    //if (h_result)     cuErrCheck(  cudaMemcpy(h_result, d_density,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex), cudaMemcpyDeviceToHost)  );
    
    // fft forward
    cufftErrChk(  cufftExecD2Z(plan_forward, (double*) d_density, (cuDoubleComplex*) d_density_k)  ); // CUFFT_FORWARD
    
    // Coulomb kernel
    //kernel_coulomb_sph_cutoff_3Didx<NX+2*CX,NY+2*CY,NZ+2*CZ><<<gpu_blocks,gpu_threads>>>(d_density_k,d_density_k); // NOTE: run NZ/2 threads in z direction and not NZ/2+1
    kernel_coulomb_sph_cutoff_3Didx0<NX+2*CX,NY+2*CY,NZ+2*CZ><<<gpu_blocks,gpu_threads>>>(d_density_k,d_density_k);
    cuErrCheck( cudaGetLastError() );
    
    // fft inverse
    cufftErrChk(  cufftExecZ2D(plan_inverse, (cuDoubleComplex*) d_density_k, (double*) d_density)  ); // CUFFT_INVERSE
    TIMER_END(rep);
    
    if (h_result)     cuErrCheck(  cudaMemcpy(h_result, d_density_k,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ/2+CZ+1) * sizeof(cuDoubleComplex), cudaMemcpyDeviceToHost)  );
    if (h_t)         *h_t = (double) rep;
}
*/