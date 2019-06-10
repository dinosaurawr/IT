#include <stdio.h>
#include "functions.h"
void print(int n, int k) {
	for (int i = 0; i < n; i=i+k) {
		printf("%lf\n", function(i));
	}
}