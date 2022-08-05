/*
 * File: _coder_CarDoorPhm_DataAnalysis_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 03-Aug-2022 10:31:27
 */

#ifndef _CODER_CARDOORPHM_DATAANALYSIS_API_H
#define _CODER_CARDOORPHM_DATAANALYSIS_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_CarDoorPhm_DataAnalysis_api.h"

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
extern void CarDoorPhm_DataAnalysis(emxArray_real_T *Data, int8_T M[17]);
extern void CarDoorPhm_DataAnalysis_api(const mxArray * const prhs[1], int32_T
  nlhs, const mxArray *plhs[1]);
extern void CarDoorPhm_DataAnalysis_atexit(void);
extern void CarDoorPhm_DataAnalysis_initialize(void);
extern void CarDoorPhm_DataAnalysis_terminate(void);
extern void CarDoorPhm_DataAnalysis_xil_terminate(void);

#endif

/*
 * File trailer for _coder_CarDoorPhm_DataAnalysis_api.h
 *
 * [EOF]
 */
