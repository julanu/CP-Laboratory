/* Laboratory 4 Problem 5

Description: computing the weighted sum

Author: Jula Marius

Date: 2/11/2017 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/* prototypes*/
int input();
float compute_sum(int, int, int, float, float, float);

/*main function*/
void main()
{
	int a, b, c;   //the 3 numbers with which we will compute the weighted sum
	float p1, p2, p3;
	p1 = 0.3f; 
	p2 = 0.5f;  //the weights of the 3 integer numbers
	p3 = 0.2f;

	printf("\nPlease enter the 3 numbers: ");
	a = input();
	b = input(); // taking the input from the keyboard
	c = input();

	printf("The weighted sum is: %.3f", compute_sum(a, b, c, p1, p2, p3));

	_getch();
}

/*function to compute the weighted sum of 3 nums using the weights */
float compute_sum(int a, int b, int c, float p1, float p2, float p3)
{
	float sum;
	sum = 0.0;

	sum = a * p1 + b * p2 + c * p3;

	return sum;
}

/* function to read the input from the keyboard*/
int input()
{
	int a;

	scanf("%d", &a);

	return a;
}