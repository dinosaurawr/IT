#include <math.h>
_Bool isInArea(double x, double y) {
	if ((x<=0 && x>=-1) && (y>=0 && y<=1))
		return 1;
	else if ((x<=0 && x>=-1) && (y<=0 && y>=-1))
		return 1;
	else if ((x >= 0 && x <= 1) && (pow(x, 2) + pow(y, 2) <= 1))
		return 1;
	return 0;
}
double f(double x) {
	if (x >= -3.5)
		return 45 * pow(x, 2) + 5;
	else
		return -(2 * x) / (-4 * x + 1);
}