/*
	Author: Jula Marius
	Date: 15/11/2017
	Description: Read an integer value from the standard input. Write, in decimal format, the value of each byte of
				 the value.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

void toBase2(int);

void main()
{
	int val;
	printf("\nPlease enter the value: ");
	scanf("%d", &val);

	printf("The values will be: ");
	toBase2(val);

	_getch();
}

/* computing into base 2 so we can obtain the values */
void toBase2(int val)
{
	int byte;
	
	while (val != 0)
	{
		byte = val % 2; /* here we obtain the remainder*/
		val = (val >> 1); 
		printf(" %d", byte); /* outputing the value */
	}
}