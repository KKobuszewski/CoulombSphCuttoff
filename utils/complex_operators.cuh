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