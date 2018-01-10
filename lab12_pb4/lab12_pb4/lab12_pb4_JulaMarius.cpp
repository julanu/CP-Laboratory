/*
	Author: Jula Marius
	Date: 2/1/17
	Description: Using included structures, data_calend with fields day, month, year and
				personal_data with fields name, surname, occupation, code, department, birth_date
				and empl_date of type data_calend, generate an array of structures of type
				personal_data, containing couple of employees (max. 20), reading their data from the
				keyboard. Considering “engineer”, “teacher”, “student” and “manager” as possible
				values for the field occupation, display all engineer’s records.

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define MAX 20
#define MAX_NS 60

struct data_calend {
	int day;
	int month;
	int year;
};

struct personal_data {
	char name[MAX_NS];
	char surname[MAX_NS];
	char occupation[MAX];
	int code;
	char department[MAX];
	struct data_calend birth_date;
	struct data_calend empl_date;
};

void readEmplData(struct personal_data *);
void displayData(struct personal_data *);
void checkEngineer(struct personal_data *, int);

void main()
{
	struct personal_data employees[MAX];
	int i, n;

	printf("\nPlease enter the number of employees you want to enter(max. 20): ");
	scanf("%d", &n);

	if (n > 20) {
		printf("\nToo many employees");
		_getch();
		return;
	}

	
	for (i = 0; i < n; i++)
		readEmplData(employees + i);
	checkEngineer(employees, n);


	_getch();
}

/* function to check if the occupation of an employee is an engineer */
void checkEngineer(struct personal_data *pd, int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (_stricmp((pd + i)->occupation, "Engineer") == 0)
			displayData(pd + i);

}


/* we read the employee data from the keyboard */
void readEmplData(struct personal_data *pd)
{
	printf("\nPlease enter the name: ");
	scanf("%s", pd->name);
	printf("\nPlease enter the surname: ");
	scanf("%s", pd->surname);
	printf("\nPlease enter the occupation: ");
	scanf("%s", pd->occupation);
	printf("\nPlease enter the code: ");
	scanf("%d", &pd->code);
	printf("\nPlease enter the department: ");
	scanf("%s", pd->department);
	printf("\nPlease enter the birth date: ");
	printf("\nDay: ");
	scanf("%d", &(pd->birth_date).day);
	printf("\nMonth: ");
	scanf("%d", &(pd->birth_date).month);
	printf("\nYear: ");
	scanf("%d", &(pd->birth_date).year);
	printf("\nPlease enter the employment data: ");
	printf("\nDay: ");
	scanf("%d", &(pd->empl_date).day);
	printf("\nMonth: ");
	scanf("%d", &(pd->empl_date).month);
	printf("\nYear: ");
	scanf("%d", &(pd->empl_date).year);
}

void displayData(struct personal_data *pd)
{
	printf("\n---------Employee---------");
	printf("\n%s", pd->name);
	printf("  %s", pd->surname);
	printf("\n%s", pd->occupation);
	printf("\n%d", pd->code);
	printf("\n%s", pd->department);
	printf("\nBirth date: %d / %d / %d", (pd->birth_date).day, (pd->birth_date).month, (pd->birth_date).year);
	printf("\nEmployment date: %d / %d / %d", (pd->empl_date).day, (pd->empl_date).month, (pd->empl_date).year);
}