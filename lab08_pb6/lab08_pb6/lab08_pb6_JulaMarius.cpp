/*
Author: Jula Marius
Date: 25/11/2017
Description:  Define two matrices of int. Write the functions that display:
a) the positions of the odd elements in each matrix;
b) the sum of all even elements in both matrices;
c) the sum of the two initial matrices;
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define ROWS 50
#define COLS 50

void readMatrix(int[][COLS], int, int);
void displayMatrix(int[][COLS], int, int);
void oddPositions(int[][COLS], int, int);
int detEvenSum(int[][COLS], int[][COLS], int, int);
void sumMatrices(int[][COLS], int[][COLS], int, int);

void main()
{
	int mat1[ROWS][COLS], mat2[ROWS][COLS], n, m;
	printf("\nPlease enter the number of rows: ");
	scanf("%d", &n);
	printf("\nPlease enter the number of cols: ");
	scanf("%d", &m);

	printf("\nGive the elems of the first matrix: ");
	readMatrix(mat1, n, m);
	printf("\nGive the elems of the second matrix: ");
	readMatrix(mat2, n, m);

	oddPositions(mat1, n, m);
	oddPositions(mat2, n, m);

	printf("\nThe sum of all even nums in both matrices is: %d", detEvenSum(mat1, mat2, n, m));

	sumMatrices(mat1, mat2, n, m);

	_getch();
}
/* function to read a matrix */
void readMatrix(int mat[][COLS], int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (i = 0; i < m; i++)
		{
			printf("\nmat[%d][%d]=", i, j);
			scanf("%d", &mat[i][[j]);
		}
}
/* function to display a matrix */
void displayMatrix(int mat[][COLS], int n, int m)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%d ", mat[i][j]);
		printf("\n");
	}
}

/* function to display the position of every odd element in the matrix */
void oddPositions(int mat[][COLS], int n, int m)
{
	printf("\nThe positions of the odd elements are: \n");
	int i, j;

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (mat[i][j] % 2 == 0)
				printf("(%d, %d) ", i, j);
}

/* function to determine the sum of all even elements of two matrices
i will use only 2 for loops to iterate through both matrices instead
of using 4, 2 for every matrix */
int detEvenSum(int mat1[][COLS], int mat2[][COLS], int n, int m)
{
	int i, j, sum;
	sum = 0;

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			if (mat1[i][j] % 2 == 1)
				sum += mat1[i][j];
			if (mat2[i][j] % 2 == 1)
				sum += mat2[i][j];
		}
	return sum;
}

/* we compute the sum of the two matrices in the first matrix by simply adding
the elements so we won't use an extra matrix for computing */
void sumMatrices(int mat1[][COLS], int mat2[][COLS], int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			mat1[i][j] += mat2[i][j];

	displayMatrix(mat1, n, m);
}
