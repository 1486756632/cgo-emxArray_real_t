/*
 * File: CarDoorPhm_DataAnalysis.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 03-Aug-2022 10:31:27
 */

/* Include Files */
//#include <math.h>
//#include "rt_nonfinite.h"
//#include "CarDoorPhm_DataAnalysis.h"
//#include "CarDoorPhm_DataAnalysis_emxutil.h"
//#include <stdio.h>

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "CarDoorPhm_DataAnalysis.h"
#include "CarDoorPhm_DataAnalysis_emxutil.h"

/* Function Definitions */

/*
 * UNTITLED �˴���ʾ�йش˺�����ժҪ
 *    �˴���ʾ��ϸ˵��\
 * Arguments    : const emxArray_real_T *Data
 *                signed char M[17]
 * Return Type  : void
 */
void * CarDoorPhm_DataAnalysis(const emxArray_real_T *Data, signed int M[17])
{
 printf("%f" , Data->data[0]);
 printf("\n");

       printf("%f" , Data->data[1]);
  printf("\n");

      printf("%f" , Data->data[13]);
 printf("\n");
       printf("%f" , Data->data[14]);
  printf("\n");
        printf("%f" , Data->data[15]);
   printf("\n");
         printf("%f" , Data->data[16]);
    printf("\n");
      printf("%f" , Data->data[17]);
 printf("\n");


       printf("%f" , Data->data[28]);
  printf("\n");
        printf("%f" , Data->data[29]);
   printf("\n");
         printf("%f" , Data->data[30]);
    printf("\n");
          printf("%f" , Data->data[31]);
     printf("\n");
          printf("%f" , Data->data[32]);
     printf("\n");
  printf("data->data ----------------------------------------------");



      printf("%d" , -922999999);
      printf("\n");

      printf("%d" , Data->size[0]);
 printf("\n");
       printf("%d" , Data->size[1]);
  printf("\n");
  printf("size ----------------------------------------------");

  double T1;
  double T9;
  double A12;
  int i0;
  emxArray_real_T *data_3;
  double row;
  int loop_ub;
  int nx;
  emxArray_real_T *data_5;
  emxArray_real_T *data_8;
  emxArray_real_T *data_9;
  emxArray_real_T *data_10;
  emxArray_real_T *data_12;
  emxArray_real_T *Diff_12;
  int b_loop_ub;
  double X;
  int exitg1;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  int i1;
  boolean_T exitg2;
  int idx;
  double D9;
  int k;
  int n_tmp;
  T1 = 0.0;
  T9 = 0.0;
  A12 = 0.0;
  for (i0 = 0; i0 < 17; i0++) {
    M[i0] = 0;
  }

  emxInit_real_T(&data_3, 2);
  row = (double)Data->size[0];
  printf("row   ");
  printf("%f " , row);
  i0 = data_3->size[0] * data_3->size[1];
  data_3->size[0] = 1;
  loop_ub = (int)row;
  data_3->size[1] = loop_ub;
  emxEnsureCapacity_real_T(data_3, i0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    data_3->data[i0] = 0.0;
  }

  for (nx = 0; nx < loop_ub; nx++) {
    data_3->data[nx] = Data->data[2 + nx * 15];
  }

  emxInit_real_T(&data_5, 2);
  i0 = data_5->size[0] * data_5->size[1];
  data_5->size[0] = 1;
  data_5->size[1] = loop_ub;
  emxEnsureCapacity_real_T(data_5, i0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    data_5->data[i0] = 0.0;
  }

  for (nx = 0; nx < loop_ub; nx++) {
    data_5->data[nx] = Data->data[4 + nx * 15];
  }

  emxInit_real_T(&data_8, 2);
  i0 = data_8->size[0] * data_8->size[1];
  data_8->size[0] = 1;
  data_8->size[1] = loop_ub;
  emxEnsureCapacity_real_T(data_8, i0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    data_8->data[i0] = 0.0;
  }

  for (nx = 0; nx < loop_ub; nx++) {
    data_8->data[nx] = Data->data[7 + nx * 15];
  }

  emxInit_real_T(&data_9, 2);
  i0 = data_9->size[0] * data_9->size[1];
  data_9->size[0] = 1;
  data_9->size[1] = loop_ub;
  emxEnsureCapacity_real_T(data_9, i0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    data_9->data[i0] = 0.0;
  }

  for (nx = 0; nx < loop_ub; nx++) {
    data_9->data[nx] = Data->data[8 + nx * 15];
  }

  emxInit_real_T(&data_10, 2);
  i0 = data_10->size[0] * data_10->size[1];
  data_10->size[0] = 1;
  data_10->size[1] = loop_ub;
  emxEnsureCapacity_real_T(data_10, i0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    data_10->data[i0] = 0.0;
  }

  for (nx = 0; nx < loop_ub; nx++) {
    data_10->data[nx] = Data->data[9 + nx * 15];
  }

  emxInit_real_T(&data_12, 2);
  i0 = data_12->size[0] * data_12->size[1];
  data_12->size[0] = 1;
  data_12->size[1] = loop_ub;
  emxEnsureCapacity_real_T(data_12, i0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    data_12->data[i0] = 0.0;
  }

  for (nx = 0; nx < loop_ub; nx++) {
    data_12->data[nx] = Data->data[11 + nx * 15];
  }

  emxInit_real_T(&Diff_12, 2);
  i0 = Diff_12->size[0] * Diff_12->size[1];
  Diff_12->size[0] = 1;
  b_loop_ub = loop_ub - 1;
  Diff_12->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(Diff_12, i0);
  for (i0 = 0; i0 < b_loop_ub; i0++) {
    Diff_12->data[i0] = 0.0;
  }

  X = 0.0;
  nx = 0;
  do {
    exitg1 = 0;
    i0 = loop_ub - 2;
    if (nx <= i0) {
      Diff_12->data[nx] = data_12->data[nx + 1] - data_12->data[nx];
      if (Diff_12->data[nx] != 0.0) {
        X = Diff_12->data[nx];
        exitg1 = 1;
      } else {
        nx++;
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  emxInit_boolean_T(&x, 2);
  emxInit_int32_T(&ii, 2);
  if (X < 0.0) {
    i1 = Diff_12->size[0] * Diff_12->size[1];
    Diff_12->size[0] = 1;
    Diff_12->size[1] = b_loop_ub;
    emxEnsureCapacity_real_T(Diff_12, i1);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Diff_12->data[i1] = 0.0;
    }

    nx = 0;
    exitg2 = false;
    while ((!exitg2) && (nx <= i0)) {
      Diff_12->data[nx] = data_9->data[nx + 1] - data_9->data[nx];
      if (Diff_12->data[nx] != 0.0) {
        T1 = Data->data[(1 + nx) * 15];
        exitg2 = true;
      } else {
        nx++;
      }
    }

    nx = data_5->size[1];
    if (data_5->size[1] <= 2) {
      if (data_5->size[1] == 1) {
        D9 = data_5->data[0];
      } else if ((data_5->data[0] < data_5->data[1]) || (rtIsNaN(data_5->data[0])
                  && (!rtIsNaN(data_5->data[1])))) {
        D9 = data_5->data[1];
      } else {
        D9 = data_5->data[0];
      }
    } else {
      if (!rtIsNaN(data_5->data[0])) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        exitg2 = false;
        while ((!exitg2) && (k <= data_5->size[1])) {
          if (!rtIsNaN(data_5->data[k - 1])) {
            idx = k;
            exitg2 = true;
          } else {
            k++;
          }
        }
      }

      if (idx == 0) {
        D9 = data_5->data[0];
      } else {
        D9 = data_5->data[idx - 1];
        i1 = idx + 1;
        for (k = i1; k <= nx; k++) {
          if (D9 < data_5->data[k - 1]) {
            D9 = data_5->data[k - 1];
          }
        }
      }
    }

    i1 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = data_5->size[1];
    emxEnsureCapacity_boolean_T(x, i1);
    loop_ub = data_5->size[0] * data_5->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      x->data[i1] = (data_5->data[i1] == D9);
    }

    nx = x->size[1];
    idx = 0;
    i1 = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = x->size[1];
    emxEnsureCapacity_int32_T(ii, i1);
    loop_ub = 0;
    exitg2 = false;
    while ((!exitg2) && (loop_ub <= nx - 1)) {
      if (x->data[loop_ub]) {
        idx++;
        ii->data[idx - 1] = loop_ub + 1;
        if (idx >= nx) {
          exitg2 = true;
        } else {
          loop_ub++;
        }
      } else {
        loop_ub++;
      }
    }

    if (x->size[1] == 1) {
      if (idx == 0) {
        ii->size[0] = 1;
        ii->size[1] = 0;
      }
    } else if (1 > idx) {
      ii->size[1] = 0;
    } else {
      i1 = ii->size[0] * ii->size[1];
      ii->size[1] = idx;
      emxEnsureCapacity_int32_T(ii, i1);
    }

    i1 = Diff_12->size[0] * Diff_12->size[1];
    Diff_12->size[0] = 1;
    Diff_12->size[1] = ii->size[1];
    emxEnsureCapacity_real_T(Diff_12, i1);
    loop_ub = ii->size[0] * ii->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Diff_12->data[i1] = ii->data[i1];
    }

    T9 = Data->data[((int)Diff_12->data[0] - 1) * 15];
    M[3] = (signed char)(T9 - T1 > 5400.0);
  }

  emxFree_real_T(&data_9);
  if (X > 0.0) {
    i1 = Diff_12->size[0] * Diff_12->size[1];
    Diff_12->size[0] = 1;
    Diff_12->size[1] = b_loop_ub;
    emxEnsureCapacity_real_T(Diff_12, i1);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Diff_12->data[i1] = 0.0;
    }

    nx = 0;
    exitg2 = false;
    while ((!exitg2) && (nx <= i0)) {
      Diff_12->data[nx] = data_10->data[nx + 1] - data_10->data[nx];
      if (Diff_12->data[nx] != 0.0) {
        T1 = Data->data[(1 + nx) * 15];
        exitg2 = true;
      } else {
        nx++;
      }
    }

    nx = data_5->size[1];
    if (data_5->size[1] <= 2) {
      if (data_5->size[1] == 1) {
        D9 = data_5->data[0];
      } else if ((data_5->data[0] < data_5->data[1]) || (rtIsNaN(data_5->data[0])
                  && (!rtIsNaN(data_5->data[1])))) {
        D9 = data_5->data[1];
      } else {
        D9 = data_5->data[0];
      }
    } else {
      if (!rtIsNaN(data_5->data[0])) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        exitg2 = false;
        while ((!exitg2) && (k <= data_5->size[1])) {
          if (!rtIsNaN(data_5->data[k - 1])) {
            idx = k;
            exitg2 = true;
          } else {
            k++;
          }
        }
      }

      if (idx == 0) {
        D9 = data_5->data[0];
      } else {
        D9 = data_5->data[idx - 1];
        i1 = idx + 1;
        for (k = i1; k <= nx; k++) {
          if (D9 < data_5->data[k - 1]) {
            D9 = data_5->data[k - 1];
          }
        }
      }
    }

    i1 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = data_5->size[1];
    emxEnsureCapacity_boolean_T(x, i1);
    loop_ub = data_5->size[0] * data_5->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      x->data[i1] = (data_5->data[i1] == D9);
    }

    nx = x->size[1];
    idx = 0;
    i1 = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = x->size[1];
    emxEnsureCapacity_int32_T(ii, i1);
    loop_ub = 0;
    exitg2 = false;
    while ((!exitg2) && (loop_ub <= nx - 1)) {
      if (x->data[loop_ub]) {
        idx++;
        ii->data[idx - 1] = loop_ub + 1;
        if (idx >= nx) {
          exitg2 = true;
        } else {
          loop_ub++;
        }
      } else {
        loop_ub++;
      }
    }

    if (x->size[1] == 1) {
      if (idx == 0) {
        ii->size[0] = 1;
        ii->size[1] = 0;
      }
    } else if (1 > idx) {
      ii->size[1] = 0;
    } else {
      i1 = ii->size[0] * ii->size[1];
      ii->size[1] = idx;
      emxEnsureCapacity_int32_T(ii, i1);
    }

    i1 = Diff_12->size[0] * Diff_12->size[1];
    Diff_12->size[0] = 1;
    Diff_12->size[1] = ii->size[1];
    emxEnsureCapacity_real_T(Diff_12, i1);
    loop_ub = ii->size[0] * ii->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Diff_12->data[i1] = ii->data[i1];
    }

    i1 = data_5->size[0] * data_5->size[1];
    loop_ub = data_5->size[0] * data_5->size[1];
    data_5->size[0] = 1;
    emxEnsureCapacity_real_T(data_5, loop_ub);
    loop_ub = i1 - 1;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      data_5->data[i1] -= 150.0;
    }

    nx = data_5->size[1];
    i1 = data_12->size[0] * data_12->size[1];
    data_12->size[0] = 1;
    data_12->size[1] = data_5->size[1];
    emxEnsureCapacity_real_T(data_12, i1);
    for (k = 0; k < nx; k++) {
      data_12->data[k] = fabs(data_5->data[k]);
    }

    nx = data_12->size[1];
    if (data_12->size[1] <= 2) {
      if (data_12->size[1] == 1) {
        idx = 1;
      } else if ((data_12->data[0] > data_12->data[1]) || (rtIsNaN(data_12->
                   data[0]) && (!rtIsNaN(data_12->data[1])))) {
        idx = 2;
      } else {
        idx = 1;
      }
    } else {
      if (!rtIsNaN(data_12->data[0])) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        exitg2 = false;
        while ((!exitg2) && (k <= data_12->size[1])) {
          if (!rtIsNaN(data_12->data[k - 1])) {
            idx = k;
            exitg2 = true;
          } else {
            k++;
          }
        }
      }

      if (idx == 0) {
        idx = 1;
      } else {
        D9 = data_12->data[idx - 1];
        i1 = idx + 1;
        for (k = i1; k <= nx; k++) {
          if (D9 > data_12->data[k - 1]) {
            D9 = data_12->data[k - 1];
            idx = k;
          }
        }
      }
    }

    if ((int)Diff_12->data[Diff_12->size[1] - 1] > idx) {
      i1 = 1;
      loop_ub = 1;
    } else {
      i1 = (int)Diff_12->data[Diff_12->size[1] - 1];
      loop_ub = idx + 1;
    }

    n_tmp = loop_ub - i1;
    if (n_tmp <= 2) {
      if (n_tmp == 1) {
        A12 = data_3->data[i1 - 1];
      } else if ((data_3->data[i1 - 1] < data_3->data[i1]) || (rtIsNaN
                  (data_3->data[i1 - 1]) && (!rtIsNaN(data_3->data[i1])))) {
        A12 = data_3->data[i1];
      } else {
        A12 = data_3->data[i1 - 1];
      }
    } else {
      if (!rtIsNaN(data_3->data[i1 - 1])) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        exitg2 = false;
        while ((!exitg2) && (k <= n_tmp)) {
          if (!rtIsNaN(data_3->data[(i1 + k) - 2])) {
            idx = k;
            exitg2 = true;
          } else {
            k++;
          }
        }
      }

      if (idx == 0) {
        A12 = data_3->data[i1 - 1];
      } else {
        A12 = data_3->data[(i1 + idx) - 2];
        loop_ub = idx + 1;
        for (k = loop_ub; k <= n_tmp; k++) {
          nx = (i1 + k) - 2;
          if (A12 < data_3->data[nx]) {
            A12 = data_3->data[nx];
          }
        }
      }
    }

    i1 = Diff_12->size[0] * Diff_12->size[1];
    Diff_12->size[0] = 1;
    Diff_12->size[1] = b_loop_ub;
    emxEnsureCapacity_real_T(Diff_12, i1);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Diff_12->data[i1] = 0.0;
    }

    nx = 0;
    exitg2 = false;
    while ((!exitg2) && (nx <= i0)) {
      Diff_12->data[nx] = data_8->data[nx + 1] - data_8->data[nx];
      if (Diff_12->data[nx] != 0.0) {
        T9 = Data->data[(1 + nx) * 15];
        exitg2 = true;
      } else {
        nx++;
      }
    }

    M[0] = (signed char)(A12 > 0.55);
    M[2] = (signed char)(T9 - T1 > 6000.0);
  }

  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&Diff_12);
  emxFree_real_T(&data_12);
  emxFree_real_T(&data_10);
  emxFree_real_T(&data_8);
  emxFree_real_T(&data_5);
  emxFree_real_T(&data_3);
  printf("%4.2f  %4.2f  %4.2f  %4.2f  ", row, T1, T9, A12);
  fflush(stdout);
 printf("start 111333-------------------------------------------");
    printf("\n");
                  for (k = 0; k < 17; k++) {
                     printf("%d" , M[k]);
                     printf("\n");
                  }
                  printf("\n");
