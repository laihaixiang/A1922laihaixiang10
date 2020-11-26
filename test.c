#include "sortg.h"

int main(int argc, char **argv)
{
	SQ *sq = (SQ *)malloc(sizeof(SQ));
	int i;

	disp(sq,SIZE);
	bubbleSort(sq, SIZE);
	printf("冒泡排序后数据:");
	for (i = 0; i < SIZE; i++)  printf("%d\t", sq->arr[i]);
	printf("\n");

	disp(sq,SIZE);
	insertSort(sq, SIZE);
	printf("插入排序后数据:");
	for (i = 0; i < SIZE; i++)  printf("%d\t", sq->arr[i]);
	printf("\n");

	disp(sq,SIZE);
	selectSort(sq, SIZE);
	printf("选择排序后数据:");
	for (i = 0; i < SIZE; i++)  printf("%d\t", sq->arr[i]);
	printf("\n");

	disp(sq,SIZE);
	quickSort (sq, SIZE);
	printf("快速排序后数据:");
	for (i = 0; i < SIZE; i++)  printf("%d\t", sq->arr[i]);
	printf("\n");

	return 0;
}
