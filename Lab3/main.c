#include <stdio.h>
#include <windows.system.h>

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
			printf("Result is %lf", summ(*np));
			break;
		case 2:
			system("cls");
			printf("Enter epsilon:\n");
			double eps;
			double* epsp = &eps;
			scanf("%lf", epsp);
			printf("Result is %lf", summ2(*epsp));
			break;
		case 3:
			system("cls");
			printf("Enter n and k\nExample: 12 \n2\n");
			int k;
			int* kp = &k;
			scanf("%d", np);
			scanf("%d", kp);
			printf("Result is:\n");
			printf(*np, *kp);
			break;
		case 4:
			system("cls");
			printf("Enter epsilon\n");
			scanf("%lf", epsp);
			printf("Result is %d", findFirstElement(eps));
			break;
		case 5:
			system("cls");
			printf("Enter epsilon\n");
			scanf("%lf", epsp);
			printf("Result is %d", findFirstNegativeElement(eps));
			break;
		default:
			break;
		}
		if (*responsep == 6) {
			exit(0);
		}
	}

}