//
//    M[6]=7;
//    M[7]=8;
//    M[8]=9;
//    M[9]=10;


    printf("end 222236-------------------------------------------");
        printf("\n");


    return (void *)M;
}

emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols)
{
  emxArray_real_T *emx;
  emxInit_real_T(&emx, 2);
  emx->size[0] = rows;
  emx->size[1] = cols;
  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = rows * cols;
  emx->canFreeData = false;
  return emx;
}

void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int oldNumel)
{
  int newNumel;
  int i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((unsigned int)i, sizeof(boolean_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(boolean_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (boolean_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : emxArray_int32_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int oldNumel)
{
  int newNumel;
  int i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((unsigned int)i, sizeof(int));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (int *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : emxArray_real_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel)
{
  int newNumel;
  int i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((unsigned int)i, sizeof(double));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(double) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (double *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : emxArray_boolean_T **pEmxArray
 * Return Type  : void
 */
void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_int32_T **pEmxArray
 * Return Type  : void
 */
void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 * Return Type  : void
 */
void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (double *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_boolean_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions)
{
  emxArray_boolean_T *emxArray;
  int i;
  *pEmxArray = (emxArray_boolean_T *)malloc(sizeof(emxArray_boolean_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_int32_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions)
{
  emxArray_int32_T *emxArray;
  int i;
  *pEmxArray = (emxArray_int32_T *)malloc(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions)
{
  emxArray_real_T *emxArray;
  int i;
  *pEmxArray = (emxArray_real_T *)malloc(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (double *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

boolean_T rtIsNaN(real_T value)
{
  return (isnan(value) ? 1U : 0U);
}

/*
 * File trailer for CarDoorPhm_DataAnalysis.c
 *
 * [EOF]
 */
