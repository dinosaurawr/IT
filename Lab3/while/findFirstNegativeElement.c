#include <math.h>
#include "functions.h"
int findFirstNegativeElement(double eps) {
	int i=0;
	while(1) {
		if (abs(function(i)) <= eps && function(i) < 0) {
			break;
		}
		i++;
	}
	return i;
}