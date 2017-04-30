/*
 * Copyright 1993-2015 NVIDIA Corporation.  All rights reserved.
 *
 * Please refer to the NVIDIA end user license agreement (EULA) associated
 * with this source code for terms and conditions that govern your use of
 * this software. Any use, reproduction, disclosure, or distribution of
 * this software and related documentation outside the terms of the EULA
 * is strictly prohibited.
 *
 */

#ifndef _PTXJIT_H_
#define _PTXJIT_H_


// helper functions and utilities to work with CUDA
#include <helper_cuda.h>
#include <helper_functions.h>  // helper for shared that are common to CUDA Samples


char myPtx64[] = "\n\
.version 3.2\n\
.target sm_20\n\
.address_size 64\n\
\n\
	// .globl	_Z37ConvolveAndStoreTransposedC_OptimizedPK6float2PS_S1_\n\
.visible .entry _Z37ConvolveAndStoreTransposedC_OptimizedPK6float2PS_S1_(\n\
	.param .u64 _Z37ConvolveAndStoreTransposedC_OptimizedPK6float2PS_S1__param_0,\n\
	.param .u64 _Z37ConvolveAndStoreTransposedC_OptimizedPK6float2PS_S1__param_1,\n\
	.param .u64 _Z37ConvolveAndStoreTransposedC_OptimizedPK6float2PS_S1__param_2\n\
)\n\
{\n\
	.reg .pred 	%p<11>;\n\
	.reg .f32 	%f<57>;\n\
	.reg .b32 	%r<21>;\n\
	.reg .b64 	%rd<29>;\n\
	// demoted variable\n\
	.shared .align 8 .b8 _ZZ37ConvolveAndStoreTransposedC_OptimizedPK6float2PS_S1_E4tile[8448];\n\
\n\
	ld.param.u64 	%rd10, [_Z37ConvolveAndStoreTransposedC_OptimizedPK6float2PS_S1__param_0];\n\
	ld.param.u64 	%rd11, [_Z37ConvolveAndStoreTransposedC_OptimizedPK6float2PS_S1__param_1];\n\
	ld.param.u64 	%rd9, [_Z37ConvolveAndStoreTransposedC_OptimizedPK6float2PS_S1__param_2];\n\
	cvta.to.global.u64 	%rd1, %rd11;\n\
	cvta.to.global.u64 	%rd2, %rd10;\n\
	mov.u32 	%r11, %ctaid.x;\n\
	shl.b32 	%r1, %r11, 5;\n\
	mov.u32 	%r2, %tid.x;\n\
	add.s32 	%r3, %r1, %r2;\n\
	mov.u32 	%r12, %ctaid.y;\n\
	shl.b32 	%r4, %r12, 5;\n\
	mov.u32 	%r5, %tid.y;\n\
	add.s32 	%r6, %r4, %r5;\n\
	setp.gt.s32	%p1, %r3, 512;\n\
	@%p1 bra 	BB8_6;\n\
\n\
	setp.gt.s32	%p2, %r6, 999;\n\
	@%p2 bra 	BB8_6;\n\
\n\
	cvta.to.global.u64 	%rd12, %rd9;\n\
	mul.wide.s32 	%rd13, %r3, 8;\n\
	add.s64 	%rd14, %rd12, %rd13;\n\
	mad.lo.s32 	%r13, %r6, 513, %r3;\n\
	mul.wide.s32 	%rd15, %r13, 8;\n\
	add.s64 	%rd16, %rd2, %rd15;\n\
	ld.global.nc.v2.f32 	{%f3, %f4}, [%rd14];\n\
	ld.global.nc.v2.f32 	{%f5, %f6}, [%rd16];\n\
	mul.f32 	%f9, %f5, %f3;\n\
	mul.f32 	%f10, %f6, %f4;\n\
	mul.f32 	%f11, %f6, %f3;\n\
	mul.wide.u32 	%rd17, %r5, 264;\n\
	mov.u64 	%rd18, _ZZ37ConvolveAndStoreTransposedC_OptimizedPK6float2PS_S1_E4tile;\n\
	add.s64 	%rd19, %rd18, %rd17;\n\
	mul.wide.u32 	%rd20, %r2, 8;\n\
	add.s64 	%rd3, %rd19, %rd20;\n\
	sub.f32 	%f12, %f9, %f10;\n\
	fma.rn.f32 	%f13, %f5, %f4, %f11;\n\
	st.shared.v2.f32 	[%rd3], {%f12, %f13};\n\
	add.s32 	%r7, %r6, 8;\n\
	setp.gt.s32	%p3, %r7, 999;\n\
	@%p3 bra 	BB8_6;\n\
\n\
	mad.lo.s32 	%r14, %r7, 513, %r3;\n\
	mul.wide.s32 	%rd21, %r14, 8;\n\
	add.s64 	%rd4, %rd2, %rd21;\n\
	ld.global.nc.v2.f32 	{%f14, %f15}, [%rd4];\n\
	mul.f32 	%f18, %f14, %f3;\n\
	mul.f32 	%f19, %f15, %f4;\n\
	mul.f32 	%f20, %f15, %f3;\n\
	fma.rn.f32 	%f21, %f14, %f4, %f20;\n\
	sub.f32 	%f22, %f18, %f19;\n\
	st.shared.v2.f32 	[%rd3+2112], {%f22, %f21};\n\
	add.s32 	%r15, %r6, 16;\n\
	setp.gt.s32	%p4, %r15, 999;\n\
	@%p4 bra 	BB8_6;\n\
\n\
	ld.global.nc.v2.f32 	{%f23, %f24}, [%rd4+32832];\n\
	mul.f32 	%f27, %f23, %f3;\n\
	mul.f32 	%f28, %f24, %f4;\n\
	mul.f32 	%f29, %f24, %f3;\n\
	sub.f32 	%f30, %f27, %f28;\n\
	fma.rn.f32 	%f31, %f23, %f4, %f29;\n\
	st.shared.v2.f32 	[%rd3+4224], {%f30, %f31};\n\
	add.s32 	%r16, %r6, 24;\n\
	setp.gt.s32	%p5, %r16, 999;\n\
	@%p5 bra 	BB8_6;\n\
\n\
	ld.global.nc.v2.f32 	{%f32, %f33}, [%rd4+65664];\n\
	mul.f32 	%f36, %f32, %f3;\n\
	mul.f32 	%f37, %f33, %f4;\n\
	mul.f32 	%f38, %f33, %f3;\n\
	sub.f32 	%f39, %f36, %f37;\n\
	fma.rn.f32 	%f40, %f32, %f4, %f38;\n\
	st.shared.v2.f32 	[%rd3+6336], {%f39, %f40};\n\
\n\
BB8_6:\n\
	bar.sync 	0;\n\
	add.s32 	%r8, %r5, %r1;\n\
	add.s32 	%r9, %r4, %r2;\n\
	setp.gt.s32	%p6, %r9, 999;\n\
	@%p6 bra 	BB8_12;\n\
\n\
	setp.gt.s32	%p7, %r8, 512;\n\
	@%p7 bra 	BB8_12;\n\
\n\
	mad.lo.s32 	%r17, %r8, 1000, %r9;\n\
	mul.wide.s32 	%rd22, %r17, 8;\n\
	add.s64 	%rd23, %rd1, %rd22;\n\
	mul.wide.u32 	%rd24, %r2, 264;\n\
	mov.u64 	%rd25, _ZZ37ConvolveAndStoreTransposedC_OptimizedPK6float2PS_S1_E4tile;\n\
	add.s64 	%rd26, %rd25, %rd24;\n\
	mul.wide.u32 	%rd27, %r5, 8;\n\
	add.s64 	%rd6, %rd26, %rd27;\n\
	ld.shared.v2.f32 	{%f41, %f42}, [%rd6];\n\
	st.global.v2.f32 	[%rd23], {%f41, %f42};\n\
	add.s32 	%r10, %r8, 8;\n\
	setp.gt.s32	%p8, %r10, 512;\n\
	@%p8 bra 	BB8_12;\n\
\n\
	mad.lo.s32 	%r18, %r10, 1000, %r9;\n\
	mul.wide.s32 	%rd28, %r18, 8;\n\
	add.s64 	%rd7, %rd1, %rd28;\n\
	ld.shared.v2.f32 	{%f45, %f46}, [%rd6+64];\n\
	st.global.v2.f32 	[%rd7], {%f45, %f46};\n\
	add.s32 	%r19, %r8, 16;\n\
	setp.gt.s32	%p9, %r19, 512;\n\
	@%p9 bra 	BB8_12;\n\
\n\
	ld.shared.v2.f32 	{%f49, %f50}, [%rd6+128];\n\
	st.global.v2.f32 	[%rd7+64000], {%f49, %f50};\n\
	add.s32 	%r20, %r8, 24;\n\
	setp.gt.s32	%p10, %r20, 512;\n\
	@%p10 bra 	BB8_12;\n\
\n\
	ld.shared.v2.f32 	{%f53, %f54}, [%rd6+192];\n\
	st.global.v2.f32 	[%rd7+128000], {%f53, %f54};\n\
\n\
BB8_12:\n\
	ret;\n\
}\n\
";



