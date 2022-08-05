/*
 * File: CarDoorPhm_DataAnalysis.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 03-Aug-2022 10:31:27
 */

#ifndef CARDOORPHM_DATAANALYSIS_H
#define CARDOORPHM_DATAANALYSIS_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "CarDoorPhm_DataAnalysis_types.h"

/* Function Declarations */
//extern void CarDoorPhm_DataAnalysis(const emxArray_real_T *Data, signed char M
//  [17]);
extern void * CarDoorPhm_DataAnalysis(const emxArray_real_T *Data, signed int M
  [17]);
extern emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols);
extern void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int
  oldNumel);
extern void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int oldNumel);
extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);
extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions);
extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);

#endif

/*
 * File trailer for CarDoorPhm_DataAnalysis.h
 *
 * [EOF]
 */
