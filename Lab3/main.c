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
		scanf("%d", response);
		switch (response)
		{
		case 1:
			system("cls");
			printf("Enter n:\n");
			int n;
			scanf("%d", n);
			printf("Result is %lf", summ(n));
		case 2:
			system("cls");
			printf("Enter epsilon:\n");
			double eps;
			scanf("%lf", eps);
			printf("Result is %lf", summ2(eps));
		case 3:
			system("cls");
			printf("Enter n and k\nExample: 12 2\n");
			int k;
			scanf("%d %d", n, k);
			printf("Result is:\n");
			print(n, k);
		case 4:
			system("cls");
			printf("Enter epsilon\n");
			scanf("%lf", eps);
			printf("Result is %d", findFirstElement(eps));
		case 5:
			system("cls");
			printf("Enter epsilon\n");
			scanf("%lf", eps);
			printf("Result is %d", findFirstNegativeElement(eps));
		default:
			continue;
		}
	}

}