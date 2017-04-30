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
 
#ifndef __CUTIMER_H__
#define __CUTIMER_H__


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cuda.h>


#define TIMER_CREATE(t)                      \
  cudaEvent_t t##_start, t##_end;            \
  cudaEventCreate(&t##_start);               \
  cudaEventCreate(&t##_end);               
 
 
#define TIMER_START(t)                          \
  cudaEventRecord(t##_start);                   \
  cudaEventSynchronize(t##_start);              \
 
 
#define TIMER_END(t)                                          \
  cudaEventRecord(t##_start);                                 \
  cudaEventSynchronize(t##_start);                            \
  cudaEventRecord(t##_end);                                   \
  cudaEventSynchronize(t##_end);                              \
  cudaEventElapsedTime(&t, t##_start, t##_end);        


#endif