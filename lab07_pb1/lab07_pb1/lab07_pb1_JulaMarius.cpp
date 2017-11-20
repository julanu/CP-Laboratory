/*
	Author: Jula Marius
	Date: 20/11/2017
	Description: Determine the area of the rectangle that has
	the sides equal to a and b and verify if the rectangle’s diagonal is equal to c.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <cmath>

/* prototypes */
int input();
void computeAreaDiagonal(int, int, int);

void main()
{
	int a, b, c;
	a = input();
	b = input();
	c = input();

	computeAreaDiagonal(a, b, c);

	_getch();
}

/* function to read the input from the keyboard */
int input()
{
	int x;

	printf("Please enter the value:");
	scanf("%d", &x);

	return x;
}

void computeAreaDiagonal(int a, int b, int c)
{
	float area, diagonal;
	/* using the formula to compute the area of the rectangle(W x L)*/
	area = (float)a * b;
	/* computing the diagonal of the rectangle using another simple formula*/
	diagonal = sqrt((float)a * a + (float)b * b);
	printf("\nThe area is equal to: %.2f", area);
	
	/* checking if the diagonal is equal with the 3-rd variable*/
	if (c == diagonal)
		printf("\nThe diagonal is equal with C");
	else
		printf("\nThe diagonal is NOT equal with C");
}