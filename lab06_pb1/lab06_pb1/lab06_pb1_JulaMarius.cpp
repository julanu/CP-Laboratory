/*
	Author: Jula Marius
	Date: 11/10/2017
	Description: compute the value of a 3rd degree polynom in a certain point X
	Laboratory 6 Problem 1
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/* prototypes */
float compute(float a, float b, float c, float d, float x);
float input_coeff();
float input_x();
float pow_fct(float, float);


void main()
{
	float a, b, c, d, x;

	a = input_coeff();
	b = input_coeff();
	c = input_coeff();
	d = input_coeff();
	x = input_x();

	printf("The result is: %.2f", compute(a, b, c, d, x));

	_getch();
}


/* function to read the coefficients of x*/
float input_coeff()
{
	float x;
	printf("Please enter the coefficient: ");
	scanf("%f", &x);

	return x;
}


/* power function implemented more primitively and brutal*/
float pow_fct(float val, float exp)
{
	float res;
	int i;
	
	res = val;
	if (exp == 0)
		return 1;
	else
	for (i = 0; i < exp; i++) 
		res = res * val;

	return res;
		
}

/* function to read the input */
float input_x()
{
	float x;
	printf("Please enter the value of X: ");
	scanf("%f", &x);

	return x;
}

/* function to compute the result */
float compute(float a, float b, float c, float d, float x)
{
	float res;
	
	res = a * pow_fct(x, 3) + b * pow_fct(x, 2) + c * x + d;

	return res;
}