/*
	Author: Jula Marius
	Date: 21/11/2017 
	Description: Calculate the product of 2 integer numbers using additions.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/* prototypes */
int input();
void sumNums(int, int);

void main()
{
	int a, b;
	a = input();
	b = input();

	printf("\n\tThe product of %d * %d is equal to: ", a, b); sumNums(a, b);

	_getch();
}

/* function to read the input*/
int input()
{
	int val;
	
	printf("\n\t Please enter a number: ");
	scanf("%d", &val);

	return val;
}

/* function to compute the product of 2 integer numbers using additions
   by adding X times the variable Y or Y times the variable X */
void sumNums(int a, int b)
{
	int prod;
	prod = 0;
	while (a > 0)
	{
		prod += b;
		a -= 1;
	}
	printf("%d", prod);
}