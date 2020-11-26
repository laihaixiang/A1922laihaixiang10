#ifndef sortg_h
#define sortg_h

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef int dataType;

typedef struct sq_{
	dataType arr[SIZE];
} SQ;

void disp(SQ *, dataType);
void bubbleSort(SQ *, dataType);
void insertSort(SQ *, dataType);
void selectSort(SQ *, dataType);
void quickSort(SQ *, dataType);
int partition(SQ *,dataType,dataType);
void qSort(SQ *,dataType,dataType);

#endif
