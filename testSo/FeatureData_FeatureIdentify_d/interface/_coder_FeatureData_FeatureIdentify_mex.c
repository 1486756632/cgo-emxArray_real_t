/*
 * File: _coder_FeatureData_FeatureIdentify_mex.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 15-Jul-2022 17:43:47
 */

/* Include Files */
#include "_coder_FeatureData_FeatureIdentify_api.h"
#include "_coder_FeatureData_FeatureIdentify_mex.h"

/* Function Declarations */
static void c_FeatureData_FeatureIdentify_m(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[1]
 * Return Type  : void
 */
static void c_FeatureData_FeatureIdentify_m(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        27, "FeatureData_FeatureIdentify");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 27,
                        "FeatureData_FeatureIdentify");
  }

  /* Call the function. */
  FeatureData_FeatureIdentify_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

/*
 * Arguments    : int32_T nlhs
 *                mxArray * const plhs[]
 *                int32_T nrhs
 *                const mxArray * const prhs[]
 * Return Type  : void
 */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(FeatureData_FeatureIdentify_atexit);

  /* Module initialization. */
  FeatureData_FeatureIdentify_initialize();

  /* Dispatch the entry-point. */
  c_FeatureData_FeatureIdentify_m(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  FeatureData_FeatureIdentify_terminate();
}

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/*
 * File trailer for _coder_FeatureData_FeatureIdentify_mex.c
 *
 * [EOF]
 */
