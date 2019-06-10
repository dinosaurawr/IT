#include <stdlib.h>
#include <stdio.h>
#include "header.h"

void main() {
	for (int i = 0; i >= 0; i++) {
		//menu output
		for (int i = 1;i < 8;i++) {
			if (i == 7) {
				printf("%d. Exit\n", i);
			}
			else {
				printf("%d. Task %d\n", i, i);
			}
		}
		printf("Enter task number:\n");
		int response = 1;
		int* responsep = &response;
		scanf("%d", responsep);
		switch (response)
		{
		case 1:
			system("cls");
			incrementHeapVariable();
			break;
		case 2:
			system("cls");
			int n;
			printf("Enter number of elements in array:\n");
			scanf("%d", &n);
			int* arr = malloc(n * sizeof(int));
			sortHeapArray(arr, n);
			break;
		case 3:
			system("cls");
			printf("Enter string(less than 60 chars):\n");
			char str[60];
			scanf("%s", &str);
			printf("Enter substring(less than 60 chars):\n");
			char substr[60];
			scanf("%s", &substr);
			delete(&str, &substr);
			printf("New string is %s\n", str);
			break;
		case 4:
			system("cls");
			printf("Enter string(less than 60 chars):\n");
			char str2[60];
			scanf("%s", &str);
			printf("String copied, address is: %p\n", strcpy(&str));
			break;
		case 5:
			system("cls");
			printf("Enter first string(less than 60 chars):\n");
			char str3[60];
			scanf("%s", &str3);
			printf("Enter second string(less than 60 chars):\n");
			char str32[60];
			scanf("%s", &str32);
			char dest[120];
			printf("New string is %s\n", strcat(&str3, &str32));
			break;
		case 6:
			system("cls");
			printf("Enter string in which you want to insert smth:\n");
			char str_inserted[60];
			scanf("%s", &str_inserted);
			printf("Enter inserting string:\n");
			char str_to_insert[60];
			scanf("%s", &str_to_insert);
			printf("Enter index to insert:\n");
			int index;
			scanf("%d", &index);
			printf("Result is: %s\n", insert(&str_inserted, &str_to_insert, index));
			break;
		default:
			break;
		}
		if (*responsep == 7) {
			exit(0);
		}
	}

}