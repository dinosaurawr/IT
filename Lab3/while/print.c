#include <stdio.h>
#include "functions.h"
void print(int n, int k) {
	int i = 0;
	while (i < n) {
		printf("%lf\n", function(i));
		i = i + k;
	}
}