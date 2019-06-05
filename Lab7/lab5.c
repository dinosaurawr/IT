char* findHeap(const char* str, const char* substr) {
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
	for (char* curr = find(str, substr); curr != lastSymb;++curr) {
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

int strlen(const char* str) {

	int count = 0;
	for (char* cur = str; *cur != "\0"; ++cur) {
		++count;
	}
	return count;
}