#ifndef __COMPLEX_OPERATORS_CUH__
#define __COMPLEX_OPERATORS_CUH__

#include <cuda.h>
#include <cuda_runtime.h>
#include <cuComplex.h>


//extern "C"{

/*
 * Utilities: complex multiplication, e^(i x)
 */

__device__ static cufftDoubleComplex operator*(const cufftDoubleComplex& a, const cufftDoubleComplex& b){
	return make_cuDoubleComplex(a.x * b.x - a.y * b.y, a.x * b.y + a.y * b.x );
}

__device__ static cufftDoubleComplex operator*(const double& a, const cufftDoubleComplex& b){
	return make_cuDoubleComplex( a * b.x, a * b.y );
}

__device__ static cufftDoubleComplex& operator*=(cufftDoubleComplex& a, const cufftDoubleComplex& b){
	return (a = a * b);
}

__device__ static cufftDoubleComplex e_pow_I(double x){
	cufftDoubleComplex e;
	sincos(x, &e.y, &e.x);
	return e;
}


//}











#endif // __COMPLEX_OPERATORS_CUH__