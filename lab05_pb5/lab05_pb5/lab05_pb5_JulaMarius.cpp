/*
	Author: Jula Marius
	Description: Merge the 1-st and 2-nd problem
	Date: 6/11/2017	
	Laboratory 5 Problem 5
*/

#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <conio.h>

/* prototypes for input and output*/
void final_output(float, float);
float input();

/* prototypes for the functions that compute the series 
   and parallel equivalent resistance and total capacitance
 */
float res_series(float, float);
float res_parallel(float, float);
float cap_series(float, float);
float cap_parallel(float, float);


void main()
{
	float a, b;

	printf("\tPlease enter the values one at a time \n");

	a = input();
	b = input();

	final_output(a, b);

	_getch();
}



void final_output(float a, float b)
{
	
	printf("\n---- Total Capacitance ---- \n");
	printf("Series: %.2f \t Parallel: %2.f \n", cap_series(a, b), cap_parallel(a, b));

	printf("\n---- Equivalent Resistance ---- \n");
	printf("Series: %.2f \t Parallel: %.2f \n", res_series(a, b), res_parallel(a, b));
}


/* function to compute the input */
float input()
{
	float x;

	printf("\n Please enter the value: ");
	scanf("%f", &x);

	return x;

}


/* --------Computing the equivalent resistance-----------*/

/* function to compute the series equivalent resistance */
float res_series(float r1, float r2)
{
	float re;   /* equivalent resistance */

	re = r1 + r2;

	return re;
}

/* function to compute the parallel equivalent resistance */
float res_parallel(float r1, float r2)
{
	float re; /* equivalent resistance*/

	re = (r1 * r2) / (r1 + r2);

	return re;
}


/* --------Computing the total capacitance---------------*/

/* function to compute the series total capacitance */
float cap_series(float c1, float c2)
{
	float tc; /* total capacitance */

	tc = (c1 * c2) / (c1 + c2);

	return tc;
}

/* function to compute the parallel total capacitance */
float cap_parallel(float c1, float c2)
{
	float tc;

	tc = c1 + c2;

	return tc;
}