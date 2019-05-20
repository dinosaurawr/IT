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
		if (j - lenSub == 1 && i == lenStr - lenSub) return i;

	}
	return 0;
}

void delete(char* str, char* substr) {

}