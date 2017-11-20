/*
	Author: Jula Marius
	Date: 21/11/2017
	Description: Read numbers until the <ESC> key is pressed, compute
	the mean of the odd and positive numbers and display it 
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define ESC 27

void process();

void main(void)
{
	/* all the processing will happen in the function*/
	process();

	_getch();
}

void process()
{
	char c;
	int x, sum, count;

	sum = count = 0;

	while (1)
	{
		c = getchar();
		if (c == ESC) return;

		printf("\n Enter number: ");
		scanf("%d", &x);
		if ((x > 0) && (x % 2 == 1))
		{
			sum += x;
			count += 1;
		}
	}
	printf("\nThe average values is equal to: %.2f", (float)sum / count);
}