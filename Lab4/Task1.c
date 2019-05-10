#include <stdio.h>
#include <math.h>

void f(const double* px, double* resultp) {
	*resultp = (1 - 2 * pow(sin(*px), 2)) / (1 + sin(2 * *px));
}


void main() {

	const double x = 1.2;
	const double* px = &x;
	double result = 0;
	double* resultp = &result;
	printf("x=%lf\n", *px);
	f(px, resultp);
	printf("f(x)=%lf\n", *resultp);

	printf("Input x:\n");
	const double x2;
	double* px2 = &x2;
	scanf("%lf", px2);
	printf("x=%lf\n", *px2);
	f(px2, resultp);
	printf("f(x)=%lf\n", *resultp);

}