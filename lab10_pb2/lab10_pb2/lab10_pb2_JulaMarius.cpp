/*
	Author: Jula Marius
	Date: 29/12/17
	Description: Considering two integer and two float parameters from the command line, display the
s					um and the product of these parameters.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("\nYou didn't enter no arguments");
		_getch();
		exit(1);
	}
	else
	{
		int i;
		float sum;
		sum = 0;
		for (i = 1; i < argc; i++)
			sum += atof(argv[i]);

		printf("The sum is equal to: %.2f", sum);
		_getch();
	}
}