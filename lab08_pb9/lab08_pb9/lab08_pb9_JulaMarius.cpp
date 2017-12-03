/*
	Author: Jula Marius
	Date: 3/12/2017
	Description: Write a program that reads from the keyboard n integer values into a one-dimensional array. Display
				the number of negative odd elements and their values
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define DIM 100

void readArr(int *, int n);
void negNums(int *, int n);

void main(void)
{
	int arr[DIM], n;
	printf("\nPlease enter the number of elements: ");
	scanf("%d", &n);

	readArr(arr, n);
	negNums(arr, n);

	_getch();
}

/* function to read N elements and store them into an array */
void readArr(int arr[], int n)
{
	int i;
	printf("\nPlease enter the elements of the array: ");
	for (i = 0; i < n; i++)
	{
		printf("\narr[%d]=", i);
		scanf("%d", &arr[i]);
	}
}

/* function to detect, count and display how many negative numbers are in the array*/
void negNums(int arr[], int n)
{
	int i, count;
	count = 0;
	printf("\nThe negative elements from the array are: ");
	for(i = 0; i < n; i++)
		if (arr[i] < 0)
		{
			count++;
			printf("%d ", arr[i]);
		}
	printf("\n There are %d negative nums in the array", count);
}