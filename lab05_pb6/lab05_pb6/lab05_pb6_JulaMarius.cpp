/*
	Author: Jula Marius
	Description:  Display the name of each student, and their marks with 2 digits precision.
	Date: 6/11/2017
	Laboratory 5 Problem 6
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>


float mark_input();
void input_name(char *);
void output_final(char *, float);

void main()
{
	
	char name1[20], name2[20];
	float mark1, mark2;

	input_name(name1);
	mark1 = mark_input();
	
	input_name(name2);
	mark2 = mark_input();

	output_final(name1, mark1);
	output_final(name2, mark2);
	
	_getch();
}

void output_final(char name1[], float mark1)
{
	printf("\n%20s %.2f", name1, mark1); /* right aligned*/

	printf("\n%-20s %-.2f", name1, mark1); /* left aligned*/

}

void input_name(char name[])
{

	printf("\nPlease enter the name of the student: ");
	scanf("%s", name);

}

float mark_input()
{
	float mark;

	printf("\n Please enter the mark: ");
	scanf("%f", &mark);

	return mark;
}
