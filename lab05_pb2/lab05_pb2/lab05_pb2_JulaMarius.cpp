/* 
	Author: Jula Marius
	Date: 5/11/2017
	Description:  Calculate the series and parallel equivalent capacity.
	Laboratory 5 Problem 2
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/* prototypes */
float input();
float series(float, float);
float parallel(float, float);

void main()
{
	float c1, c2;

	c1 = input();
	c2 = input();

	printf("\nSeries total capacitance: %-5.4f", series(c1, c2));

	printf("\nParallel total capacitance: %-5.4f", parallel(c1, c2));

	_getch();
}


/* function to read the input */
float input()
{
	float c;

	printf("\nEnter the value: ");
	scanf("%f", &c);

	return c;
}

/* function to compute the series total capacitance */
float series(float c1, float c2)
{
	float tc; /* total capacitance */

	tc = (c1 * c2) / (c1 + c2);

	return tc;
}

/* function to compute the parallel total capacitance */
float parallel(float c1, float c2)
{
	float tc;

	tc = c1 + c2;

	return tc;
}