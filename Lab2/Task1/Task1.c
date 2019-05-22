#include <stdio.h>
#include "isInArea.c"
void main() {
		printf("Input task number:\n");

		switch (getchar())
		{
		case '1':
			printf("Task 1:\n");
			double x, y;
			printf("Input x and then y:\n");
			scanf("%lf", &x);
			scanf("%lf", &y);
			if (isInArea(x, y)) {
				printf("belongs\n");
			}
			else {
				printf("do not belongs\n");
			}
			break;

		case '2':
			printf("Task 2:\nInput x:\n");
			scanf("%lf", &x);
			printf("result is: %lf\n", f(x));
			break;

		default:
			printf("wrong task number\n");
		}

}