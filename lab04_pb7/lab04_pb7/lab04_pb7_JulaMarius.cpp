//ex 7 lab 4

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

float input();


void main()
{
	float a, b, c, sum;

	sum = 0.0;

	printf("\nPlease enter the 3 numbers: ");
	a = input();
	b = input(); 
	c = input();

	sum = 1. / a + 1. / b + 1. / c;

	printf("The value is: %.2f", sum);

	_getch();

}

float input()
{
	float x;
	scanf("%f", &x);
	return x;
}