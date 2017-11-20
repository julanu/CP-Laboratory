/*
	Author: Jula Marius
	Description:
	Date: 6/11/2017	
	Laboratory 5 Problem 7
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define PI 3.141593

/* prototypes */
int input();
void compute_area_length(int);

void main()
{
	int R;

	R = input();

	compute_area_length(R);

	_getch();
}


/* compute the area and the length and output the results */
void compute_area_length(int R)
{
	double area, length;

	length = 2 * PI *(float)R;

	area = PI * (float)R * R;

	printf("\n Area: %10.3f", area);

	printf("\n Length: %10.3f", length);
}

/* function to read the input */
int input()
{
	int x;

	printf("Please enter the value of the radius: ");
	scanf("%d", &x);

	return x;
}