/*
 * File: _coder_CarDoorPhm_DataAnalysis_mex.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 03-Aug-2022 10:31:27
 */

/* Include Files */
#include "_coder_CarDoorPhm_DataAnalysis_api.h"
#include "_coder_CarDoorPhm_DataAnalysis_mex.h"

/* Function Declarations */
static void c_CarDoorPhm_DataAnalysis_mexFu(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[1]
 * Return Type  : void
 */
static void c_CarDoorPhm_DataAnalysis_mexFu(int32_T nlhs, mxArray *plhs[1],
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
                        23, "CarDoorPhm_DataAnalysis");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 23,
                        "CarDoorPhm_DataAnalysis");
  }

  /* Call the function. */
  CarDoorPhm_DataAnalysis_api(prhs, nlhs, outputs);

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
  mexAtExit(CarDoorPhm_DataAnalysis_atexit);

  /* Module initialization. */
  CarDoorPhm_DataAnalysis_initialize();

  /* Dispatch the entry-point. */
  c_CarDoorPhm_DataAnalysis_mexFu(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  CarDoorPhm_DataAnalysis_terminate();
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
 * File trailer for _coder_CarDoorPhm_DataAnalysis_mex.c
 *
 * [EOF]
 */
