/*
	Author: Jula Marius
	Date: 25/11/2017
	Description: Check if a number is a perfect square.
	Lab 7 Probl 2
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

int isPerfectSquare(int);

void main()
{
	int n;
	printf("Please enter the num: ");
	scanf("%d", &n);

	if (isPerfectSquare(n))
		printf("\nThe number is a perfect square.");
	else
		printf("\nThe number is NOT a perfect square.");

	_getch();
}

int isPerfectSquare(int n)
{
	int i;
	for (i = 1; i < n / 2; i++)
		if (n == i * i)
			return 1;
	
	return 0;
}