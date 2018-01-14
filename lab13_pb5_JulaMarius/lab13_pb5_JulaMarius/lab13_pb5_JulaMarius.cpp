/*
	Author: Jula Marius
	Date: 13/1/2017
	Description: Write a program that reads from the keyboard n integer values and then stores them
				into a text file. The filename has to be read from the keyboard. Then read the
				numbers from the file, calculate their average value, display-it and append-it to the end of
				the text-file.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float calcAvgValue(int *, int);
void writeInFile(int *, int, FILE *);

void main()
{
	FILE *f;
	int n, arr[100], i;
	errno_t err;
	char fileName[30];
	float avg = 0;

	printf("\nPlease enter the name of the file(e.g name.txt): ");
	scanf("%s", fileName);

	if ((err = fopen_s(&f, fileName, "w+") != 0)) {
		puts("Error opening the file!"); _getch();
		exit(1);
	}
	printf("\nPlease enter the number of elements you want to read: ");
	scanf("%d", &n);
	/* reading the array */
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	writeInFile(arr, n, f);
	fclose(f);

	if ((err = fopen_s(&f, fileName, "a+") != 0)) {
		puts("Error opening the file!"); _getch();
		exit(1);
	}
	i = 0;
	while (!feof(f))
	{
		fscanf(f, "%d", &arr[i++]);
	}
	
	avg = calcAvgValue(arr, n);
	printf("\nThe average value is: %.2f", avg);
	fprintf(f, "%0.2f", avg);
	fclose(f);

	_getch();
}

void writeInFile(int *arr, int n, FILE *f)
{
	int i, *p;
	p = arr;
	for (i = 0; i < n; i++)
		fprintf(f, "%d ", *(p + i));
}

float calcAvgValue(int *arr, int n)
{
	int i, *p;
	float avg;
	p = arr;
	avg = 0;

	for (i = 0; i < n; i++)
		avg += (float)*(p + i);

	return (avg / n);
}