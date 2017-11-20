/*
	Author: Jula Marius
	Date: 21/11/2017
	Description: Read N numbers and display those that can't be divided by 3.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define MAX 150

/* prototypes */
void readNums(int, int*);
void detNums(int, int*);

void main()
{
	int nums[MAX], n;
	printf("\nPlease enter number of numbers you want to read: ");
	scanf("%d", &n);

	readNums(n, nums);
	detNums(n, nums);

	_getch();
}

/* function to read N numbers from the keyboard and store them in an array */
void readNums(int n, int nums[])
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("\nPlease enter a number: ");
		scanf("%d", &nums[i]);
	}
}

/* function to determine all the numbers that can't be divided by 3
   by checking if the remainder when diving by 3 is different than 0*/
void detNums(int n, int nums[])
{
	int i; /* index */
	
	printf("\nThe numbers that can't be divided by 3 are: \n");

	for (i = 0; i < n; i++)
		if (nums[i] % 3 != 0)
			printf("%d ", nums[i]);

}