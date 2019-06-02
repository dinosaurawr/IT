#include <stdio.h>
#include <math.h>
void main() {
	double x = 1.2;
	printf("x=%lf\n", x);
	printf("f(x)=%lf\n", (1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x)));
	printf("Input x:\n");
	double x2;
	scanf("%lf", &x2);
	printf("x=%lf\n", x2);
	printf("f(x)=%lf\n", (1 - 2 * pow(sin(x2), 2)) / (1 + sin(2 * x2)));
}