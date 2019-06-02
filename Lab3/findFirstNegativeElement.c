#include <math.h>
#include "functions.h"
int findFirstNegativeElement(double eps) {
	int i;
	for (i = 0;1; i++) {
		if (abs(function(i)) <= eps && function(i) < 0) {
			break;
		}
	}
	return i;
}