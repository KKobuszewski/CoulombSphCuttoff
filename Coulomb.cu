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
    cuErrCheck(  cudaMalloc((void**) &d_density,   (size_t) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex))  );
    cuErrCheck(  cudaMalloc((void**) &d_density_k, (size_t) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex))  );
    
    // fill density array with zeros - TODO: check if it could be done once or move to kernel
    cuErrCheck(  cudaMemset((void*)   d_density,   0,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex))  );
    cuErrCheck(  cudaMemset((void*)   d_density_k, 0,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex))  );
    
    // create plans
    size_t wrk_sizes[4] = {0};
    cufftErrChk(  cufftCreate(&plan_forward)               );
    cufftErrChk(  cufftSetAutoAllocation(plan_forward,0)  );
    cufftErrChk(  cufftMakePlan3d(plan_forward, NX+2*CX, NY+2*CY, NZ+2*CZ, CUFFT_Z2Z, &wrk_sizes[0])  );
    
    cufftErrChk(  cufftCreate(&plan_forward_cb)               );
    cufftErrChk(  cufftSetAutoAllocation(plan_forward_cb,0)  );
    cufftErrChk(  cufftMakePlan3d(plan_forward, NX+2*CX, NY+2*CY, NZ+2*CZ, CUFFT_Z2Z, &wrk_sizes[1])  );
    
    cufftErrChk(  cufftCreate(&plan_inverse)               );
    cufftErrChk(  cufftSetAutoAllocation(plan_inverse,0)  );
    cufftErrChk(  cufftMakePlan3d(plan_inverse, NX+2*CX, NY+2*CY, NZ+2*CZ, CUFFT_Z2Z, &wrk_sizes[2])  );
    
    cufftErrChk(  cufftCreate(&plan_inverse_cb)               );
    cufftErrChk(  cufftSetAutoAllocation(plan_inverse_cb,0)  );
    cufftErrChk(  cufftMakePlan3d(plan_inverse_cb, NX+2*CX, NY+2*CY, NZ+2*CZ, CUFFT_Z2Z, &wrk_sizes[3])  );
    
    // allocate additional memory (work space for cufft)
    cuErrCheck(  cudaMalloc((void**) &d_wrk_arr,  (size_t)  *std::max_element(wrk_sizes, &wrk_sizes[3]))  );
    cufftErrChk(  cufftSetWorkArea(plan_forward,    d_wrk_arr)  );
    cufftErrChk(  cufftSetWorkArea(plan_forward_cb, d_wrk_arr)  );
    cufftErrChk(  cufftSetWorkArea(plan_inverse,    d_wrk_arr)  );
    cufftErrChk(  cufftSetWorkArea(plan_inverse_cb, d_wrk_arr)  );
    
    //k_lattice_init();
    
#ifdef VERBOSE
    printf("Instance of class Coulomb.\n");
    printf("Compiled for lattice:  %ux%ux%u\n",NX,NY,NZ);
    printf("Computational lattice: %ux%ux%u\n",NX+2*CX,NY+2*CY,NZ+2*CZ);
    printf("Cutoff length lc:      %.3lf\n",lcutoff);
    
    for (unsigned ii=0; ii<4; ii++)
        printf("Plan %u: %lu\n",ii,wrk_sizes[ii]);
    
    printf("Mem allocated:\n");
    printf("    density (real space)    %lu\tB\n",(NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex));
    printf("    density (recip. space)  %lu\tB\n",(NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex));
    printf("    total                   %lu\tB\n",(NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * (sizeof(cuDoubleComplex)*2) 
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


void Coulomb::get_density_enlarged(cuDoubleComplex* d_psi, cuDoubleComplex* h_result, double* h_t)
{
    float rep;
    TIMER_CREATE(rep);
    TIMER_START(rep);
    __kernel_enlarge_1Dindexing__<NX,NY,NZ,CX,CY,CZ><<<gpu_blocks,gpu_threads>>>(d_psi,d_density); // no errors in cuda-memcheck
    cuErrCheck( cudaGetLastError() );
    TIMER_END(rep);
    
    if (h_result)     cuErrCheck(  cudaMemcpy(h_result, d_density,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex), cudaMemcpyDeviceToHost)  );
    if (h_t)         *h_t = (double) rep;
}


void Coulomb::get_vcoulomb_enlarged(cuDoubleComplex* h_result, double* h_t)
{
    unsigned nthreads = 1024;
    dim3 _threads(nthreads);
    dim3 _blocks((int) ceilf( ((float) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ)) / nthreads ));
    
    printf("\n");
    printf("threads: (%u,%u,%u)\n",_threads.x,_threads.y,_threads.z);
    printf("blocks:  (%u,%u,%u)\n",_blocks.x,_blocks.y,_blocks.z);
    printf("\n");
    
    float rep;
    TIMER_CREATE(rep);
    TIMER_START(rep);
    
    // fft forward
    cufftErrChk(  cufftExecZ2Z(plan_forward, (cuDoubleComplex*) d_density, (cuDoubleComplex*) d_density_k, CUFFT_FORWARD)  ); // CUFFT_FORWARD
    
    //if (h_result)     cuErrCheck(  cudaMemcpy(h_result, d_density_k,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex), cudaMemcpyDeviceToHost)  );
    
    // Coulomb kernel
    // truncating last dimension of array due to real to complex FFT symmetry
    kernel_coulomb_sph_cutoff<NX+2*CX,NY+2*CY,NZ+2*CZ><<<_blocks,_threads>>>(d_density_k,d_density_k);
    
    
    if (h_result)     cuErrCheck(  cudaMemcpy(h_result, d_density_k,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex), cudaMemcpyDeviceToHost)  );
    
    // fft inverse
    cufftErrChk(  cufftExecZ2Z(plan_inverse, (cuDoubleComplex*) d_density_k, d_density, CUFFT_INVERSE)  ); // CUFFT_INVERSE
    TIMER_END(rep);
    
    //if (h_result)     cuErrCheck(  cudaMemcpy(h_result, d_density_k,(size_t) (NX+2*CX)*(NY+2*CY)*(NZ+2*CZ) * sizeof(cuDoubleComplex), cudaMemcpyDeviceToHost)  );
    if (h_t)         *h_t = (double) rep;
}

void Coulomb::get_vcoulomb_lessened(double* d_vcoulomb, double* h_result, double* h_t)
{
    float rep;
    TIMER_CREATE(rep);
    TIMER_START(rep);
    
    __kernel_lessen_1Dindexing__<NX,NY,NZ,CX,CY,CZ><<<gpu_blocks,gpu_threads>>>(d_density,d_vcoulomb); // no errors in cuda-memcheck
    cuErrCheck( cudaGetLastError() );
    TIMER_END(rep);
    
    if (h_result)     cuErrCheck(  cudaMemcpy(h_result, d_vcoulomb,(size_t) NX*NY*NZ * sizeof(double), cudaMemcpyDeviceToHost)  );
    if (h_t)         *h_t = (double) rep;
}


void Coulomb::save_info(const double sigma)
{
    // save info
    FILE* file_info = fopen("data/coulomb.info","w");
    fprintf(file_info,"nx\t%u\n",NX);
    fprintf(file_info,"ny\t%u\n",NY);
    fprintf(file_info,"nz\t%u\n",NZ);
    fprintf(file_info,"cx\t%u\n",CX);
    fprintf(file_info,"cy\t%u\n",CY);
    fprintf(file_info,"cz\t%u\n",CZ);
    fprintf(file_info,"aho\t%lf\n",sigma);
    fclose(file_info);
}