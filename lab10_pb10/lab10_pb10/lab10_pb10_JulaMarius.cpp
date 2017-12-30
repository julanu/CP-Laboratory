/*
	Author: Jula Marius
	Date: 29/12/17
	Description: Read from the KB some int values. The function stores the values in a one-dim array named
				A. Write another function that fills a different one-dim array B, each element
				being obtained by subtracting the mean value of the initial values from the
				corresponding element located in the one-dim array A. 
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define DIM 50

void dispArr(float *, int);
void readArr(int *, int);
float *newArr(int *, float *, int);

void main()
{
	int A[DIM], *p1, n;
	float B[DIM], *p2, *np;
	printf("Please enter the dimension of the array: ");
	scanf("%d", &n);
	p1 = &A[0];
	p2 = &B[0];

	readArr(p1, n);

	np = newArr(p1, p2, n);
	printf("\nThre resulted array is: \n");
	dispArr(np, n);

	_getch();
}

/* function to display a one dimensional array */
void dispArr(float *tab, int n)
{
	float *p;
	int i;
	p = tab;

	for (i = 0; i < n; i++)
		printf(" %.2f", *(p + i));
}

/* function to compute accordingly */
float *newArr(int *A, float *B, int n)
{
	int i, *p;
	float *p2, mean_val;
	mean_val = 0;
	p = A;
	p2 = B;
	for (i = 0; i < n; i++)
		mean_val += *(p + i);
	
	mean_val /= n;

	for (i = 0; i < n; i++)
		*(p2 + i) = *(p + i) - mean_val;

	return B;
}

/* function to read an array of int values using pointers*/
void readArr(int *tab, int n)
{
	int i, *mp;
	mp = tab;

	for (i = 0; i < n; i++)
	{
		printf("\narr[%d]: ", i);
		scanf("%d", (mp + i));
	}
}