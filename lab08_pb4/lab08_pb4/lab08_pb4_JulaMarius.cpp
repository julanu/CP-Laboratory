/*
	Author: Jula Marius
	Date: 24/11/2017
	Description:  Read a password and display the number
                  of trials the user entered wrong passwords until he entered the correct one.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define PASS "sevenSamurai"
#define DIM 25


void main()
{
	char pass2[DIM];
	int count;

	count = 0;

	do
	{
		printf("\nPlease enter the password: ");
		gets_s(pass2);
		count++;
		if (strcmp(pass2, PASS) == 1)
		{
			printf("The password has been entered % times", count);
			_getch();
		}
		else
			printf("Please enter again the password");

	} while (strcmp(pass2, PASS) != 1);

	_getch();
}


