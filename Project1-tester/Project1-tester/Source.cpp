/*
	Author : Jula Marius
	Date : 29.12.2017
	Description:  Write a C/C++ application that allocates memory for n integer numbers that will be read from the keyboard.
				Write a function that determines the square root of each number and stores the result into another dynamically allocated array.
				Display the initial and computed values. Free the allocated memory.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <math.h>

int* storeElems(int *tab, int n);

int main() {
	int *tab, *tab2, n, i;

	printf("\n n = ");
	scanf("%d", &n);

	if (tab = (int*)malloc(n * sizeof(int)))
	{
		printf("\n Enter %d integer numbers: ", n);
		for (i = 0; i < n; i++)
		{
			printf("\nnumber %d: ", i + 1);
			scanf("%d", tab + i);
		}
	}
	else 
	{
		printf("\n Unsuccessful allocation.");
		return NULL;
	}

	printf("\n The initial values are: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(tab + i));
	}

	tab2 = storeElems(tab, n);
	printf("\nThe computed values are: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(tab2 + i));
	}

	free(tab);
	free(tab2);

	_getch();
}
/* function that stores the result into another dynamically allocated array.*/
int* storeElems(int *tab, int n) {
	int i, *tab2;

	if (tab2 = (int*)malloc(n * sizeof(int)))
		for (i = 0; i < n; i++)
			*(tab2 + i) = sqrt((double)*(tab + i));
	else 
	{
		printf("\n Unsuccessful allocation.");
		return NULL;
	}

	return tab2;
}