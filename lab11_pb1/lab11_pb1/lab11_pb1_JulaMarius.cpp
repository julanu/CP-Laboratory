/*
	Author: Jula Marius
	Date: 15/12/2017
	Description: ...tbw
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	if (argc == 1)
	{   //check command line 
		printf("\nNu ati introdus nimic!");
		_getch();
		exit(1);
	}
	else
	{ //allocate memory and process data
		int n, *tab = NULL, sum = 0;
		n = atoi(argv[1]);  //we convert the command line argument so we can process it as an int
		tab = (int *)malloc(n * sizeof(int));
		if (tab != NULL)
		{
			int i;
			for (i = 0; i < n; i++)
			{
				printf("\nIntrod val[%d]: ", i);
				scanf("%d", tab + i);
				//we check directly after reading so we don't have to use a second for loop to check the neg. elems
				if (*(tab + i) < 0)
					sum += *(tab + i);
			}
			printf("\nThe sum is equal to: %d", sum);
		}
		else
		{
			printf("\nAlocare nereusita!");
		}
		if (tab)
			free(tab); //we free the memory
	}
	printf("\nProgram executed succesfully!");
	_getch();

}