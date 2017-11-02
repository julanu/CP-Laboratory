//ex 7 lab 4

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

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
	printf("The value is: %.2f", compute_real(a, b, c));


	printf("\nPlease enter the 3 integer numbers: ");
	x = input_int();
	y = input_int();
	z = input_int();
	printf("The value is: %.2f", compute_int(x, y, z));

	_getch();

}

float input_real()
{
	float x;

	scanf("%f", &x);

	return x;
}

int input_int()
{
	int x;

	scanf("%d", &x);

	return x;
}

float compute_real(float a, float b, float c)
{
	float sum = 0.0;

	sum = 1 / a + 1 / b + 1 / c;

	return sum;
}

double compute_int(int x, int y, int z)
{
	double sum = 0.0;

	sum = 1. / x + 1. / y + 1. / z;

	return sum;
}