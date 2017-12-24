/*
	Author: Jula Marius
	Date: 25/12/2017
	Description: ...
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <stdlib.h>

void readMatrix(int *, int, int);
void displayMatrix(int *, int, int);
void sumMatrices(int *, int *, int *, int, int);

void main()
{
	int m, n, *tab = NULL, *tab2 = NULL, *tabSum = NULL;
	printf("Enter the dimension of the matrix: ");
	scanf("%d%d", &n, &m);

	tab = (int *)malloc(m * n * sizeof(int)); /* we alloc the memory zone */
	tab2 = (int *)malloc(m * n * sizeof(int));
	tabSum = (int *)malloc(m * n * sizeof(int));
	if ((tab == NULL) || (tab2 == NULL)) /* we check if the allocation is successful */
	{ 
		printf("Unsuccessful allocation\n"); 
		_getch();
		exit(1);
	}
	else
	{
		printf("Enter the first matrix: \n");
		readMatrix(tab, n, m);
		printf("Enter the second matrix: \n");
		readMatrix(tab2, n, m);
		printf("First matrix: \n");
		displayMatrix(tab, n, m);
		printf("Second matrix: \n");
		displayMatrix(tab2, n, m);
		sumMatrices(tabSum, tab, tab2, n, m);
		printf("The resulting matrix is: \n");
		displayMatrix(tabSum, n, m);
		if (tab && tab2 && tabSum)
		{
			free(tab);
			free(tab2);
			free(tabSum);
		}
		_getch();
	}
}
/* function to read a matrix using pointers */
void readMatrix(int *tab, int n, int m)
{
	int i, j, *p;
	p = &tab[0];
	for(i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			printf("\ntab[%d][%d]: ", i, j);
			scanf("%d", (tab + i*n + j));
		}
}

/* function to display a matrix using pointers*/
void displayMatrix(int *tab, int n, int m)
{
	int i, j, *p;
	p = &tab[0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%d", *(tab + i*n + j));
		printf("\n");
	}
}

void sumMatrices(int *tabSum, int *tab, int *tab2, int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			*tabSum = *(tab + i*m + j) + *(tab2 + i*m + j);
}