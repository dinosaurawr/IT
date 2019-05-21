struct Zachetka {
	char firstName[30];
	char lastName[30];
	char middleName[40];
	int number;
	struct Term termsInfo[12];
};

struct Term
{
	int number;
	int year;
	struct Subject subjectInfo[20];
};

struct Subject 
{
	char name[25];
	_Bool markType;///1 for exam 0 for credit
	_Bool creditMark;
	enum Mark examMark;
	char date[20];
	char teacherLastName[30];
};