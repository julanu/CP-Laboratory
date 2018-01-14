/*
	Author: Jula Marius
	Date: 13/1/2017
	Description: Write a C/C++ program that reads from the keyboard (with confirmation) a series of
				float values. Write the values into a text file that has the name entered from the
				command line. Read the file’s content and display all the values greater than a given
				number, read from the keyboard.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 50

void readArr(float *, int);
void writeInFile(float *, int, FILE *);

void main()
{
	FILE *f;
	errno_t err;
	float f_Arr[MAX], x;
	int n, num;
	char answ, fileName[MAX];
	printf("\nDo you want to run the program and enter the float values? Y|N ");
	scanf("%c", &answ);
	if (answ != 'Y')
	{
		printf("End of the program . . .");
		_getch();
		exit(1);
	}
	else
	{
		printf("\nPlease enter how many values you want to introduce: ");
		scanf("%d", &n);
		printf("\nPlease enter a number: ");
		scanf("%d", &num);
		readArr(f_Arr, n); 
		fflush(stdin);
		printf("\nPlease enter the name of the file(e.g name.txt): ");
		scanf("%s", fileName);

		if ((err = fopen_s(&f, fileName, "w+") != 0)) {
			puts("Error opening the file!"); _getch();
			exit(1);
		}
		/* written all the data in the file */
		writeInFile(f_Arr, n, f);
		printf("\n");
		while (!feof(f))
		{
			fscanf(f, "%f", &x);
			if(x > num)
				printf("\t%2.f", x);
		}
		fclose(f);
		_getch();
	}
}

void readArr(float *f_Arr, int n)
{
	int i;
	printf("\nPlease enter all the values on a row separated by a whitespace\n");
	for (i = 0; i < n; i++)
		scanf("%f", &f_Arr[i]);
}

void writeInFile(float *f_Arr, int n, FILE *f)
{
	int i; float *p;
	p = f_Arr;
	for (i = 0; i < n; i++)
		fprintf(f, "%.2f ", *(p + i));
}
