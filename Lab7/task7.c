#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

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
	char* name;
	enum Marktype marktype;
	union Mark mark;
	struct tm date;
	char* teacherName;
};

struct Semester
{
	int number;
	int year;
	struct Subject subjects[40];
};

struct RecordBook
{
	char* firstName;
	char* middleName;
	char* lastName;
	int studentId;
	struct Semester semesters[12];
};