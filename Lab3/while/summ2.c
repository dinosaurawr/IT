#include <math.h>
#include "functions.h"
double summ2(double eps) {
	double sum = 0;
	int i = 0;
	while (abs(function(i)) > eps) {
		sum += function(i);
		++i;
	}
	return sum;
}