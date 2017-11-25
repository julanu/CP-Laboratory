/*
	Author: Jula Marius
	Date: 24/11/2017
	Description: Read an array then display its elements, ordered
                 increasingly.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define DIM 10

/* prototypes */
void readElems(int *);
void displaySortArray(int *);

void main()
{
	int arr[DIM];

	readElems(arr);

	displaySortArray(arr);

	_getch();
}

void readElems(int arr[])
{
	int i;
	printf("\nGive the elements of the array\n");
	for (i = 0; i < DIM; i++)
	{
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
}

/* we sort the array increasingly using a simple sorthing algorithm with the
   efficiency of O(n^2) that gets the job done, instead we could have used a
   logarithmical sorthing algorithm such as Merge Sort*/
void displaySortArray(int arr[])
{
	int i, j;

	for(i = 0; i < DIM; i++)
		for(j = 0; j < DIM; j++)
			if (arr[i] < arr[j])
			{
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	
	for (i = 0; i < DIM; i++)
		printf("\t %d", arr[i]);

}