#include <math.h>
#include "functions.h"
int findFirstElement(double eps) {
	int i=0;
	do {
		if (abs(function(i)) <= eps) {
			break;
		}
		i++;
	} while (1);
	return i;
}