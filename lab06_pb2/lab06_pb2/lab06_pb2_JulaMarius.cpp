/*
Author: Jula Marius
Date: 11/10/2017
Description: Compute the triangle's area
*/


#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <conio.h>
#include <cmath>

double input();
double computeArea(double, double, double);

void main()
{
	double a, b, c;

	a = input();
	b = input();
	c = input();

	printf("Area = %.3lf", computeArea(a, b, c));

	_getch();
}


double computeArea(double a, double b, double c)
{
	double sp, area;

	/* compute the semiperimeter*/
	sp = (a + b + c) / 2.0;

	/* computer the area using the formula*/
	area = sqrt(sp*(sp - a) * (sp - b) * (sp - c));

	return area;

}

/* function to read the input */
double input()
{
	double x;

	printf("Please enter the value:");
	scanf("%lf", &x);

	return x;
}
