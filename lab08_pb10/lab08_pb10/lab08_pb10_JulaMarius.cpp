/*
	Author: Jula Marius
	Date: 3/12/2017
	Description:Write a program that reads the integer elements of a one dimensional array. Implement a function
that builds another array containing the remainders obtained by dividing the values in the initial
array to the number of the positive elements
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define DIM 100

void readArr(int *, int n);
void remaindersArr(int *, int *, int);

void main()
{
	int arr[DIM], arrNew[DIM], n;
	printf("Give the number of elements: ");
	scanf("%d", &n);

	readArr(arr, n);

	remaindersArr(arr, arrNew, n);

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

/* function to count the number of positive elements of an array
  and store the remainders after the arithmetical in a secondary array
  */
void remaindersArr(int arr[], int arrNew[], int n)
{
	int  i, count;
	count = 0;

	for (i = 0; i < n; i++)
		if (arr[i] > 0)
			count++;
	for (i = 0; i < n; i++)
		arrNew[i] = arr[i] % count;
}