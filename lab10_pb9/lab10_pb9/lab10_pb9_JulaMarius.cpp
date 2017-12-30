/*
	Author: Jula Marius
	Date: 29/12/17
	Description:  Read from the kb the float type elements of a one-dim array. 
				The values represent the average marks of a group of students.
				Write a function that det the num of students having the avg mark >=8
				 Display the result. (use pointers, avoid global variables).
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define DIM 100

float *readArr(float *, int);
int detStuds(float *, int);

void main()
{
	float tab[DIM], *pt, *pt_2;
	int n;
	pt = &tab[0];

	printf("\nPlease enter the dimension of the array: ");
	scanf("%d", &n);

	pt_2 = readArr(pt, n);

	printf("\nThere are %d student(s) with a grade higher than 8", detStuds(pt_2, n));

	_getch();
}


/* function to read a one-dim array using pointers*/
float *readArr(float *tab, int n)
{
	int i;
	float *pt;
	pt = tab;
	
	for (i = 0; i < n; i++)
	{
		printf("\narr[%d]: ", i);
		scanf("%f", (pt + i));
	}
	return tab;
}

/* function to determine the number of students with a mark greater than 8*/
int detStuds(float *tab, int n)
{
	int i, count = 0;
	float *p;
	p = tab;
	for (i = 0; i < n; i++)
		if (*(p + i) > 8.0)
			count++;
	return count;
}