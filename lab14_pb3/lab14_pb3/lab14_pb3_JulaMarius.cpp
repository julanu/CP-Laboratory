/*
	Author: Jula Marius
	Date: 14/1/2017
	Description: Write an application that:
- reads from the keyboard an integer value n;
- reads from the keyboard, with a function, n integers, storing them into a dynami allocated onedimensional
array;
- writes these values into a binary file (the filename is also read from the keyboard);
- reads the file’s content and displays the offset and content of all positions where even numbers are found.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

void  readArr(int  *, int);

void  main(void)
{
	FILE  *f;
	int  n, i, *tab, *pf;
	char  fileName[255];
	
	printf("\nPlease enter the number of elements: ");
	scanf("%d", &n);

	if (!(tab = (int *)malloc(n * sizeof(int))))
	{
		printf("\nUnsuccessful allocation");
		_getch();
		return;
	}

	printf("\nEnter  the  elements  of  the  array:  \n");
	readArr(tab, n);
	pf = &tab[0];
	printf("\nEnter  the  name  of  the  file:  ");
	scanf("%s", &fileName);

	if ((f = fopen(fileName, "wb")) == NULL)    //tests  the  file
	{
		printf("\nError!");
		_getch();
		exit(1);
	}

	fwrite(tab, sizeof(int), n, f);
	fclose(f);

	if (!(f = fopen(fileName, "rb")) == NULL)
	{
		printf("\nUnable to open the file");
		_getch();
		exit(1);
	}

	fread(tab, sizeof(int), n, f);
	fclose(f);

	printf("\nThe  even  numbers  are:  ");
	for (i = 0; i < n; i++)
		if (*(pf + i) % 2 == 0)
			printf("%d  ", *(pf + i));

	free(tab);
	_getch();
}


void  readArr(int  *tab, int  n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\nElem(%d):  ", i + 1);
		scanf("%d", (tab + i));
	}    
}   