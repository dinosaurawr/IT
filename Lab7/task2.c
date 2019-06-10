#include <stdlib.h>
#include <stdio.h>
void lab7writeArray(int* arr, int n) {

	for (int* cur = arr; cur - arr < n; ++cur) {
		printf("%d ", *cur);
	}

	printf("\n");
}

void lab7readArray(int* arr, int n) {
	printf("Enter %d elements", n);
	for (int* cur = arr; cur - arr < n; ++cur) {
		scanf("%d", cur);
	}

}
//bubble sort
void lab7sort(int* arr, int n) {

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (*(arr + j) > * (arr + j + 1))
			{
				int tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;
			}
		}
	}
}

void sortHeapArray(int* arr, int n) {
	lab7readArray(arr, n);
	lab7writeArray(arr, n);
	lab7sort(arr, n);
	lab7writeArray(arr, n);
	free(arr);
}