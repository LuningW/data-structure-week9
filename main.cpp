#include<stdio.h>
#include"��������.h"
#include"ϣ������.h"
#include"������.h"
#include"�鲢����.h"
#include"��������.h"
#define N 10
int main(void)
{
	int A[N],LEeft,Right,TmpArrty;
	for (int i = 0; i < N; i++)
		scanf_s("%d", &A[i]);
	InsertionSort(A, N);
	//Quicksort(A,N);
	//MSort(A,TmpArry,Left,Right);
	//Mergesort(A,N);
	//ShellSort(A,N);
	//Heapsort(A,N);
	printf("\n");
	for (int i = 0; i < N; i++)
		printf("%d\n", A[i]);
	return 0;