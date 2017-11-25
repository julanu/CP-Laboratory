/*
	Author: Jula Marius
	Date: 25/11/2017
	Description: Compute a^n, where a and n are read from the keyboard("a"-hard coded)
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

int computePower(int, int);

void main()
{
	int n, a;

	printf("\nPlease enter the value of 'a':");
	scanf("%d", &a);

	printf("\nPlease enter the value of 'n':");
	scanf("%d", &n);

	printf("\n a^n = %d", computePower(a, n));

	_getch();
}

/* function to compute a at the power of n using a simple for loop*/
int computePower(int a, int n)
{
	int i, res;
	res = 1;

	for (i = 0; i < n; i++)
		res *= a;

	return res;
}