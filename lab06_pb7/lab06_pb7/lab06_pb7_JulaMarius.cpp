/*
	Author: Jula Marius
	Date: 18/11/2017
	Description: Read 2 float numbers, calculate and display the results obtained by applying
				(+, -, *, /) upon them. Cast the results into int values, whithout
				using any specific rounding functions. Display the minimum input value using the conditional operator.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/* prototypes */
float input();
void computeOperations(float, float);

void main()
{
	float a, b;
	
	a = input();
	b = input();
	printf("\n The results are : ");
	computeOperations(a, b);
	/* we output the minimum input value using the conditional operator */
	printf("\nThe minimum imput is %.2f", a < b ? a : b);

	_getch();
}

/*function to read the input from the keyboard*/
float input()
{
	float x;

	printf("\nPlease enter the value: ");
	scanf("%f", &x);

	return x;
}

/*
   we apply the main arithmetic operations then we cast the results
   into int values and display them using the appropriate specifier
 */
void computeOperations(float a, float b)
{
	int res;

	res = (int)(a * b);
	printf("\na * b = %d", res);

	res = (int)(a / b);
	printf("\na / b = %d", res);
	
	res = (int)(a + b);
	printf("\na + b = %d", res);

	res = (int)(a - b);
	printf("\na - b = %d", res);
}