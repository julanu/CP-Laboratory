/*
	Author: Jula Marius
	Date: 17/11/2017
	Description:   Read from the keyboard an integer number n. Read a series of real numbers, until their sum is
                   greater than n. Display the sum with a 2 digits precision and how many numbers were introduced.
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/* prototypes */
void compute(int);

void main()
{
	int n;

	printf("Please enter the value: ");
	scanf("%d", &n);

	compute(n);

	_getch();
}

void compute(int n)
{
	float sum, x;
	int count; 
	sum = 0.0; 
	count = 0;
	
	/* we will continue to read a real number and count when a numbered is entered
	   untill the sum is greater than the given N variable */
	do {
		printf("\nPlease enter a number: ");
		scanf("%f", &x);
		sum += x;
		count += 1;
	} while (n >= sum);

	printf("\n The sum is equal to: %.2f", sum);
	printf("\n %d number(s) have been introduced", count);
}
