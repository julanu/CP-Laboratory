// tema lab 4
//primul exercitiu

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

float arithmetic_average(float, float, float);
float input();

void main(void)
{
	float a, b, c;
	printf("\nPlease enter the 3 numbers: ");

	a = input();
	b = input();
	c = input();

	printf("\nAverage mean is = %f", arithmetic_average(a, b, c));

	_getch();
}

float input()
{
	float a;

	scanf("%f", &a);
	
	return a;
}


float arithmetic_average(float a, float b, float c)
{
	float ma;

	ma = (a + b + c) / 3;

	return ma;

}
