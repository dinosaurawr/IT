#include <stdlib.h>
#include <stdio.h>

void incrementHeapVariable() {
	int* p = malloc(sizeof(int));
	printf("Input num:\n");
	scanf("%d", p);
	printf("%p : %d\n", p, *p);
	*p += 1;
	printf("%p : %d\n", p, *p);
	free(p);
}