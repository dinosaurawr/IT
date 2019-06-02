#include <stdlib.h>
struct Zachetka {
	char firstName = (char*)malloc(sizeof(char) * 30);
	char lastName = (char*)malloc(sizeof(char) * 30);
	char middleName = (char*)malloc(sizeof(char) * 40);
	int number;
	struct Term* termsInfo = malloc(sizeof(*termsInfo) * 4);
};

struct Term
{
	int number;
	int year;
	struct Subject* subjectInfo = malloc(sizeof(*subjectInfo) * 2);
};

struct Subject
{
	char name = (char*)malloc(sizeof(char) * 30);
	_Bool markType;///1 for exam 0 for credit
	_Bool creditMark;
	enum Mark examMark;
	char date = (char*)malloc(sizeof(char) * 30);
	char teacherLastName = (char*)malloc(sizeof(char) * 30);
};