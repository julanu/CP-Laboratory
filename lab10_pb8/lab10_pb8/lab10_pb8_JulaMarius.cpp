/*
	Author: Jula Marius
	Date: 29/12/17
	Description: Write a C/C++ program that inverts a string of characters read from the command
				line.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <conio.h>

void revStr(char *);

void main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Please enter some arguments");
		_getch();
	}
	else
	{
		revStr(argv[1]);
		_getch();
	}
}

void revStr(char *s)
{
	int  i, n;
	char *pc;
	pc = &s[0];
	n = strlen(s);  /*  length  of  the  array  of  characters  */
	for (i = 0; i < n / 2; i++)
	{
		char  aux;
		aux = *(pc + i);
		*(pc + i) = *(pc + n - i - 1);
		*(pc + n - i - 1) = aux;
	}
	printf("\nThe  reversed  string  is:  %s", pc);

}