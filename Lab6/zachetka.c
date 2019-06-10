#include <stdio.h>
#include <time.h>
#include <string.h>

enum Markvalue
{
	poor,
	bad,
	good,
	very_good
};

union Mark
{
	int acceptable;
	enum Markvalue mark;
};

enum Marktype
{
	test,
	exam
};

struct Subject
{
	char name[50];
	enum Marktype marktype;
	union Mark mark;
	struct tm date;
	char teacherName[40];
};

struct Semester
{
	int number;
	int year;
	struct Subject subjects[20];
};

struct RecordBook
{
	char firstName[40];
	char middleName[40];
	char lastName[40];
	int studentid;
	struct Semester semesters[12];
};


void printRb(const struct RecordBook* recordBook)
{
	printf("============================\n");
	printf("FirstName: %s\nMiddleName: %s\nLastName: %s\n", recordBook->firstName, recordBook->middleName, recordBook->lastName);
	printf("RB number: %d\n\n", recordBook->studentid);
}

void printSubject(const struct Subject* subject)
{
	printf("%s | ", subject->name);
	printf("%s | ", (subject->marktype == test ? "test" : "exam"));
	if (subject->marktype == test)
		printf("%s | ", subject->mark.acceptable ? "Passed" : "Not Passed");
	else
	{
		switch (subject->mark.mark)
		{
		case poor:
			printf("%s | ", "Not Passed");
			break;
		case bad:
			printf("%s | ", "Passed");
			break;
		case good:
			printf("%s | ", "Good");
			break;
		case very_good:
			printf("%s | ", "Very Good");
			break;
		}
	}
	printf("%d.%d.%d | ", subject->date.tm_mday, subject->date.tm_mon + 1, subject->date.tm_year);
	printf("%s\n", subject->teacherName);

}

void printSemester(const struct Semester* semester)
{
	printf("Semester number: %d\nStudy year: %d\n", semester->number, semester->year);
	printf("Name | Type | Mark | Date | Teacher\n");
	printf("----------------------------\n");
	for (int subId = 0; subId < 20 && strlen(semester->subjects[subId].name); ++subId)
	{
		printSubject(&semester->subjects[subId]);
	}
}

int main()
{
	struct RecordBook recordBook =
	{
	 "Kryukov",
	 "Aleksandr",
	 "Vitalevich", 
	 17079, 
	 {
		 { 
		   1,
		   1,
		   {
			   {
				 "Math",
				 test, 
				 { 
					.acceptable = 1
				 },
				 { 
					 .tm_mday = 1,
					 .tm_mon = 1,
					 .tm_year = 1999
				 },
				 "Bukvoedov"
			   },
			   {
				 "Math",
				 exam, 
				 {
					.mark = 3
				 },
				 {
					 .tm_mday = 1,
					 .tm_mon = 1,
					 .tm_year = 1999
				 },
				 "Bukvoedov"
			   }
		   }
		 },
		 { 
		   2, 
		   1, 
		   {
			   {
				 "Math", 
				 test,
				 {
					.acceptable = 1
				 },
				 {
					 .tm_mday = 1,
					 .tm_mon = 1,
					 .tm_year = 1999
				 },
				 "Bukvoedov" 
			   },
			   {
				 "Math",
				 test,
				 { 
					.acceptable = 1
				 },
				 { 
					 .tm_mday = 1,
					 .tm_mon = 1,
					 .tm_year = 1999
				 },
				 "Bukvoedov" 
			   }
		   }
		 }
	 }
	};

	printf("1. Open record book\r\n2. Exit\r\n");
	char answer = _getch();
	int x;

	switch (answer)
	{
	case '1':
		printRb(&recordBook);
		printf("Please, enter number of semester:\n");
		scanf("%d", &x);
		printf("============================\n");
		printSemester(&recordBook.semesters[x - 1]);
		break;
	case '2':
		break;

	default:
		printf("Incorrect input.\n");
		break;
	}

	system("pause");
	return 0;
}