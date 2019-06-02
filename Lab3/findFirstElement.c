#include <math.h>
#include "functions.h"
int findFirstElement(double eps) {
	int i;
	for (i = 0; 1; ++i) {
		if (abs(function(i)) <= eps) {
			break;
		}
	}
	return i;
}