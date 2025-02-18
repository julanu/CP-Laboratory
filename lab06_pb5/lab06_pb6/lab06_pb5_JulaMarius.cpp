/*
	Author: Jula Marius
	Date: 17/11/2017
	Description: How many 0 bytes are in a given number.
	Laboratory 6 Problem 6
*/
#define _CRT_SECURE_NO_WARNINGS

/* prototypes */
#include <stdio.h>
#include <conio.h>

int count(int);
int input();

void main()
{
	int val;

	val = input();

	printf("\nThe number %d has %d byte(s) that are equal to 0", val, count(val));

	_getch();
}

/* function to read the input */
int input()
{
	int val;

	printf("Please enter the value: ");
	scanf("%d", &val);

	return val;
}

/* function to count the 0 bytes of a number */
int count(int n)
{
	int cnt;
	cnt = 0;
	if (n == 0) /* if the numbers its 0 we can return 1 and end the counting*/
		return 1;
	else
	{
		while (n != 0) /* otherwise we start dividing by 2 to 
					   find the bytes until our number becomes 0*/
		{
			if (n % 2 == 0)
				cnt++;
			n = n / 2;
		}
		return cnt; /* returning the number of bytes */
	}

}
