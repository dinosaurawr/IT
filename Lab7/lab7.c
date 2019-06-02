#include <stdlib.h>
#include <stdio.h>
#include <header.h>

void incrementHeapVariable() {
	int* p = (int*)malloc(sizeof(int));
	*p = 10;
	printf("%p %d", p, *p);
	*p += 1;
	printf("%p %d", p, *p);
}

void sortHeapArray(int* arr, int n) {

	int* arrayElements;
	printf("Enter number of elements in array:\n");
	scanf("%d", arrayElements);
	*arr = (int*)malloc(*arrayElements * sizeof(int));
	readArray(arr, *arrayElements);
	writeArray(arr, *arrayElements);
	sortHeapArray(arr, *arrayElements);
	writeArray(arr, *arrayElements);
	free(arr);

}

char* heapStrcpy(const char* src) {

	char* heapStr = (char*)(malloc(sizeof(char) * strlen(src)));
	strcpy(heapStr, strlen(src), src);
	return heapStr;
}

char* heapDelete(char* str, const char* substr) {

	char* inHeapStr = heapStrcpy(str);
	char* inHeapSubstr = heapStrcpy(substr);

	delete(inHeapStr, inHeapSubstr);

	return inHeapStr;
}

char* strcat(const char* first, const char* second) {

	int len1 = strlen(first);
	int len2 = strlen(second);

	char* result = malloc(len1 + len2 + 1);

	memcpy(result, first, len1);
	memcpy(result + len1, second, len2 + 1);

	return result;
}

char* insert(const char* src, const char* str, int index) {
	char* strC;

	strC = (char*)malloc(strlen(destination) + strlen(seed) + 1);
	strncpy(strC, src, index);
	strC[index] = '\0';
	strcat(strC, index);
	strcat(strC, src + index);
	strcpy(src, strC);
	free(strC);
}