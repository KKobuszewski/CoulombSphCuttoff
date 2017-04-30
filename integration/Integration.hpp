#ifndef __INTEGRATION_HPP__
#define __INTEGRATION_HPP__

// #include <thrust/device_ptr.h>
// #include <thrust/device_vector.h>
// #include <thrust/inner_product.h>
// #include <thrust/functional.h>

#include <math.h>
#include <complex.h>

#include <cuda.h>
#include <cuda_runtime.h>
#include <cuComplex.h>
#include <cublas_v2.h>


#include <cuerror.cuh>
//#include <complex_operators.cuh>
#include <reductions.cuh>
#include <thread_fence_reductions.cuh>


#define SIZE_T_MUL3( a, b, c) \
    ( (size_t)a )*( (size_t)b )*( (size_t)c)

// ==============================================================  KERNELS ====================================================


template <int nx, int ny, int nz, int strides>
__global__ void kernel_RC_mult(const double* __restrict__  entity, 
                               const cuDoubleComplex* __restrict__ arr_in, 
                               cuDoubleComplex* __restrict__ arr_out)
{
    size_t ixyz= threadIdx.x + blockIdx.x * blockDim.x;
    
    while (ixyz < SIZE_T_MUL3(nx,ny,nz))
    {
        //arr_out[ixyz] = entity[ixyz]*arr_in[ixyz]; // NOTE: Overloaded operator for double and cuDoubleComplex (look at complex_operators.cuh).
        arr_out[ixyz].x = entity[ixyz]*arr_in[ixyz].x;
        arr_out[ixyz].y = entity[ixyz]*arr_in[ixyz].y;
//         if (ixyz%33 == 0)
//         {
//             printf("%lf\t%lf+%lfj\t%lf+%lfj\n",entity[ixyz],arr_in[ixyz].x,arr_in[ixyz].y,arr_out[ixyz].x,arr_out[ixyz].y);
//         }
        
        ixyz += SIZE_T_MUL3(nx,ny,nz)/strides;
    }
}






// =========================================================== THRUST =============================================================

struct evaluate_functional : public thrust::binary_function<double,cuDoubleComplex,double>
{
  __host__ __device__
  double operator()(double entity, cuDoubleComplex psi) 
  { 
      //if ((psi.x*psi.x + psi.y*psi.y) > 1e-1) 
          //printf("%e+%ej\n",psi.x,psi.y);
      //    printf( "%e\n", entity*(psi.x*psi.x + psi.y*psi.y) );
      return (double)entity*(psi.x*psi.x + psi.y*psi.y);   // |\psi|^2 * V
    }
};



// =========================================================== CLASS ==============================================================

template <int nx, int ny, int nz>
class Integration
{
private:
    // some handles
    cublasHandle_t cublas_handle;
    double* d_norm, h_norm;
    cuDoubleComplex* d_int_val; 
    cuDoubleComplex  h_int_val;
    const size_t nxyz;
    
    // workspace in memory
    void*            d_wrk_mem;
    double*          d_wrk_memD;
    cuDoubleComplex* d_wrk_memZ;
    
public:
    // ===================================================== CONSTRUCTORS & DESTRUCTORS ====================================

    // constructors
    Integration():nxyz(nx*ny*nz)
    {
        printf("Constructing integration utility for lattice %dx%dx%d\n",nx,ny,nz);
        
        // Allocate memory and set appropriate pointers
        cuErrCheck(  cudaMalloc((void**) &d_wrk_mem, SIZE_T_MUL3(nx,ny,nz) * sizeof(cuDoubleComplex))  );
        d_wrk_memD = (double*)          d_wrk_mem;
        d_wrk_memZ = (cuDoubleComplex*) d_wrk_mem;
        cuErrCheck(  cudaMalloc((void**) &d_int_val, sizeof(cuDoubleComplex)) );
        cuErrCheck(  cudaMalloc((void**) &d_norm,    sizeof(double)) );
        //d_int_val =  (d_wrk_memZ +   SIZE_T_MUL3(nx,ny,nz));
        //d_norm    =  (d_wrk_memD + 2*SIZE_T_MUL3(nx,ny,nz)+2);
        cuErrCheck(  cudaMemset((void*) d_int_val, 0, (size_t) sizeof(cuDoubleComplex))  );
        cuErrCheck(  cudaMemset((void*) d_wrk_memZ, 0, SIZE_T_MUL3(nx,ny,nz) * sizeof(cuDoubleComplex))  );
        
        // initialize cublas
        CHECK_CUBLAS( cublasCreate(&cublas_handle) );
        CHECK_CUBLAS( cublasSetPointerMode(cublas_handle, CUBLAS_POINTER_MODE_DEVICE) ); // this means we can use only device pointers to scalars (required by CUBLAS routines)

    }
    
    
    // destructors
    ~Integration()
    {
        // finalize cublas
        CHECK_CUBLAS( cublasDestroy(cublas_handle) ); 
        
        if (d_wrk_mem) cudaFree(d_wrk_mem);
    }
    
    // =====================================================================================================================
    // ========================================================= METHODS ===================================================
    // =====================================================================================================================
    
    
    // ====================================================== NORM UTILITIES ===============================================
    // cublas
    inline double get_norm_cublas(const cuDoubleComplex* __restrict__ arr)
    {
        CHECK_CUBLAS( cublasDznrm2( cublas_handle, nx*ny*nz, arr, 1, d_norm) );
        cuErrCheck(   cudaMemcpy( &h_norm, d_norm, sizeof(double), cudaMemcpyDeviceToHost) );
        return h_norm;
    }

