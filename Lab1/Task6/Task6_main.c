#include <stdio.h>
#include "Task6_func.c"
void main() {
	x = 1.2;
	printf("x=%lf\n", x);
	f();
	printf("f(x)=%lf\n", result);
	printf("Input x:\n");
	scanf("%lf", &x);
	printf("x=%lf\n", x);
	f();
	printf("f(x)=%lf\n", result);
}