/*
 * File: FeatureData_FeatureIdentify.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 15-Jul-2022 17:43:47
 */

/* Include Files */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "FeatureData_FeatureIdentify.h"
#include "FeatureData_FeatureIdentify_emxutil.h"

/* Function Definitions */
void fill_2d_array(char **arr, int columeSize) {
    strcpy((char*)(arr+0*sizeof(char)*columeSize), "hello");
    strcpy((char*)(arr+1*sizeof(char)*columeSize/sizeof(char*)), "cgo");
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
 * Arguments    : emxArray_boolean_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
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
 * Arguments    : emxArray_uint32_T **pEmxArray
 * Return Type  : void
 */
void emxFree_uint32_T(emxArray_uint32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_uint32_T *)NULL) {
    if (((*pEmxArray)->data != (unsigned int *)NULL) && (*pEmxArray)
        ->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_uint32_T *)NULL;
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


/* Function: rtIsNaN ==================================================
 * Abstract:
 * Test if value is not a number
 */
boolean_T rtIsNaN(real_T value)
{
  return (isnan(value) ? 1U : 0U);
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
 * Arguments    : emxArray_uint32_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_uint32_T(emxArray_uint32_T **pEmxArray, int numDimensions)
{
  emxArray_uint32_T *emxArray;
  int i;
  *pEmxArray = (emxArray_uint32_T *)malloc(sizeof(emxArray_uint32_T));
  emxArray = *pEmxArray;
  emxArray->data = (unsigned int *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_uint32_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_uint32_T(emxArray_uint32_T *emxArray, int oldNumel)
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

    newData = calloc((unsigned int)i, sizeof(unsigned int));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(unsigned int) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (unsigned int *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
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

/*
 * �˺���˵�������������ݽ���������ʶ��͹��Ϸ�����������������
 * Arguments    : const emxArray_real_T *data
 *                double M[17]
 * Return Type  : void
 */
int * FeatureData_FeatureIdentify(const emxArray_real_T *data, int M[17])
{

      printf("%d" , -922999999);
      printf("\n");

  int n;
  emxArray_real_T *data12;
  int i0;
  int b_n;
  int c_n;
  boolean_T exitg1;
  emxArray_uint32_T *m92;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  int nx;
  int idx;
  int k;
  double D9;
  int exitg2;
  emxArray_real_T *y;
  unsigned int data12_idx_0;
  double T9;

  /* =============================ȷ�����Output�Ľṹ============================= */
  memset(&M[0], 0, 17U * sizeof(double));

  /* ����17*50�ľ��������������ʶ��Ľ��������Ϊ��� */
  /* =====================���������ݽ���������ʶ��͹��Ϸ���======================== */
  if (data->size[0] == 0) {
    n = -2;
  } else if (data->size[0] > 15) {
    n = data->size[0] - 2;
  } else {
    n = 13;
  }

  emxInit_real_T(&data12, 1);

  /* �õ�����data������ */
  i0 = data12->size[0];
  data12->size[0] = n + 1;
  emxEnsureCapacity_real_T(data12, i0);
  for (i0 = 0; i0 <= n; i0++) {
    data12->data[i0] = 0.0;
  }

  /* Ԥ����0����data12�洢���ݣ�����12ָ���� */
  b_n = 0;
  c_n = 0;
  exitg1 = false;
  while ((!exitg1) && (c_n <= n)) {
    b_n = c_n;

    /* ����ѭ����������������,�õ�������ָ��lock aux�ı仯 */
    data12->data[c_n] = data->data[(c_n + data->size[0] * 11) + 1] - data->
      data[c_n + data->size[0] * 11];
    if (data12->data[c_n] != 0.0) {
      /* �õ�������ָ��ı仯������ֵn */
      exitg1 = true;
    } else {
      c_n++;
    }
  }

  /* -----------------------------��������------------------------------------ */
  emxInit_uint32_T(&m92, 1);
  emxInit_boolean_T(&x, 1);
  emxInit_int32_T(&ii, 1);
  if (data12->data[b_n] < 0.0) {
    /* ������ָ��lock aux�½��أ��������� */
    /* һ������������ʶ�� */
    /* 1��������ȫ�򿪣��������λ�� */
    i0 = data->size[0];
    nx = data->size[0];
    if (nx <= 2) {
      i0 = data->size[0];
      if (i0 == 1) {
        D9 = data->data[data->size[0] << 2];
      } else if ((data->data[data->size[0] << 2] < data->data[1 + (data->size[0]
        << 2)]) || (rtIsNaN(data->data[data->size[0] << 2]) && (!rtIsNaN
                   (data->data[1 + (data->size[0] << 2)])))) {
        D9 = data->data[1 + (data->size[0] << 2)];
      } else {
        D9 = data->data[data->size[0] << 2];
      }
    } else {
      if (!rtIsNaN(data->data[data->size[0] << 2])) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        do {
          exitg2 = 0;
          nx = data->size[0];
          if (k <= nx) {
            if (!rtIsNaN(data->data[(k + (data->size[0] << 2)) - 1])) {
              idx = k;
              exitg2 = 1;
            } else {
              k++;
            }
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);
      }

      if (idx == 0) {
        D9 = data->data[data->size[0] << 2];
      } else {
        D9 = data->data[(idx + (data->size[0] << 2)) - 1];
        nx = idx + 1;
        for (k = nx; k <= i0; k++) {
          if (D9 < data->data[(k + (data->size[0] << 2)) - 1]) {
            D9 = data->data[(k + (data->size[0] << 2)) - 1];
          }
        }
      }
    }

    /* data(:,5)����λ�������� */
    c_n = data->size[0];
    i0 = x->size[0];
    x->size[0] = c_n;
    emxEnsureCapacity_boolean_T(x, i0);
    for (i0 = 0; i0 < c_n; i0++) {
      x->data[i0] = (data->data[i0 + (data->size[0] << 2)] == D9);
    }

    nx = x->size[0];
    idx = 0;
    i0 = ii->size[0];
    ii->size[0] = x->size[0];
    emxEnsureCapacity_int32_T(ii, i0);
    c_n = 0;
    exitg1 = false;
    while ((!exitg1) && (c_n <= nx - 1)) {
      if (x->data[c_n]) {
        idx++;
        ii->data[idx - 1] = c_n + 1;
        if (idx >= nx) {
          exitg1 = true;
        } else {
          c_n++;
        }
      } else {
        c_n++;
      }
    }

    if (x->size[0] == 1) {
      if (idx == 0) {
        ii->size[0] = 0;
      }
    } else if (1 > idx) {
      ii->size[0] = 0;
    } else {
      i0 = ii->size[0];
      ii->size[0] = idx;
      emxEnsureCapacity_int32_T(ii, i0);
    }

    i0 = m92->size[0];
    m92->size[0] = ii->size[0];
    emxEnsureCapacity_uint32_T(m92, i0);
    c_n = ii->size[0];
    for (i0 = 0; i0 < c_n; i0++) {
      m92->data[i0] = (unsigned int)ii->data[i0];
    }

    /* ����λ�ô������λ��ʱ��T9 */
    /* �������Ϸ��� */
    /* 1��4-����ʱ�䳬ʱ��� */
    if (data->data[(int)m92->data[0] - 1] > 5501.0) {
      /* ����ʱ����ֵ��5201+200��+300=5701 */
      M[3] = 1.0;

      /* ���ڿ���ʱ�䳬ʱ���� */
    } else {
      M[3] = 0.0;

      /* �޿���ʱ�䳬ʱ���� */
    }
  }

  /* -----------------------------��������------------------------------------ */
  if (data12->data[b_n] > 0.0) {
    /* ������ָ��lock aux�����أ��������� */
    /* һ������������ʶ�� */
    /* 1������λ�ô������ */
    i0 = data->size[0];
    nx = data->size[0];
    if (nx <= 2) {
      i0 = data->size[0];
      if (i0 == 1) {
        D9 = data->data[data->size[0] << 2];
      } else if ((data->data[data->size[0] << 2] < data->data[1 + (data->size[0]
        << 2)]) || (rtIsNaN(data->data[data->size[0] << 2]) && (!rtIsNaN
                   (data->data[1 + (data->size[0] << 2)])))) {
        D9 = data->data[1 + (data->size[0] << 2)];
      } else {
        D9 = data->data[data->size[0] << 2];
      }
    } else {
      if (!rtIsNaN(data->data[data->size[0] << 2])) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        do {
          exitg2 = 0;
          nx = data->size[0];
          if (k <= nx) {
            if (!rtIsNaN(data->data[(k + (data->size[0] << 2)) - 1])) {
              idx = k;
              exitg2 = 1;
            } else {
              k++;
            }
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);
      }

      if (idx == 0) {
        D9 = data->data[data->size[0] << 2];
      } else {
        D9 = data->data[(idx + (data->size[0] << 2)) - 1];
        nx = idx + 1;
        for (k = nx; k <= i0; k++) {
          if (D9 < data->data[(k + (data->size[0] << 2)) - 1]) {
            D9 = data->data[(k + (data->size[0] << 2)) - 1];
          }
        }
      }
    }

    /* data(:,5)����λ��������,�������λ��D2 */
    c_n = data->size[0];
    i0 = x->size[0];
    x->size[0] = c_n;
    emxEnsureCapacity_boolean_T(x, i0);
    for (i0 = 0; i0 < c_n; i0++) {
      x->data[i0] = (data->data[i0 + (data->size[0] << 2)] == D9);
    }

    nx = x->size[0];
    idx = 0;
    i0 = ii->size[0];
    ii->size[0] = x->size[0];
    emxEnsureCapacity_int32_T(ii, i0);
    c_n = 0;
    exitg1 = false;
    while ((!exitg1) && (c_n <= nx - 1)) {
      if (x->data[c_n]) {
        idx++;
        ii->data[idx - 1] = c_n + 1;
        if (idx >= nx) {
          exitg1 = true;
        } else {
          c_n++;
        }
      } else {
        c_n++;
      }
    }

    if (x->size[0] == 1) {
      if (idx == 0) {
        ii->size[0] = 0;
      }
    } else if (1 > idx) {
      ii->size[0] = 0;
    } else {
      i0 = ii->size[0];
      ii->size[0] = idx;
      emxEnsureCapacity_int32_T(ii, i0);
    }

    i0 = m92->size[0];
    m92->size[0] = ii->size[0];
    emxEnsureCapacity_uint32_T(m92, i0);
    c_n = ii->size[0];
    for (i0 = 0; i0 < c_n; i0++) {
      m92->data[i0] = (unsigned int)ii->data[i0];
    }

    /* ����λ�ô������λ��ʱ��T2 */
    /* 2������λ�ô��ڻ���ֱ���߷ֽ紦�����ź���λ��ԼΪ150mm */
    c_n = data->size[0];
    i0 = data12->size[0];
    data12->size[0] = c_n;
    emxEnsureCapacity_real_T(data12, i0);
    for (i0 = 0; i0 < c_n; i0++) {
      data12->data[i0] = data->data[i0 + (data->size[0] << 2)] - 150.0;
    }

    emxInit_real_T(&y, 1);
    nx = data12->size[0];
    data12_idx_0 = (unsigned int)data12->size[0];
    i0 = y->size[0];
    y->size[0] = (int)data12_idx_0;
    emxEnsureCapacity_real_T(y, i0);
    for (k = 0; k < nx; k++) {
      y->data[k] = fabs(data12->data[k]);
    }

    b_n = y->size[0];
    if (y->size[0] <= 2) {
      if (y->size[0] == 1) {
        idx = 1;
      } else if ((y->data[0] > y->data[1]) || (rtIsNaN(y->data[0]) && (!rtIsNaN
                   (y->data[1])))) {
        idx = 2;
      } else {
        idx = 1;
      }
    } else {
      if (!rtIsNaN(y->data[0])) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k <= y->size[0])) {
          if (!rtIsNaN(y->data[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }

      if (idx == 0) {
        idx = 1;
      } else {
        D9 = y->data[idx - 1];
        i0 = idx + 1;
        for (k = i0; k <= b_n; k++) {
          if (D9 > y->data[k - 1]) {
            D9 = y->data[k - 1];
            idx = k;
          }
        }
      }
    }

    emxFree_real_T(&y);

    /* ����ֱ���߷ֽ紦ʱ��T4 */
    /* 3�����Ŵ���� */
    if ((int)m92->data[m92->size[0] - 1] > idx) {
      i0 = 1;
      nx = 1;
    } else {
      i0 = (int)m92->data[m92->size[0] - 1];
      nx = idx + 1;
    }

    c_n = nx - i0;
    if (c_n <= 2) {
      if (c_n == 1) {
        D9 = data->data[(i0 + (data->size[0] << 1)) - 1];
      } else if ((data->data[(i0 + (data->size[0] << 1)) - 1] < data->data[i0 +
                  (data->size[0] << 1)]) || (rtIsNaN(data->data[(i0 +
                    (data->size[0] << 1)) - 1]) && (!rtIsNaN(data->data[i0 +
                    (data->size[0] << 1)])))) {
        D9 = data->data[i0 + (data->size[0] << 1)];
      } else {
        D9 = data->data[(i0 + (data->size[0] << 1)) - 1];
      }
    } else {
      if (!rtIsNaN(data->data[(i0 + (data->size[0] << 1)) - 1])) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k <= c_n)) {
          if (!rtIsNaN(data->data[((i0 + k) + (data->size[0] << 1)) - 2])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }

      if (idx == 0) {
        D9 = data->data[(i0 + (data->size[0] << 1)) - 1];
      } else {
        D9 = data->data[((i0 + idx) + (data->size[0] << 1)) - 2];
        nx = idx + 1;
        for (k = nx; k <= c_n; k++) {
          if (D9 < data->data[((i0 + k) + (data->size[0] << 1)) - 2]) {
            D9 = data->data[((i0 + k) + (data->size[0] << 1)) - 2];
          }
        }
      }
    }

    /* ����ֱ�ߴ������� */
    /* 4������ʱ�� */
    T9 = 0.0;

    /* ���·�δ�ҵ�����������״̬���½��أ�T9=999 */
    i0 = data12->size[0];
    data12->size[0] = n + 1;
    emxEnsureCapacity_real_T(data12, i0);
    for (i0 = 0; i0 <= n; i0++) {
      data12->data[i0] = 0.0;
    }

    c_n = 0;
    exitg1 = false;
    while ((!exitg1) && (c_n <= n)) {
      /* ����ѭ����������������,�õ�����������״̬���½��� */
      data12->data[c_n] = data->data[(c_n + data->size[0] * 7) + 1] - data->
        data[c_n + data->size[0] * 7];
      if (data12->data[c_n] != 0.0) {
        T9 = data->data[c_n + 1];

        /* ����������״̬�½��ض�Ӧʱ�̣�������ʱ��T9 */
        exitg1 = true;
      } else {
        c_n++;
      }
    }

    /* ��������ʶ�� */
    /* 1��1-�������ŵ�������ֵ��� */
    if (D9 > 0.7) {
      /* �������ŵ�����ֵ */
      M[0] = 1.0;

      /* ���ڹ��ŵ�������ֵ���� */
    } else {
      M[0] = 0.0;

      /* �޹��ŵ�������ֵ���� */
    }

    /* 1��3-��������ʱ�䳬ʱ��� */
    if (T9 > 6101.0) {
      /* ��������ʱ����ֵ��5601+200��+300=6101 */
      M[2] = 1.0;

      /* ���ڹ���ʱ�䳬ʱ���� */
    } else {
      M[2] = 0.0;

      /* �޹���ʱ�䳬ʱ���� */
    }
  }

  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_uint32_T(&m92);
  emxFree_real_T(&data12);

    printf("start 111-------------------------------------------");
    printf("\n");
          for (k = 0; k < 17; k++) {
             printf("%d" , M[k]);
             printf("\n");
          }
          printf("\n");
    printf("end 2222-------------------------------------------");
printf("\n");
  return M;
}


void FeatureData_FeatureIdentifyt(const emxArray_real_T *data){
printf("%d/n" , 44444);
1+1;
printf("%d/n" , 223);
}

void FeatureData_FeatureIdentifyt111(){
printf("Theprogram test print style!/n");


      printf("%d/n" , 223);
      printf("%d/n" , -232);
      printf("/n");

      printf("%o/n" , 223);
      printf("%o/n" , -232);
      printf("/n");

      printf("%x/n" , 223);
      printf("%x/n" , -232);
      printf("/n");

      printf("%u/n" , 223);
      printf("%u/n" , -232);
      printf("/n");

      printf("%f/n" , 223.11);
      printf("%f/n" , 232.11111111);
      printf("%f/n" , -223.11);
      printf("%f/n" , -232.11111111);
      printf("/n");

      printf("%e/n" , 223.11);
      printf("%e/n" , 232.11111111);
      printf("%e/n" , -223.11);
      printf("%e/n" , -232.11111111);
      printf("/n");

      printf("%g/n" , 223.11);
      printf("%g/n" , 232.111111111111);
      printf("%g/n" , -223.11);
      printf("%g/n" , -232.111111111111);
      printf("/n");

      printf("%c/n" , 'a');
      printf("%c/n" , 97);
      printf("/n");

      printf("%s/n" , "this is a test!");
      printf("%s/n" , "2342o34uo23u");
      printf("/n");
}

struct Foo{
    int a;
    int *p;
};


void plusOne(int *i) {
    (*i)++;
}
/*
 * File trailer for FeatureData_FeatureIdentify.c
 *
 * [EOF]
 */
