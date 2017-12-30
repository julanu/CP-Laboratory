/*
	Author: Jula Marius
	Date: 29/12/17
	Description: Write a C/C++ program that defines a function for reading from the keyboard the
				integer type values that form a [n x n] matrix. Write a function that interchanges two
				lines of the matrix. Use another function for displaying the initial and the processed
				matrices. Read from the keyboard (in the main function) the dimension (n) of the
				matrix and the indexes that indicate the rows to be switched (do not use global
				variables).
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

void main()
{

}

void readMat(int *tab, int n)
{
	int i, j, *p;
	p = tab;
	for(i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			printf("\ntab[%d][%d]: ");
			scanf("%d", (p + i*n + j));
		}
}