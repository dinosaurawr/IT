#include <stdio.h>
#include "functions.h"
void print(int n, int k) {
	int i = 0;
	do {
		printf("%lf\n", function(i));
		i = i + k;
	} while (i < n);
}