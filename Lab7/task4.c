#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char* strcpy(const char* src)
{
	char* dest = (char*)malloc(sizeof(src));
	char* dcur = dest;
	for (int i = 0; i < strlen(src); i++) {
		*dcur = src[i];
		dcur++;
	}

	return dest;
}