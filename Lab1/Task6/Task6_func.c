#include <math.h>

double x, result;

void f(void) {
	result = (1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x));
}