const char *sSDKname = "PTX Just In Time (JIT) Compilation (no-qatest)";


void ptxJIT(int argc, char **argv, CUmodule *phModule, CUfunction *phKernel, CUlinkState *lState)
{
    CUjit_option options[6];
    void *optionVals[6];
    float walltime;
    char error_log[8192],
         info_log[8192];
    unsigned int logSize = 8192;
    void *cuOut;
    size_t outSize;
    int myErr = 0;

    // Setup linker options
    // Return walltime from JIT compilation
    options[0] = CU_JIT_WALL_TIME;
    optionVals[0] = (void *) &walltime;
    // Pass a buffer for info messages
    options[1] = CU_JIT_INFO_LOG_BUFFER;
    optionVals[1] = (void *) info_log;
    // Pass the size of the info buffer
    options[2] = CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES;
    optionVals[2] = (void *) (long)logSize;
    // Pass a buffer for error message
    options[3] = CU_JIT_ERROR_LOG_BUFFER;
    optionVals[3] = (void *) error_log;
    // Pass the size of the error buffer
    options[4] = CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES;
    optionVals[4] = (void *) (long) logSize;
    // Make the linker verbose
    options[5] = CU_JIT_LOG_VERBOSE;
    optionVals[5] = (void *) 1;

    // Create a pending linker invocation
    checkCudaErrors(cuLinkCreate(6,options, optionVals, lState));

    myErr = cuLinkAddFile(*lState, CU_JIT_INPUT_PTX, "kernel.ptx",0,0,0);

    if (myErr != CUDA_SUCCESS)
    {
        // Errors will be put in error_log, per CU_JIT_ERROR_LOG_BUFFER option above.
        fprintf(stderr,"PTX Linker Error:\n%s\n",error_log);
    }

    // Complete the linker step
    checkCudaErrors(cuLinkComplete(*lState, &cuOut, &outSize));

    // Linker walltime and info_log were requested in options above.
    printf("CUDA Link Completed in %fms. Linker Output:\n%s\n",walltime,info_log);

    // Load resulting cuBin into module
    checkCudaErrors(cuModuleLoadData(phModule, cuOut));

    // Locate the kernel entry poin
    checkCudaErrors(cuModuleGetFunction(phKernel, *phModule, "_Z37ConvolveAndStoreTransposedC_OptimizedPK6float2PS_S1_"));

    // Destroy the linker invocation
    checkCudaErrors(cuLinkDestroy(*lState));
}

#define SET_KERNEL_PARAM(hKernel, param, paramOffset)                              \
        checkCudaErrors(cuParamSetv(hKernel, paramOffset, &param, sizeof(param))); \
        paramOffset += sizeof(param);                                              \
        checkCudaErrors(cuParamSetSize(hKernel, sizeof(param)));


#endif
