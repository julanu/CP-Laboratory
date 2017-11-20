/*
	Author: Jula Marius
	Date: 21/11/2017
	Description: Write a program that determines all the divisors of a value introduced from the KBD.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/* prototypes */
void printDiv(int);


void main()
{
	int n;
	printf("\n Please enter the value: ");
	scanf("%d", &n);

	printDiv(n);

	_getch();
}

/* function to compute all the divisors of a number N
   given from the keyboard */
void printDiv(int n)
{
	int i;
	for (i = 1; i < n; i++)
		if (n % i == 0)
			printf("\n\t%d", i);
}