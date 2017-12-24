/*
	Author: Jula Marius
	Date: 18/12/2017
	Description: Develop a C/C++ application considering an adequate data structure named student
				having the fields: name, surname, country, group and birth_year. Count all the nonRomanian
				students from the group (MAX students in the group). The effective fields
				will be introduced from the keyboard generating an array of structures. A name AAA
				(upper or lower case) will finish the introduction process.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX 3

 struct student {
	char name[50];
	char surname[50];
	char country[50];
	int group;
	int birth_year;
};

void dispStudData(struct student *, int);
void readStudData(struct student *);
int detForeignStuds(struct student *);

void main()
{
	student group[MAX];
	struct student *ps;
	int nr, i;

	ps = group;
	nr = 0;

	/* reading until the input is "aaa"(meaning to stop the algorithm) */
	for (i = 0; i < MAX; i++)
	{
		
		readStudData(ps + i);
		if ((ps->name) == "aaa")
			break;
	}


	nr = detForeignStuds(ps);
	printf("\nThere are %d foreign students", nr);
	_getch();
}

/* checking for foreign students */
int detForeignStuds(struct student *ps)
{
	int i, count;
	count = 0;
	for (i = 0; i < MAX; i++)
		if (strcmp(ps->country,"Romania") != 0)
		{
			count++;
			dispStudData((ps + i), i+1);
		}

	return count;
}

/* reading the user data */
void readStudData(struct student *ps)
{
	fflush(stdin); /* user for safety as we are reading arrays of characters */
		printf("\nPlease enter the name: ");
		scanf("%s", ps->name);
		printf("\nPlease enter the surname: ");
		scanf("%s", ps->surname);
		printf("\nPlease enter the country: ");
		scanf("%s", ps->country);
		printf("\nEnter the group of the student: ");
		scanf("%d", &ps->group);
		printf("\nPlease enter the birth year: ");
		scanf("%d", &ps->birth_year);
}

/* displaying the user data*/
void dispStudData(struct student *ps, int index)
{
	printf("\nStudent %d", index);
	printf("\n\t %s", ps->name);
	printf("\n\t %s", ps->surname);
	printf("\n\t %s", ps->country);
	printf("\n\t %d", ps->group);
	printf("\n\t %d", ps->birth_year);
}