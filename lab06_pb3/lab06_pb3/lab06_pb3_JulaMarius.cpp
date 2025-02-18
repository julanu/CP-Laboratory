/*
Author: Jula Marius
Date: 17/11/2017
Description: Program that reads an unsigned char value and displays the binary values resulting after
recursively applying the shift right and the % operators.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/* prototypes */
void toBase2(unsigned char);

void main()
{
	unsigned char val;

	printf("Please enter the value: ");
	scanf("%hhu", &val);

	printf("\nThe values of the bytes are: ");
	toBase2(val);

	_getch();
}

/* converting from base 10 to base 2 and displaying the bytes */
void toBase2(unsigned char val)
{
	int abc;

	if (val == 0)
		return;
	abc = val % 2;
	toBase2(val >> 1);
	printf("%d ", abc);

}