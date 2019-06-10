#include <math.h>
#include "functions.h"
int findFirstNegativeElement(double eps) {
	int i=0;
	do {
		if (abs(function(i)) <= eps && function(i) < 0) {
			break;
		}
		i++;
	} while (1);
	return i;
}