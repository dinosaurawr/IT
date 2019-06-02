#include <math.h>
double f(double x) {
	double res;
	res = (1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x));
	return res;
}