    double normalize_cublas(cuDoubleComplex* arr, double norm_scale = 1.0)
    {
        // get norm and set factor for rescaling array
        h_norm = this->get_norm_cublas(arr);
        h_norm = norm_scale/h_norm;  // NOTE: the normalization is not necessarily to 1.0
        cuErrCheck(   cudaMemcpy( d_norm, &h_norm, sizeof(double), cudaMemcpyHostToDevice) );
        
        CHECK_CUBLAS( cublasZdscal(cublas_handle, nx*ny*nz,  d_norm, arr, 1) );
        
        return 1./h_norm; // rescaled norm
    }
    
    
    
    // ======================================================= EXPECTATION VALUE UTILITIES =====================================
    
    // cublas
    cuDoubleComplex get_exp_val_rect_cublas(double* entity, cuDoubleComplex* psi)
    {
        // here make multiplication psi*V
        int nthreads = 1024;
        dim3 gpu_threads(nthreads);
        dim3 gpu_blocks((nx*ny*nz + nthreads + 1)/nthreads);
        kernel_RC_mult<nx,ny,nz,1><<<(int) ceilf( ((float) (nx*ny*nz)) / nthreads),nthreads>>>(entity,psi,d_wrk_memZ);
        
        // here make integration (psi*V).psi^*
        CHECK_CUBLAS( cublasZdotc(cublas_handle, nx*ny*nz, psi, 1, d_wrk_memZ, 1, d_int_val) ); // count <\psi||T \psi>
        // possibly could ignore imaginary part of the integral (should be near to 0.0)
        cuErrCheck( cudaMemcpy(&h_int_val, d_int_val, sizeof(cuDoubleComplex), cudaMemcpyDeviceToHost) );
        
        return h_int_val;
    }
    
    
    
    
    inline double get_exp_val_rect_thrust(double* d_array1, cuDoubleComplex* d_array2)
    {
        thrust::plus<double> op_plus;
        evaluate_functional  op_func; // |\psi|^2 * V
        
        //printf("%lu\n",nxyz);
        
        // integrate |\psi|^2 * V
        return thrust::inner_product(thrust::device_pointer_cast<double>(d_array1),thrust::device_pointer_cast<double>(d_array1)+nxyz,
                                     thrust::device_pointer_cast<double2>(d_array2), 0, op_plus, op_func);
    }
    
    
    
    
    
    
    
    
    
    
    
    
    // custom version
    inline double get_exp_val_rect_custom(double *d_entity, cuDoubleComplex* d_psi, 
                                          const int threads = 1024, cudaStream_t stream = 0)
    {
        
        int blocks=(int)ceil((float)nxyz/threads);
        unsigned int lthreads=threads/2; // Threads is always power of 2
        if(lthreads<64) lthreads=64; // at least 2*warp_size
        unsigned int new_blocks, current_size;
        
        // First reduction of the array
        call_DZdreduction(blocks, lthreads, nxyz, d_entity, d_psi, d_wrk_memD, stream);
        
        // Do iteratively reduction of partial_sums
        current_size=blocks;
        while(current_size>1)
        {
            new_blocks=(int)ceil((float)current_size/threads);
            lthreads=opt_threads(new_blocks,threads, current_size)/2;
            if(lthreads<64) lthreads=64; // at least 2*warp_size
            call_reduction_kernel<double>(new_blocks, lthreads, current_size, d_wrk_memD, d_wrk_memD, stream);
            current_size=new_blocks;
        }
        
        double result;
        cudaMemcpy(&result, d_wrk_memD, sizeof(double), cudaMemcpyDeviceToHost);
        
        return result;
    }
    
    inline double get_exp_val_rect_threadfence(double *d_entity, cuDoubleComplex* d_psi, const int threads = 256)
    {
        return threadfence_DZdreduce<double>(d_entity, d_psi, d_wrk_memD, nxyz, threads);
    }
    
    
};




/*
template
double Integration<int nx, int ny, int nz>::


// ============================================== kernels =========================================================

template <int nx, int ny, int nz, int strides>
__global__ void kernel_normalize(cuDoubleComplex* __restrict__ arr, const double* norm)
{
    size_t ixyz= threadIdx.x + blockIdx.x * blockDim.x;
    const double reg_norm = norm[0];
    
    while (ixyz < SIZE_T_MUL3(nx,ny,nz))
    {
        arr_out[ixyz] = (1./reg_norm)*arr[ixyz];
        
        ixyz += SIZE_T_MUL3(nx,ny,nz)/strides;
    }
}

template <int nx, int ny, int nz, int strides>
__global__ void kernel_normalize(cuDoubleComplex* __restrict__ arr, const double norm)
{
    size_t ixyz= threadIdx.x + blockIdx.x * blockDim.x;
    
    while (ixyz < SIZE_T_MUL3(nx,ny,nz))
    {
        arr_out[ixyz] = (1./norm)*arr[ixyz];
        
        ixyz += SIZE_T_MUL3(nx,ny,nz)/strides;
    }
}

*/




#endif // __INTEGRATION_HPP__