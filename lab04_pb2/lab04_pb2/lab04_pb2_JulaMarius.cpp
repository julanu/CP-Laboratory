/* Laboratory 4 Problem 2
Description: geometric average of 2 integer numbers
Author: Jula Marius
Date: 29/10/2017  */
#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <conio.h>
#include <cmath>

/*prototypes*/
float geometric_av(int, int);
int input();

/*main function to call out the other functions*/
void main()
{
	int a, b;
	printf("Enter the two values: ");
	a = input();
	b = input();

	printf("The geometric average is %.3f", geometric_av(a, b));

	_getch();
}


/*function to read the data from the keyboard*/
int input()
{
	int a;

	scanf("%d", &a);

	return a;
}

/*function to compute the geometric average of 2 integer numbers*/
float geometric_av(int a, int b)
{
	float g_av;

	g_av = sqrt(a * b); /*usign the square root function from the cmath library*/

	return g_av;

}