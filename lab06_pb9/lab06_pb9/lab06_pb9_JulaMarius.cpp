/*
	Author: Jula Marius
	Date: 17/11/2017
	Description: Compute the area of a circle or a rectangle.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define PI 3.1415

/* prototype */
int input();
void areaCircle(int);
void areaRectangle(int, int);

void main()
{
	int a, b;

	a = input();
	b = input();

	if (a == b)
		areaCircle(a);
	else
		areaRectangle(a, b);

	_getch();
}

/* function to read the input */
int input()
{
	int x;
	printf("Please enter the values: ");
	scanf("%d", &x);

	return x;
}

/* function to compute the area of a circle */
void areaCircle(int a)
{
	float area;
	
	area = PI * a * a;

	printf("Area of the circle is = %.2f", area);
}

/* function to compute the area of a rectangle */
void areaRectangle(int a, int b)
{
	int area;

	area = a * b;
	printf("The area of the rectangle is = %d", area);
}