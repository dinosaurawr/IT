#include <stdio.h>
#include "header.h"
void main() {
	for (int i = 0; i >= 0; i++) {
		//menu output
		for (int i = 1;i <7;i++) {
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
			system("cls");
			printf("Enter string(less than 60 chars):\n");
			char str2[60];
			char* strp2 = &str;
			scanf("%s", strp2);
			char tocopy[60];
			char* tocopyp = &tocopy;
			mystrcpy(tocopyp, 60, strp2);
			printf("String copied, address is: %p\n", tocopyp);
			break;
		case 5:
			system("cls");
			printf("Enter first string(less than 60 chars):\n");
			char str3[60];
			char* strp3 = &str3;
			scanf("%s", strp3);
			printf("Enter second string(less than 60 chars):\n");
			const char* substr2[60];
			char* substrp2 = &substr2;
			scanf("%s", substrp2);
			char dest[120];
			mystrcat(&dest, 120, strp3, substrp2);
			printf("New string is %s\n", dest);
			break;
		default:
			break;
		}
		if (*responsep == 6) {
			exit(0);
		}
	}

}