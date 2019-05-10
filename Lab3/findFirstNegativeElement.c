#include <math.h>

int findFirstNegativeElement(double eps) {
	int count = 0;
	for (int i = 0;abs(function(i)) >= eps; i++) {
		if (abs(function(i)) <= eps && function(i) < 0) {
			break;
		}
		count++;
	}
	return count;
}