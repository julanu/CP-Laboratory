/*
	Author: Jula Marius
	Date: 24/11/2017
	Description:  Determine the mean value of the negative/positive elements from a one
				  dimensional array. 
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define MAX 100

/* prototypes */
void readElems(int *, int);
void meanVal(int *, int);

void main()
{
	int n, arr[MAX];
	printf("\nDati nr. de elem.: ");
	scanf("%d", &n);

	readElems(arr, n);
	
	meanVal(arr, n);

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

/* function to determine the mean value of the elements of the array */
void meanVal(int arr[], int n)
{
	float sum, sum_neg;
	int i;

	sum = sum_neg = 0;

	for (i = 0; i < n; i++)
		if (arr[i] > 0)
			sum += arr[i];
		else
			sum_neg += arr[i];

	printf("\nThe mean value of the pos. elems is: %.2f", sum / n);
	printf("\nThe mean value of the neg. elems is: %.2f", sum_neg / n);
}