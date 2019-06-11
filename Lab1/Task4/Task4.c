#include <stdio.h>
#include <math.h>
double x, result;
void f(void);
void main() {
	x = 1.2;
	printf("x=%lf\n", x);
	f();
	printf("f(x)=%lf\n", result);
	printf("Input x:\n");
	scanf("%lf", &x);
	printf("x=%lf\n", x);
	f();
	printf("f(x)=%lf\n",result);
}
void f(void) {
	result = (1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x));
}