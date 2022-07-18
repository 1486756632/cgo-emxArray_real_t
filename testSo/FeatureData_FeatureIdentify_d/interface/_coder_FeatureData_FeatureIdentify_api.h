/*
 * File: _coder_FeatureData_FeatureIdentify_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 15-Jul-2022 17:43:47
 */

#ifndef _CODER_FEATUREDATA_FEATUREIDENTIFY_API_H
#define _CODER_FEATUREDATA_FEATUREIDENTIFY_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_FeatureData_FeatureIdentify_api.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void FeatureData_FeatureIdentify(emxArray_real_T *data, real_T M[17]);
extern void FeatureData_FeatureIdentify_api(const mxArray * const prhs[1],
  int32_T nlhs, const mxArray *plhs[1]);
extern void FeatureData_FeatureIdentify_atexit(void);
extern void FeatureData_FeatureIdentify_initialize(void);
extern void FeatureData_FeatureIdentify_terminate(void);
extern void FeatureData_FeatureIdentify_xil_terminate(void);

#endif

/*
 * File trailer for _coder_FeatureData_FeatureIdentify_api.h
 *
 * [EOF]
 */
