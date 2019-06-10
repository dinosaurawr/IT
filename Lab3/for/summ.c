#include "functions.h"
double summ(int n) {
	double sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += function(i);
	}
	return sum;
}