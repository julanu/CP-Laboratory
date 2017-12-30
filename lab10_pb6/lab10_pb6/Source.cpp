/*
	Author: Jula Marius
	Date: 29/12/2017
	Description: Write a C/C++ application that defines an array of pointers to character strings and
				initialize them with different messages. Display the messages.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define DIM 4

void main()
{
	char *str[DIM];
	int i;

	str[0] = "first";
	str[1] = "second";
	str[2] = "third";
	str[3] = "last";
	printf("\nThe messages are: \n");
	for (i = 0; i < DIM; i++)
		printf("\t%s", str[i]);

	_getch();
}