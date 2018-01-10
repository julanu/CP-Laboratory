/*
	Author: Jula Marius
	Date: 2/1/2017
	Description: Write a C/C++ application that allocates dynamically memory for the data of n
				students (surname, name, gendre), reading from the keyboard all the required info,	
				the program displays the number of female students and frees up the allocated
				memory.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct student {
	char name[30];
	char surname[30];
	char gender[15];
};

void readStudData(struct student *);
int checkGender(struct student *, int);

void main()
{
	struct student *x;
	int i, n;

	printf("\nPlease enter the number of students you want to introduce: ");
	scanf("%d", &n);

	if (!(x = new struct student[n]))
	{
		printf("\nUnsuccessful allocation");
		_getch();
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("\n-----Please enter a new student: ");
			readStudData(x + i);
		}
		int nr;
		nr = checkGender(x + i, n);
		printf("\nThere is a number of %d female students", nr);

		if (x)
			free(x);

		_getch();
	}
}

int checkGender(struct student *p, int n)
{
	int count, i;
	count = 0;
	for (i = 0; i < n; i++) 
		if (_stricmp((p + i)->gender, "female") == 0)
			count++;

	return count;
}


void readStudData(struct student *p)
{
	printf("\nPlease enter the name: ");
	scanf("%s", p->name);
	printf("\nPlease enter the surname: ");
	scanf("%s", p->surname);
	printf("\nPlease enter the gender: ");
	scanf("%s", p->gender);
}