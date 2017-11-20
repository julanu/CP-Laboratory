/* Laboratory 4 Problem 7

Description: computing the sum 1/a + 1/b + 1/c

Author: Jula Marius

Date: 2/11/2017 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/*prototypes*/
int   input_int();
float input_real();
float compute_real(float, float, float);
double compute_int(int, int, int);

void main()
{
	float a, b, c;
	int x, y, z;

	printf("\nPlease enter the 3 real numbers: ");
	a = input_real();
	b = input_real(); 
	c = input_real();
	printf("The value is: %.2f", compute_real(a, b, c)); /* we output the result of the real numbers*/

	printf("\nPlease enter the 3 integer numbers: ");
	x = input_int();
	y = input_int();
	z = input_int();
	printf("The value is: %.2f", compute_int(x, y, z)); /* outputing the result of the integer numbers */

	_getch();
}
/*function to read the real values from the keyboard*/
float input_real()
{
	float x;
	scanf("%f", &x);
	return x;
}

/* function to read the integer numbers from the keyboard */
int input_int()
{
	int x;
	scanf("%d", &x);
	return x;
}

/* function to make the calculation using the real given numbers */
float compute_real(float a, float b, float c)
{
	float sum = 0.0; /* function to retain the result of the calculation */
	 
	sum = 1 / a + 1 / b + 1 / c;

	return sum;
}

/* function to make the calculation using the integer given values*/
double compute_int(int x, int y, int z)
{
	double sum = 0.0; /* we initialize a variabli in which we will store the result and return it*/

	sum = 1. / x + 1. / y + 1. / z;

	return sum;
}