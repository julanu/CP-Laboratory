/*
	Author: Jula Marius
	Date: 29/12/17
	Description:  Read 2 matrices. Write a function that receives as parameters the pointers to the matrices and
				returns the pointer to the sum matrix. The result is to be displayed in function main.
				Display the elements from the second diagonal of the sum matrix using the returned pointer
pointer
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define ROWS 25
#define COLS 25

void displayMat(int *, int, int);
void dispSecDiag(int *, int, int);
int *sumMatrices(int *, int *, int *, int, int);
void readMatrix(int *, int, int);

void main()
{ 
	int tab1[ROWS][COLS], tab2[ROWS][COLS], tabSum[ROWS][COLS], n, m, *p1, *p2, *p3, *pm;
	printf("\nPlease enter the dimensions of the matrix: ");
	scanf("%d%d", &n, &m);
	p1 = &tab1[0][0];
	p2 = &tab2[0][0];
	p3 = &tabSum[0][0];
	readMatrix(p1,n,m);
	readMatrix(p2,n,m);

	pm = sumMatrices(p1, p2, p3, n, m);
	printf("\n The sum matrix resulted: \n");
	displayMat(pm,n,m);
	printf("\nThe elements of the second diagonal: ");
	dispSecDiag(pm, n, m);

	_getch();
}

/* function to display the second diagonal */
void dispSecDiag(int *tab, int n, int m)
{
	int *p, i;
	p = tab;
	for (i = 0; i < n; i++)
		printf(" %d", *(p + i* n + (n - 1 - i)));
}

/* function to display a matrix also using pointers*/
void displayMat(int *tab, int n, int m)
{
	int i, j, *p;
	p = tab;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf(" %d", *(p + i*n + j));
		printf("\n");
	}
}
/* function to read a matrix using pointers*/
void readMatrix(int *tab, int n, int m)
{
	int i, j, *p;
	p = tab;

	for(i = 0;i < n; i++)
		for (j = 0; j < m; j++)
		{
			printf("\nElem[%d][%d]: ", i, j);
			scanf("%d", (p + i*n + j));
		}
}

/* function to sum two matrices using pointers */
int *sumMatrices(int *tab1, int *tab2, int *tabSum, int n, int m)
{
	int *p1, *p2, *pSum, i, j;
	p1 = tab1;
	p2 = tab2;
	pSum = tabSum;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			*(pSum + i*n + j) = *(p1 + i*n + j) + *(p2 + i*n + j);

	return pSum;
}