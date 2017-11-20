/*
	Author: Jula Marius
	Date: 21/11/2017
	Description: Write a program that determines the integer quotient of 2 integer numbers using a series of
	subtractions.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/* prototypes */
int input();
void substractNums(int, int);

void main()
{
	int a, b;
	a = input();
	b = input();

	substractNums(a, b);

	_getch();
}

/* function to read the input from the KBD */
int input()
{
	int var;
	printf("\nPlease enter a number: ");
	scanf("%d", &var);

	return var;
}

/* function to determine the quotient by continuosly substracting from the first number
   the second one until the first is smaller than the second, with every substraction the
   quotient increases by 1 */
void substractNums(int a, int b)
{
	int count;
	count = 0;

	while (a > b)
	{
		count += 1;
		a = a - b;
	}

	printf("\nThe integer quotient is equal to: %d", count);
}