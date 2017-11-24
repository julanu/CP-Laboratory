/*
	Author: Jula Marius
	Date: 24/11/2017
	Description: Find the smallest positive elem. of the array
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define MAX 20

/* prototypes */
int detElem(int *, int);
void readElems(int *, int);

void main()
{
	int n, arr[MAX];

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	readElems(arr, n);

	printf("\nThe num is: %d", detElem(arr, n));

	_getch();
}

/* function to read the elements of an array with a number of elems N*/
void readElems(int arr[], int n)
{
	int i;
	printf("\nPlease enter the elems of the array\n");
	for (i = 0; i < n; i++)
	{
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
}
/* function to determine the smallest positive number from an array
   we first search for the first positive element and then exit the for loop
   then we continue the search */
int detElem(int arr[], int n)
{
	int i, nr;

	nr = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			nr = arr[i];
		break;
	}

	for (i = 0; i < n; i++)
		if ((arr[i] < nr) && (arr[i] > 0))
			nr = arr[i];

	return nr;
}