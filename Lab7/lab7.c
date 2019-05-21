#include <stdlib.h>
#include <stdio.h>

void incrementHeapVariable() {
	int* p = (int*)malloc(sizeof(int));
	*p = 10;
	printf("%p %d", p, *p);
	*p += 1;
	printf("%p %d", p, *p);
}