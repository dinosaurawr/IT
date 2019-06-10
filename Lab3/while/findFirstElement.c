#include <math.h>
#include "functions.h"
int findFirstElement(double eps) {
	int i=0;
	while(1) {
		if (abs(function(i)) <= eps) {
			break;
		}
		i++;
	}
	return i;
}