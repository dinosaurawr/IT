#include <stdio.h>
#include <windows.system.h>
#include "functions.h"

void main() {
	for (int i = 0; i >= 0; i++) {
		//menu output
		for (int i = 1;i < 7;i++) {
			if (i == 6) {
				printf("%d. Exit\n", i);
			}
			else {
				printf("%d. Task %d\n", i, i);
			}
		}
		printf("Enter task number:\n");
		int response=1;
		int* responsep = &response;
		scanf("%d", responsep);
		switch (response)
		{
		case 1:
			system("cls");
			printf("Enter n:\n");
			int n;
			int* np = &n;
			scanf("%d", np);
			printf("Result is %lf\n", summ(*np));
			break;
		case 2:
			system("cls");
			printf("Enter epsilon:\n");
			double eps;
			double* epsp = &eps;
			scanf("%lf", epsp);
			printf("Result is %lf\n", summ2(*epsp));
			break;
		case 3:
			system("cls");
			printf("Enter n and k\nExample:\n 12 \n2\n");
			int numberElements;
			int* numberElementsp = &numberElements;
			int k;
			int* kp = &k;
			scanf("%d", numberElementsp);
			scanf("%d", kp);
			printf("Result is:\n");
			print(*numberElementsp, *kp);
			break;
		case 4:
			system("cls");
			printf("Enter epsilon\n");
			double epsilon;
			double* epsilonp = &epsilon;
			scanf("%lf", epsilonp);
			printf("Result is %d\n", findFirstElement(*epsilonp));
			break;
		case 5:
			system("cls");
			printf("Enter epsilon\n");
			double epsilon2;
			double* epsilonp2 = &epsilon2;
			scanf("%lf", epsilonp2);
			printf("Result is %d\n", findFirstNegativeElement(*epsilonp2));
			break;
		default:
			break;
		}
		if (*responsep == 6) {
			exit(0);
		}
	}

}