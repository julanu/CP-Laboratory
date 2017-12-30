/*
	Author: Jula Marius
	Date: 29/12/17
	Description: Write a C/C++ program that reads some character arrays from the command line and
				displays the resulting concatenated string.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define DIM 255

void main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("\nPlease enter some arguments");
		_getch();
	}
	else
	{
		char strToCat[DIM];
		int i;
		strcpy(strToCat, "");
		for (i = 1; i < argc; i++)
			strcat(strToCat, argv[i]);

		printf("\nThe concatened string is: %s", strToCat);
		_getch();
	}
}