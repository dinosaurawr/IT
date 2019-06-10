#include "functions.h"
double summ(int n) {
	double sum = 0;
	int i =0;
	do {
		sum += function(i);
		i++;
	} while (i < n);
	return sum;
}