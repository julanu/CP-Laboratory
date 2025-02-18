/*
	Author: Jula Marius
	Date: 5/11/2017
	Description: Solve the equation ax + b = 0 and display the result
	Laboratory 5 Problem 4
*/

#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <conio.h>

/* prototypes */
int input();
float det_solution(int, int);


void main()
{
	int a, b;

	a = input();
	b = input();

	/*checking if the input is correct*/
	if(a == 0)
	{
		printf("\nPlease enter non-zero values: ");
		a = input();
	}

	
	/* displaying the result*/
	printf("\n The solution of the equation is: %.2f", det_solution(a, b));

	_getch();
}

/*function to read the input */
int input()
{
	int a;

	printf("\n Give the coefficients: ");
	scanf("%d", &a);

	return a;
}

/* function to solve the equation*/
float det_solution(int a, int b)
{
	float x;

	/*if b == 0 we don;t need further computing and we can return 0*/
	if (b == 0)
		return 0;

	/* otherwise we calculate the solution*/
	x = (float)(-b) / a;

	return x;
}