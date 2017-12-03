/*
	Author: Jula Marius
	Date: 3/12/2017
	Description: Read from the keyboard the elements of an m x n integer matrix.
    If the matrix is square, display the elements from the secondary diagonal. If not, print the sum of all
    the elements from a certain column, c.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define ROWS 25
#define COLS 25

void readMatrix(int [ROWS][COLS], int, int);
int sumColumn(int [ROWS][COLS], int, int);
void secondDiag(int [ROWS][COLS], int, int);

void main(void)
{
	int tab[ROWS][COLS], n, m,c;

	printf("\nPlease enter the dimension of the matrix: ");
	scanf("%d%d", &n, &m);

	readMatrix(tab, n, m);

	if (n != m)
	{
		printf("\nPlease enter the column: ");
		scanf("%d", &c);
		printf("\nThe sum of the elems of the column %d is %d", c, sumColumn(tab, n, c));
	}
	else
		secondDiag(tab, n, m);

	_getch();
}

/* function to read an NxM matrix*/
void readMatrix(int tab[][COLS], int n, int m)
{
	int i, j;
	printf("\nPlease enter the elements of the matrix:\n");
	for(i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			printf("tab[%d][%d]: ", i, j);
			scanf("%d", &tab[i][j]);
		}
}

/* function to sum all the elements from a column C*/
int sumColumn(int tab[][COLS], int n, int c)
{
	int i, sum;
	sum = 0;

	for (i = 0; i < n; i++)
		sum += tab[i][c];

	return sum;
}

void secondDiag(int tab[][COLS], int n, int m)
{
	int i, j;
	printf("\nThe elements from the second diagonal are: \n");
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			printf("%d ", tab[i][n - 1 - i]);
}
