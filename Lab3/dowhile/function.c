#include <math.h>

double function(int i) {
	return pow(-1, i)* (i + 1) / (pow(2, i - 1));
}