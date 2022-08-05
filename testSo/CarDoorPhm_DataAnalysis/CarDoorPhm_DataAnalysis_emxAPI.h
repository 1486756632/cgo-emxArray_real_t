/*
 * File: CarDoorPhm_DataAnalysis_emxAPI.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 03-Aug-2022 10:31:27
 */

#ifndef CARDOORPHM_DATAANALYSIS_EMXAPI_H
#define CARDOORPHM_DATAANALYSIS_EMXAPI_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "CarDoorPhm_DataAnalysis_types.h"

/* Function Declarations */
extern emxArray_real_T *emxCreateND_real_T(int numDimensions, int *size);
extern emxArray_real_T *emxCreateWrapperND_real_T(double *data, int
  numDimensions, int *size);
extern emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols);
extern emxArray_real_T *emxCreate_real_T(int rows, int cols);
extern void emxDestroyArray_real_T(emxArray_real_T *emxArray);
extern void emxInitArray_real_T(emxArray_real_T **pEmxArray, int numDimensions);

#endif

/*
 * File trailer for CarDoorPhm_DataAnalysis_emxAPI.h
 *
 * [EOF]
 */
