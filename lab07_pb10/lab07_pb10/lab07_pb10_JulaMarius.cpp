/*
	Author: Jula Marius
	Date: 21/11/2017
	Description: Write a program that determines the number of figures that compose an integer number read from
	the keyboard.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/* prototypes */
int detNum(int);

void main()
{
	int n;
	printf("\nPlease enter the value: "); scanf("%d", &n);
	
	printf("The number of figures is equal to: %d", detNum(n));

	_getch();
}

/* function the determine the number of figures that compose a number
   we continuosly decompese and count every figure until the number is
   equal to 0 */
int detNum(int n)
{
	int count;
	count = 0;
	while (n != 0)
	{
		count += 1;
		n /= 10;
	}

	return count;
}