#include <stdio.h>
#include "header.h"
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
		int response = 1;
		int* responsep = &response;
		scanf("%d", responsep);
		switch (response)
		{
		case 1:
			system("cls");
			printf("Enter string(less than 60 chars):\n");
			char string[60];
			const char* stringp = &string;
			scanf("%s", stringp);
			printf("String length is %d\n", strlen(stringp));
			break;
		case 2:
			system("cls");
			printf("Enter string(less than 60 chars):\n");
			char string2[60];
			const char* stringp2 = &string2;
			scanf("%s", stringp2);
			printf("Enter substring(less than 60 chars):\n");
			char substring[60];
			const char* substringp = &substring;
			scanf("%s", substringp);
			printf("Substring pointer is %p\n", find(stringp2,substringp));
			break;
		case 3:
			system("cls");
			printf("Enter string(less than 60 chars):\n");
			char str[60];
			char* strp = &str;
			scanf("%s", strp);
			printf("Enter substring(less than 60 chars):\n");
			const char* substr[60];
			char* substrp = &substr;
			scanf("%s", substrp);
			mydelete(strp, substrp);
			printf("New string is %s\n", str);
			break;
		case 4:

		default:
			break;
		}
		if (*responsep == 6) {
			exit(0);
		}
	}

}