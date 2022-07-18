/*
 * File: FeatureData_FeatureIdentify.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 15-Jul-2022 17:43:47
 */

#ifndef FEATUREDATA_FEATUREIDENTIFY_H
#define FEATUREDATA_FEATUREIDENTIFY_H

/* Include Files */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "FeatureData_FeatureIdentify_types.h"
#include "FeatureData_FeatureIdentify_emxutil.h"
/* Function Declarations */
extern int *  FeatureData_FeatureIdentify(const emxArray_real_T *data, int M[17]);
extern void FeatureData_FeatureIdentifyt(const emxArray_real_T *data);
extern void FeatureData_FeatureIdentifyt111();
extern void fill_2d_array(char **arr, int columeSize);
extern emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols);

#endif

/*
 * File trailer for FeatureData_FeatureIdentify.h
 *
 * [EOF]
 */
