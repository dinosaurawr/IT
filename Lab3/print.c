#include <stdio.h>
void print(int n, int k) {
	for (int i = 0; i < n; ++i) {
		if (k % i == 0) {
			continue;
		}
		printf("%f", function(i));
	}
}