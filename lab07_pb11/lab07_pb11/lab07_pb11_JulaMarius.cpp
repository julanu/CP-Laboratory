/*
Author: Jula Marius
Date: 21/11/2017
Description: Read n numbers and display the odd ones and store them in a array.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define MAX 200

void readNums(int, int*);
void detOddNums(int, int*);

void main(void)
{
	int nums[MAX], n;

	printf("Please enter how many numbers you want to read: ");
	scanf("%d", &n);

	readNums(n, nums);
	detOddNums(n, nums);

	_getch();
}

/* function to determine all the odd nums from the array and display them */
void detOddNums(int n, int nums[])
{
	int i;

	printf("\nThe odd numbers are: \n");
	for (i = 0; i < n; i++)
		if (nums[i] % 2 == 1)
			printf("\n\t%d", nums[i]);
}

/* function to read N numbers and to store them in a array */
void readNums(int n, int nums[])
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("\nPlease enter a number: ");
		scanf("%d", &nums[i]);
	}
}