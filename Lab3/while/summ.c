#include "functions.h"
double summ(int n) {
	double sum = 0;
	int i =0;
	while(i<n) {
		sum += function(i);
		i++;
	}
	return sum;
}