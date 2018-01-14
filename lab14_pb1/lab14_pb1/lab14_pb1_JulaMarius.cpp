/*
	Author: Jula Marius
	Date: 14/1/2017
	Description: Write an application that:
				-reads from the keyboard an integer value n;
				-reads from the keyboard (using a function) n floating-point numbers, storing them into a dynamically
				allocated one-dimensional array;
				- writes out the floating-point values into a binary file, the filename being read from the keyboard;
				-reads back the file’s content, displaying the numbers with indexes 0, 3, 6, etc. using the random file-access
				methods; 
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void readArr(float *, int);

void main()
{
	FILE *f;
	errno_t err;
	int n, i;
	float *tab, buff, *p;
	char fileName[100];

	printf("\nPlease enter the number of values: ");
	scanf("%d", &n);

	tab = (float *)malloc(n * sizeof(float));
	if (!tab)
	{
		printf("\Unsuccessful allocation");
		_getch();
		exit(1);
	}
	else
	{
		readArr(tab, n);
		p = &tab[0];
		printf("\nPlease enter the filename: ");
		scanf("%s", fileName);
		if ((err = fopen_s(&f, fileName, "w+b") != 0)) {
			puts("Error opening the file!"); _getch();
			exit(1);
		}
		for (i = 0; i < n; i++)
			fwrite(&buff, sizeof(float), n, f);

		while (!feof(f))
		{
			fread(&buff, sizeof(float), 1, f);
			printf_s("%.2f ", fseek(f, 2 * sizeof(float), SEEK_CUR));
			
		}
		fclose(f);
	}
	_getch();
}

void readArr(float *tab, int n)
{
	int i;
	float *pf;
	pf = &tab[0];
	for (i = 0; i < n; i++)
		scanf("%f", (pf + i));
}