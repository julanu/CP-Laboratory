/*
	Author: Jula Marius
	Date: 22/11/2017
	Description: Calculate n! (n-factorial)
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

unsigned long detFact(int);

void main()
{
	int n;
	printf("\tPlease enter the value: ");
	scanf("%d", &n);

	printf("\tThe res is: %lu", detFact(n));

	_getch();
}

unsigned long detFact(int n)
{
	int i;
	unsigned long res;
	res = 1;

	for (i = 1; i <= n; i++)
		res *= i;

	return res;
}