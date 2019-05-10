#include <math.h>

double function(int i) {
	double result;
	result = pow(-1, i) * (i + 1) / (pow(2, i - 1));
	return result;
}