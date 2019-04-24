#include <stdio.h>
#include <math.h>

void main() {

	double x = 1.2;
	printf("x=%lf\n", x);
	printf("f(x)=%lf\n", func(x));

	printf("Input x:\n");
	scanf("%lf", &x);
	printf("x=%lf\n", x);
	printf("f(x)=%lf\n", func(x));

}

double f(double x) {
	double res;
	res = (1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x));
	return res;
}