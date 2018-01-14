/*
	Author: Jula Marius
	Date: 14/1/2017
	Description: Write an application that:
				-defines a structure called student, having fields name, surname, group, average mark ;
				- reads from the keyboard an integer value n;
				- for each student it reads from the keyboard (in a function) the personal data (all fields),
				-stores the information for all the n students and into a binary file, the filename being read from the
				keyboard;
				-reads back the file’s contents, displaying the data related to the students who have the average mark >=
				than a specific value given from the keyboard.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct student {
	char name[30];
	char surname[40];
	int group;
	float avgMark;
};

void dispStudData(struct student *);
void readStudData(struct student *);

void main()
{
	int n, i;
	struct student *p;
	float avgMarkMin;
	FILE *f;
	char fileName[30];

	printf("\nPlease enter the number of students: ");
	scanf("%d", &n);
	printf("\nPlease enter the minimum average mark: ");
	scanf("%f", &avgMarkMin);

	p = (student *)malloc(n * sizeof(student));

	if (!p)
	{
		printf("\nUnsuccessful allocation");
		_getch();
		exit(1);
	}
	else
	{
		printf("\nPlease enter the students: ");
		for (i = 0; i < n; i++)
			readStudData(p + i);

		printf("\nEnter  the  name  of  the  file:  ");
		scanf("%s", &fileName);

		if ((f = fopen(fileName, "w+b")) == NULL)
		{
			printf("\nError opening the file");
			_getch();
			return;
		}
		for (int i = 0; i < n; i++)
		{
			fwrite((p + i), sizeof(student), 1, f);
		}

		for (int i = 0; i < n; i++)
		{
			fread((p + i), sizeof(student), 1, f);
			if ((p + i)->avgMark > avgMarkMin)    //compares  the  given  number  with  the  average  marks
				dispStudData(p + i);
		}
		fclose(f);
		_getch();
	}
}


void readStudData(struct student *p)
{
	printf("\nEnter the students name: ");
	scanf("%s", p->name);
	printf("\nEnter the students surname: ");
	scanf("%s", p->surname);
	printf("\nPlease enter the group: ");
	scanf("%d", &p->group);
	printf("\nPlease enter the average mark: ");
	scanf("%f", &p->avgMark);
}

void dispStudData(struct student *p)
{
	printf("\nName: %s", p->name);
	printf("\nSurname: %s", p->surname);
	printf("\nGroup: %d", p->group);
	printf("\nAvg mark: %.2f", p->avgMark);
}