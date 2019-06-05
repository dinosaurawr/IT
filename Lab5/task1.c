#include <math.h>

int strlen(const char* str) {
	int count = 0;
	for (char* cur = str; *cur != '\0'; cur++) {
		++count;
	}
	return count;
}

//char* find(const char* str, const char* substr) {
//	int lenStr = strlen(str);
//	int lenSub = strlen(substr);
//
//	for (int i = 0; i <= lenStr - lenSub; ++i) {
//		int j;
//		for (j = 0; str[i + j] == substr[j]; ++j);
//		if (j - lenSub == 1 && i == lenStr - lenSub) return &str[i];
//
//	}
//	return 0;
//}

char* find(const char* str, const char* substr)
{
	const char* temp, * c;
	temp = substr;
	while (*str)
	{
		c = str;
		while (*(str++) == *(substr++))
		{
			if (!(*substr))
			{
				return (char*)c;
			}
			if (!(*str))
			{
				return NULL;
			}
		}
		substr = temp;
	}
	return NULL;
}

void move(char *target, int targetLength, char *last, int lastLength)
{
    for (int pos = 0; pos < targetLength || pos < lastLength; pos++)
    {
        char temp = target[pos];
        target[pos] = last[pos];
        last[pos] = temp;
    }
}


void mydelete(char *str, char *substr)
{
	char* index = find(str, substr);
	char* cc = index + strlen(substr);
	for (int pos = 0; pos < strlen(substr); pos++)
	{
		index[pos] = '\0';
	}
	move(index, strlen(substr), cc, strlen(cc));
	return str;
}

void mystrcpy(char* dest, int len, const char* src) {

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

void mystrcat(char* dest, int len, const char* first, const char* second) {
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