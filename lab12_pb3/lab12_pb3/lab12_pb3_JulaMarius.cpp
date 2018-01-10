/*
	Author: Jula Marius
	Date: 2/1/17
	Description: Develop a C/C++ application considering an adequate data structure that will be
				returned by a function. In this way more values can be returned. Display the results,
				the initial values transferred to the function (doing whatever operation inside the
				function) using adequate messages.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct student {
	char name[30];
	float grade;
	int stud_group;
};

struct student foo(struct student *, int);
void readData(struct student *);

void main()
{
	struct student *studs;
	int n, i;

	printf("\nPlease enter to how many students you want to increase their grade: ");
	scanf("%d", &n);

	for (i = 0; i < n;i++)
		readData(studs + i);

	struct student *studsN = foo(studs, n);

	for(i = 0; i < n; i++)
		printf("\n%s\t%.2f", (studsN + i)->name, (studsN + i)->grade);

		_getch();
}

void readData(struct student *p)
{
	printf("\nPlease enter the name: ");
	scanf("%s", p->name);
	printf("\nPlease enter the grade they have at the moment: ");
	scanf("%f", &p->grade);
	printf("\nPlease enter the group: ");
	scanf("%d", &p->stud_group);
}

struct student foo(struct student *p, int n)
{
	struct student *studentNew;
	int i;
	for (i = 0; i < n; i++)
	{
		(studentNew + i)->grade = (p + i)->grade + 1;
	}

	return *studentNew;
}