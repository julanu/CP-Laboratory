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

/* after reading the password(the string of characters) we use 
   the strcmp function which checks if two strings are equal, 
   if so the function will return the value 0 */
void main()
{
	char pass2[DIM];
	int count;

	count = 0;

	do
	{
		printf("\nPlease enter the password: ");
		gets_s(pass2); /* reading the password */
		count++;
		if (strcmp(pass2, PASS) == 0)
		{	/* we display the password count - 1 times because we 
			count also the time we enterred correctly the password*/
			printf("The password has been entered %d time(s)", count - 1);
			_getch(); 
		}
		else
			printf("\nPlease enter the password correctly");

	} while (strcmp(pass2, PASS) != 0);

	_getch();
}


