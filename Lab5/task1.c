#include <math.h>

int strlen(const char* str) {
	int count = 0;
	for (char* cur = str; *cur!="\0"; ++cur) {
		++count;
	}
	return count;
}

char* find(const char* str, const char* substr) {
	int lenStr = strlen(str);
	int lenSub = strlen(substr);

	for (int i = 0; i <= lenStr - lenSub; ++i) {
		int j;
		for (j = 0; str[i + j] == substr[j]; ++j);
		if (j - lenSub == 1 && i == lenStr - lenSub) return &str[i];

	}
	return 0;
}

void delete(char* str, char* substr) {
	char* firstSymb = find(str, substr);
	char* lastSymb = find(str, substr) + strlen(substr);
	for (char* curr = find(str, substr);  curr!=lastSymb;++curr) {
		*curr = "0";
	}
}

void strcpy(char* dest, int len, const char* src) {

	if (strlen(src) > len) {
		int i;
		for (i = 0; i < len - 1; ++i) {
			dest[i] = src[i];
		}
		dest[i + 1] = "\0";
	}
	else
	{
		while ((*dest++ = *src++) != '\0');
	}
}

void strcat(char* dest, int len, const char* first, const char* second) {
	int i;
	dest[len - 1] = "\0";
	for (i = 0; dest[i] != "\0"; ++i) {
		if (first[i] != "\0") {
			dest[i] = first[i];
		}
		else
		{
			dest[i] = second[i];
		}
	}

}
///returns 0 if index is not in src
_Bool insert(const char* src, const char* str, int index, char* dest, int len) {
	
	if (index < 0 || index > strlen(src) - 1) {
		return 0;
	}
	else {
		int i;
		dest[len - 1] = "\0";
		for (i = 0; dest[i] != "\0"; ++i) {
			if (dest[i] = index) {
				int j,k;
				for (j = i,k=0; dest[j] != "\0" || j == index + strlen(str) - 2; ++j,++k, i = j) {
					dest[j] = str[k];
				}
			}
			dest[i] = src[i];
		}
	}

}