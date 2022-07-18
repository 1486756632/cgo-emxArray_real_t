#include <stdio.h>
#include <string.h>
struct Foo{
    int a;
    int *p;
};
struct emxArray_real_TT
{
  double *data;
  int *size;
  int allocatedSize;
  int numDimensions;
};

void plusOne(int *i) {
printf("----------------------------");
    (*i)++;
    printf("%d\n",*i);
}