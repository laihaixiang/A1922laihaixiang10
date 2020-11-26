#include "sortg.h"

void disp(SQ *sq, dataType n) {
	for (int i = 0; i < n; i++) {
		sq->arr[i] = rand() % 100;
	}

	printf("----初始数据为:");
	for (int i = 0; i < n; i++) {
		printf("%d\t",sq->arr[i]);
	}
	printf("\n");
}


//冒泡排序
void bubbleSort(SQ *sq, dataType n) {
	int i, j, t;
	for (i = 1; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (sq->arr[j] > sq->arr[j + 1]) {
				t = sq->arr[j];
				sq->arr[j] = sq->arr[j +1];
				sq->arr[j + 1] = t;
			}
		}
	}
}

//插入排序
void insertSort(SQ *sq, dataType n) {
	int i, j, t;
	for (i = 1; i < n; i++) {
		t = sq->arr[i];
		j = i - 1;
		while (j >= 0 && sq->arr[j] > t) {
			sq->arr[j + 1] = sq->arr[j];
			j--;
		}
		sq->arr[j + 1] = t;
	}
}

//选择排序
void selectSort(SQ *sq, dataType n) {
	int i, j, k, m;
	for (i = 0; i < n - 1; i++) {
		m = sq->arr[i];
		k = i;
		for (j = i + 1; j < n; j++)
			if (sq->arr[j] < m) {
				m = sq->arr[j]; k = j;
			}
		sq->arr[k] = sq->arr[i];
		sq->arr[i] = m;
	}
}


//快速排序
int partition(SQ *sq, dataType low, dataType high) {
	int x = sq->arr[low];
	while (low < high) {
		while (low < high && sq->arr[high] >= x) high--;
		if (low < high) {
			sq->arr[low] = sq->arr[high];
			low++;
		}
		while (low < high && sq->arr[low] <= x) low++;
		if (low = high) {
			sq->arr[high] = sq->arr[low];
			high--;
		}
	}
	sq->arr[low] = x;
	return low;
}
	

void qSort(SQ *sq, dataType low, dataType high){
	if (low < high) {
		int mid = partition(sq, low, high);
		qSort(sq, low, mid - 1);
		qSort(sq, mid + 1, high);
	}
}

void quickSort(SQ *sq, dataType n){
	qSort(sq, 0, n - 1);
}
