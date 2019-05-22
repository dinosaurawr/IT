#include <math.h>
#include "functions.h"

double summ2(double eps) {
	double sum = 0;
	for (int i = 0; abs(function(i)) > eps; ++i) {
		sum += function(i);
	}
	return sum;
}