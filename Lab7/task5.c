#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char* strcat(const char* first, const char* second)
{
	int n = strlen(first) + strlen(second) + 1;
	char* dest = (char*)malloc(n);
	char* d = dest;
	const char* f = first;
	const char* s = second;
	int dlen;

	while (*f != '\0')
	{
		*d++ = *f;
		f++;
	}

	while (*s != '\0')
	{
		*d++ = *s;
		s++;
	}
	*d = '\0';

	return dest;
}