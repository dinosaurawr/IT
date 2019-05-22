#include <math.h>
#include "functions.h"

int findFirstElement(double eps) {
	int count = 0;
	for (int i = 0; abs(function(i)) > eps; ++i) {
		if (abs(function(i)) <= eps) {
			break;
		}
		count++;
	}
	return count;
}