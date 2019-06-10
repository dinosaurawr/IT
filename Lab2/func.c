#include <math.h>
double f(double x) {
	if (x >= -3.5)
		return 45 * pow(x, 2) + 5;
	else
		return -(2 * x) / (-4 * x + 1);
}