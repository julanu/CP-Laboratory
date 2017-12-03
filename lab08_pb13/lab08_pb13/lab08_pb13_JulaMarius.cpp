/*
	Author: Jula Marius
	Date: 3/12/2017
	Description:Starting from the code presented at the course (traversing a tridimensional matrix from the xOy perspective),
				write a program that traverses the matrix from the xOz and yOz perspectives.
				Specify the perspective when displaying the data.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define DIM 15

void readMatrix(int[DIM][DIM][DIM], int, int, int);
void transxOz(int[DIM][DIM][DIM], int, int, int);
void transyOz(int[DIM][DIM][DIM], int, int, int);


void main()
{
	int tab[DIM][DIM][DIM], n, m, l;
	printf("\nPlease enter the dimension of the matrix :");
	scanf("%d%d%d", &n, &m, &l);

	readMatrix(tab, n, m, l);

	transxOz(tab, n, m, l);
	transyOz(tab, n, m, l);

	_getch();
}

/* function to traverse the matrix from the xOz perspective */
void transxOz(int tab[][DIM][DIM], int n, int m, int l)
{
	int i, j, k;
	printf("\nTravelling from the xOz perspective: \n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			for (k = 0; k < l; k++) {
				printf("%d ", tab[j][i][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

/* function to read a tri-dimensional matrix */
void readMatrix(int tab[][DIM][DIM],int n, int m, int l)
{
	int i, j, k;
	printf("\nPlease enter the elements of the matrix: \n");
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			for (k = 0; k < l; k++)
			{
				printf("tab[%d][%d][%d]: ", i, j, k);
				scanf("%d", &tab[i][j][k]);
			}
}
/* function to traverse the matrix from the yOz perspective */
void transyOz(int tab[][DIM][DIM], int n, int m, int l)
{
	int i, j, k;
	printf("\nyOz perspective: \n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			for (k = 0; k < l; k++) {
				printf("%d ", tab[j][k][i]);
			}
			printf("\n");
		}
		printf("\n");
	}
}