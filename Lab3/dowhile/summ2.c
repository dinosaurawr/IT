#include <math.h>
#include "functions.h"
double summ2(double eps) {
	double sum = 0;
	int i = 0;
	do {
		sum += function(i);
		++i;
	} while (abs(function(i)) > eps);
	return sum;
}