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