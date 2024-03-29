/*
 * File: FeatureData_FeatureIdentify_emxAPI.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 15-Jul-2022 17:43:47
 */

#ifndef FEATUREDATA_FEATUREIDENTIFY_EMXAPI_H
#define FEATUREDATA_FEATUREIDENTIFY_EMXAPI_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "FeatureData_FeatureIdentify_types.h"

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
 * File trailer for FeatureData_FeatureIdentify_emxAPI.h
 *
 * [EOF]
 */
