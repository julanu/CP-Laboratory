/*
	Author: Jula Marius
	Date: 29/12/17
	Description: Write a C/C++ application that allocates the necessary amount of memory for storing
				10.000 integer numbers. The program automatically initializes the numbers with
				random values between 1 and 100 (use the library functions srand() and/or rand() in
				VC++). Write a function that displays the most 10 frequently numbers and the
				number of their appearances in the initial array.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int comp(const int *, const int *);

void main()
{
	int *tab, i;
	tab = (int*)malloc(10000 * sizeof(int));
	if (!tab)
	{
		printf("\nAlocare nereusita");
		_getch();
	}
	else
	{
		int *tab1;
		tab1 = (int*)malloc(100 * sizeof(int)); /* the frequency's array*/
		srand(time(NULL)); /* we set the seed */
		/* we set a random value between 1 and 100 to every element of the array */
		for (i = 0; i < 10000; i++)
			*(tab + i) = rand() % 100 + 1;

		/* we set the frequency's to zero*/
		for (i = 0; i < 100; i++)
			*(tab1 + i) = 0;
		/* we start to determine the frequency of every element from 1 to 100  that's
	       in the 10.000 elems array */
		for (i = 0; i < 100; i++)
			*(tab1 + *(tab + i)) += 1;

		/* now that we have the frequency's we just have to determine the top 10 most common numbers based
		   on the frequency array, the index of the element is the number that has the frequency of X */ 

	}
}

int comp(const int * a, const int * b)
{
	return *b - *a;
}