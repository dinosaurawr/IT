#include <stdio.h>
#define N 5

void writeArray(int* arr, int n) {

	for (int* cur = arr; cur - arr < n; ++cur) {
		printf("%d ", *cur);
	}

	printf("\n");
}

void readArray(int* arr, int n){

	for (int* cur = arr; cur - arr < n; ++cur) {
		printf("Enter arr[%d]:\n", cur-arr);
		scanf("%d", cur);
	}

}

//bubble sort
void sort(int* arr, int n) {

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (*(arr+j) > *(arr+j+1))
			{
				int tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;
			}
		}
	}
}

void sortStackArray(void) {
	printf("%d\n", N);
	int arr[N];
	readArray(&arr, N);
	writeArray(&arr, N);
	sort(&arr, N);
	writeArray(&arr, N);
}