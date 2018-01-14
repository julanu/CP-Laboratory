/*
	Author: Jula Marius
	Date: 13/1/2017
	Description: Write a C/C++ application that defines a union called group that contains various
				fields (int, log, double, char, etc.). Read from the keyboard the data associated to a
				group variable. Is it possible to display all the fields in the union using pointers or
				fully qualified field-names? Display the accessible information and the dimension of
				the union variable. Perform the same operations considering a regular structure
				instead of the union.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void readData(union group);

union group {
	int val;
	float real;
	char c;
}g;


void main()
{
	

	readData(g);

	printf("\nThe value of the int variable is %d", g.val);

	g.real = 2.3;
	printf("\nThe value of the float variable is: %.2f", g.real);

	printf("\nThe size of the union is: %d", sizeof(g));
	_getch();
}


void readData(group g)
{
	char c;
	int i;
	float f;
	printf("\nPlease enter the initial of what you want to read (i-int, f-float, c-char): ");
	scanf("%c", &c);
	if (c == 105)
	{
		printf("\nEnter a value: ");
		scanf("%d", &i);
	}
	if (c == 102)
	{
		printf("\nEnter a value: ");
		scanf("%f", &f);
	}
	if (c == 99) {
		printf("\nEnter a value: ");
		scanf("%c", &c);
	}
}