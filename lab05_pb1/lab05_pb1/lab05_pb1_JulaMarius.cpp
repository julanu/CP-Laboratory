/*
	Laboratory 5 Problem 1
	Author: Jula Marius
	Date: 5/11/2017
	Description: Calculate the series and parallel equivalent resistance.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/* prototypes */

float input();
float series(float, float);
float parallel(float, float);



void main(void)
{
	float r1, r2;

	r1 = input();
	r2 = input();

	printf("\n Series: %10.3f", series(r1, r2));

	printf("\n Paralel: %10.3f", parallel(r1, r2));
	
	_getch();
}


/*function to get the input*/
float input()
{
	float r;

	printf("\nPlease enter the value: ");
	scanf("%f", &r);

	return r;
}

/* function to compute the series equivalent resistance */
float series(float r1, float r2)
{
	float re;   /* equivalent resistance */

	re = r1 + r2;

	return re;
}

/* function to compute the parallel equivalent resistance */
float parallel(float r1, float r2)
{
	float re; /* equivalent resistance*/

	re = (r1 * r2) / (r1 + r2);

	return re;
}