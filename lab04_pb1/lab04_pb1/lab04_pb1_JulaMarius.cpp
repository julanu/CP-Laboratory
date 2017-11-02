/* Laboratory 4 Problem 1
Author: Jula Marius 
Date: 29/10/2017 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/*prototypes*/
float arithmetic_average(float, float, float);
float input();

/*main function*/
void main(void)
{
	float a, b, c;
	printf("\nPlease enter the 3 numbers: ");

	a = input();
	b = input(); /*reading the input from the keyboard*/
	c = input();

	printf("\nAverage mean is = %.3f", arithmetic_average(a, b, c));

	_getch();
}

/* function to read the input*/
float input()
{
	float a;

	scanf("%f", &a);

	return a;
}

/*function to compute the average value of 3 non-integer numbers*/
float arithmetic_average(float a, float b, float c)
{
	float ma;

	ma = (a + b + c) / 3;

	return ma;

}