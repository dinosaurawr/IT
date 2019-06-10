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

void mystrcpy(char* dest, int len, const char* src)
{
	char* d = dest;
	const char* s = src;
	int n = len;

	if (n != 0) {
		while (--n != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
	}

	if (n == 0) {
		if (len != 0)
			* d = '\0';
	}
}

void mystrcat(char* dest, int len, const char* first, const char* second)
{
	char* d = dest;
	const char* s = second;
	int n = len;
	int dlen;

	mystrcpy(dest, len, first);

	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dest;
	n = len - dlen;

	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
}

_Bool myinsert(const char* s, const char* w, int p, char* dest, int n)
{
	const char* q;
	int i, j;
	char* t = dest;

	mystrcpy(dest, n, s);

	if ((p >= n) || !*w)
		return 0;

	for (q = w; *q; ++q);
	for (dest += p; *dest; ++dest);

	i = (int)(q - w);
	j = (int)(dest - t);
	if ((i + j) >= n)
		return 0;

	dest += i;
	for (q = t + p; dest > q; --dest)
		* dest = *(dest - i);

	dest = t + p;
	while (*w)
		* dest++ = *w++;
	return 1;
}