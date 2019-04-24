#include <stdio.h>
#include "Task5_func.c"

void main() {

	double x = 1.2;
	printf("x=%lf\n", x);
	printf("f(x)=%lf\n", f(x));

	printf("Input x:\n");
	scanf("%lf", &x);
	printf("x=%lf\n", x);
	printf("f(x)=%lf\n", f(x));

}