/*Author: Jula Marius
Date: 5/11/2017
Description: Determine the hypotenuse and the perimeter of the triangle.
Laboratory 5 Problem 3
*/

#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <conio.h>
#include <cmath>

int input();
float det_hypothenuse(float, float);
float det_triangle_per(float, float);


void main()
{
	int a, b;
	float aa, bb;

	a = input();
	b = input();

	aa = (float)a;
	bb = (float)b;

	printf("\n The hypothenuse is equal to: %.2f", det_hypothenuse(aa, bb));
	printf("\n The perimeter is equal to: %.2f", det_triangle_per(aa, bb));

	_getch();
}

int input()
{
	int x;

	printf("\n Enter the value ");
	scanf("%d", &x);

	return x;
}

float det_hypothenuse(int a, int b)
{
	float c;

	c = sqrt((float)(a * a + b * b));

	return c;
}

float det_triangle_per(int a, int b)
{
	float c, p;

	c = det_hypothenuse(a, b);

	p = a + b + c;

	return p;
}