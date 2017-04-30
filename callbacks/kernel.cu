#include "cuda_runtime.h"
#include "device_launch_parameters.h"

#include <stdio.h>
#include <assert.h>

#include <cufft.h>
#include <cufftXt.h>

//#define DEBUG

#define BLOCKSIZE 256

#define NN 16

    /**********/
    /* iDivUp */
    /**********/
    int iDivUp(int a, int b) { return ((a % b) != 0) ? (a / b + 1) : (a / b); }

    /********************/
    /* CUDA ERROR CHECK */
    /********************/
    #define gpuErrchk(ans) { gpuAssert((ans), __FILE__, __LINE__); }
    inline void gpuAssert(cudaError_t code, const char *file, int line, bool abort=true)
    {
       if (code != cudaSuccess)
       {
          fprintf(stderr,"GPUassert: %s %s %d\n", cudaGetErrorString(code), file, line);
          if (abort) exit(code);
       }
    }

    /*********************/
    /* CUFFT ERROR CHECK */
    /*********************/
    // See http://stackoverflow.com/questions/16267149/cufft-error-handling

    #ifdef _CUFFT_H_
    // cuFFT API errors
    static const char *_cudaGetErrorEnum(cufftResult error)
    {
        switch (error)
        {
            case CUFFT_SUCCESS:
                return "CUFFT_SUCCESS";

            case CUFFT_INVALID_PLAN:
                return "CUFFT_INVALID_PLAN";

            case CUFFT_ALLOC_FAILED:
                return "CUFFT_ALLOC_FAILED";

            case CUFFT_INVALID_TYPE:
                return "CUFFT_INVALID_TYPE";

            case CUFFT_INVALID_VALUE:
                return "CUFFT_INVALID_VALUE";

            case CUFFT_INTERNAL_ERROR:
                return "CUFFT_INTERNAL_ERROR";

            case CUFFT_EXEC_FAILED:
                return "CUFFT_EXEC_FAILED";

            case CUFFT_SETUP_FAILED:
                return "CUFFT_SETUP_FAILED";

            case CUFFT_INVALID_SIZE:
                return "CUFFT_INVALID_SIZE";

            case CUFFT_UNALIGNED_DATA:
                return "CUFFT_UNALIGNED_DATA";
        }

        return "<unknown>";
    }
    #endif

    #define cufftSafeCall(err)      __cufftSafeCall(err, __FILE__, __LINE__)
    inline void __cufftSafeCall(cufftResult err, const char *file, const int line)
    {
        if( CUFFT_SUCCESS != err) {
    		fprintf(stderr, "CUFFT error in file '%s', line %d\n %s\nerror %d: %s\nterminating!\n",__FILE__, __LINE__,err, \
                                    _cudaGetErrorEnum(err)); \
    		cudaDeviceReset(); assert(0); \
    	}
    }

    /****************************************/
    /* FFTSHIFT 1D INPLACE MEMORY MOVEMENTS */
    /****************************************/
    __global__ void fftshift_1D_inplace_memory_movements(float2* d_inout, unsigned int N)
    {
    	unsigned int tid = threadIdx.x + blockIdx.x * blockDim.x;

    	if (tid < N/2)
        {
    		printf("%f %f\n", 2.f*d_inout[tid].x, 3.f*d_inout[tid].x);

    		float2 temp = d_inout[tid];
            d_inout[tid] = d_inout[tid + (N / 2)];
            d_inout[tid + (N / 2)] = temp;
        }
    }

    /**********************************************/
    /* FFTSHIFT 1D INPLACE CHESSBOARD - VERSION 1 */
    /**********************************************/
    __device__ float2 fftshift_1D_chessboard_callback_v1(void *d_in, size_t offset, void *callerInfo, void *sharedPtr) {

    	float a = (float)(1-2*((int)offset%2));

    	float2	out = ((float2*)d_in)[offset];
    	out.x = out.x * a;
    	out.y = out.y * a;
    	return out;
    }

    __device__ cufftCallbackLoadC fftshift_1D_chessboard_callback_v1_Ptr = fftshift_1D_chessboard_callback_v1;

    /********/
    /* MAIN */
    /********/
    int main()
    {
        const int N = 16;

    	// --- Host side input array
    	float2 *h_vect = (float2 *)malloc(N*sizeof(float2));
    	for (int i=0; i<N; i++) {
    		h_vect[i].x = (float)rand() / (float)RAND_MAX;
    		h_vect[i].y = (float)rand() / (float)RAND_MAX;
    	}

    	// --- Host side output arrays
    	float2 *h_out1 = (float2 *)malloc(N*sizeof(float2));
    	float2 *h_out2 = (float2 *)malloc(N*sizeof(float2));

    	// --- Device side input arrays
    	float2 *d_vect1; gpuErrchk(cudaMalloc((void**)&d_vect1, N*sizeof(float2)));
    	float2 *d_vect2; gpuErrchk(cudaMalloc((void**)&d_vect2, N*sizeof(float2)));
            gpuErrchk(cudaMemcpy(d_vect1, h_vect, N*sizeof(float2), cudaMemcpyHostToDevice));
            gpuErrchk(cudaMemcpy(d_vect2, h_vect, N*sizeof(float2), cudaMemcpyHostToDevice));

    	// --- Device side output arrays
    	float2 *d_out1; gpuErrchk(cudaMalloc((void**)&d_out1, N*sizeof(float2)));
    	float2 *d_out2; gpuErrchk(cudaMalloc((void**)&d_out2, N*sizeof(float2)));

    	float time;
    	cudaEvent_t start, stop;
    	cudaEventCreate(&start);
    	cudaEventCreate(&stop);

    	/*******************************************/
    	/* cuFFT + MEMORY MOVEMENTS BASED FFTSHIFT */
    	/*******************************************/
    	cufftHandle planinverse; cufftSafeCall(cufftPlan1d(&planinverse, N, CUFFT_C2C, 1));
    	cudaEventRecord(start, 0);
    	cufftSafeCall(cufftExecC2C(planinverse, d_vect1, d_vect1, CUFFT_INVERSE));
    	fftshift_1D_inplace_memory_movements<<<iDivUp(N/2, BLOCKSIZE), BLOCKSIZE>>>(d_vect1, N);
    #ifdef DEBUG
    	gpuErrchk(cudaPeekAtLastError());
    	gpuErrchk(cudaDeviceSynchronize());
    #endif
    	cudaEventRecord(stop, 0);
    	cudaEventSynchronize(stop);
    	cudaEventElapsedTime(&time, start, stop);
    	printf("Memory movements elapsed time:  %3.3f ms \n", time);
    	gpuErrchk(cudaMemcpy(h_out1, d_vect1, N*sizeof(float2), cudaMemcpyDeviceToHost));

    	/****************************************/
    	/* CHESSBOARD MULTIPLICATION V1 + cuFFT */
    	/****************************************/
    	cufftCallbackLoadC hfftshift_1D_chessboard_callback_v1_Ptr;

    	gpuErrchk(cudaMemcpyFromSymbol(&hfftshift_1D_chessboard_callback_v1_Ptr, fftshift_1D_chessboard_callback_v1_Ptr, sizeof(hfftshift_1D_chessboard_callback_v1_Ptr)));
    	cufftHandle planinverse_v1; cufftSafeCall(cufftPlan1d(&planinverse_v1, N, CUFFT_C2C, 1));
    	cufftResult status = cufftXtSetCallback(planinverse_v1, (void **)&hfftshift_1D_chessboard_callback_v1_Ptr, CUFFT_CB_LD_COMPLEX, 0);
    	if (status == CUFFT_LICENSE_ERROR) {
    	    printf("This sample requires a valid license file.\n");
    	    printf("The file was either not found, out of date, or otherwise invalid.\n");
    	     exit(EXIT_FAILURE);
    	} else {
    		cufftSafeCall(status);
    	  }
    	cudaEventRecord(start, 0);
    	cufftSafeCall(cufftExecC2C(planinverse_v1, d_vect2, d_out2, CUFFT_INVERSE));
    	cudaEventRecord(stop, 0);
    	cudaEventSynchronize(stop);
    	cudaEventElapsedTime(&time, start, stop);
    	printf("Chessboard v1 elapsed time:  %3.3f ms \n", time);

    	gpuErrchk(cudaMemcpy(h_out2, d_out2, N*sizeof(float2), cudaMemcpyDeviceToHost));

    	// --- Checking the results
    	for (int i=0; i<N; i++) if ((h_out1[i].x != h_out2[i].x)||(h_out1[i].y != h_out2[i].y)) { printf("Chessboard v1 test failed!\n"); return 0; }

    	printf("Chessboard v1 test passed!\n");

    	return 0;

    }