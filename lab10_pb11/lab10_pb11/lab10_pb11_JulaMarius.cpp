/*
	Author: Jula Marius
	Date: 29/12/17
	Description: Write a C/C++ program that defines a function for reading from the keyboard the
				integer type values that form a [n x n] matrix. Write a function that determines the
				number of negative elements that are located above the secondary diagonal. Display
				the result in the main function (don’t use global variables).
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define DIM 10

void readMat(int *, int);
int countNegElems(int *, int);

void main()
{
	int tab[DIM][DIM], *p, n;
	p = &tab[0][0];
	printf("\nPlease enter the dimension of the matrix: ");
	scanf("%d", &n);

	readMat(p, n);

	printf("\nThere are %d negative elements above the secondary diagonal", countNegElems(p, n));
	_getch();

}

/* function to read a matrix using pointers */
void readMat(int *tab, int n)
{
	int i, j, *p;
	p = tab;
	for(i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			printf("\ntab[%d][%d]: ", i, j);
			scanf("%d", (p + i*n + j));
		}
}

/* function to count the negative elements above the second diagonal using pointers */
int countNegElems(int *tab, int n)
{
	int i, j, count, *p;
	count = 0;
	p = tab;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i + j < n)
				if (*(p + i*n + j) < 0)
					count++;

	return count;
}