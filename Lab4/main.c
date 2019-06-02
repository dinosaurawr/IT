#include <stdio.h>
#include <windows.system.h>

void main() {
	while (1) {
		sortStackArray();
		printf("One more time?\n1-yes, 0-no");
		int response = 0;
		int* respp = &response;
		scanf("%d", respp);
		if (*respp == 0) {
			exit(0);
		}
	}
	
}