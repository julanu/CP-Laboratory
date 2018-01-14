/*
	Author: Jula Marius
	Date: 14/1/2017
	Description: Write a program that reads from the keyboard a single character and an integer value
				n. Generate a text file that will contain n lines and on each line write the character n
				times, n being read from the keyboard. 
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void writeInFile(FILE *, int, char);

void main()
{
	FILE *f;
	errno_t err;
	int n;
	char c;
	fflush(stdin);
	printf("\nPlease enter the value of N: ");
	scanf("%d", &n);
	printf("\nPlease enter the character: ");
	scanf("%c", &c);

	if ((err = fopen_s(&f, "nums.txt", "w+") != 0)) {
		puts("Error opening the file!"); _getch();
		exit(1);
	}

	writeInFile(f, n, c);
	fclose(f);

	_getch();
}

void writeInFile(FILE *f, int n, char c)
{
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			fprintf(f, "%c ", c);
		fprintf(f, "\n");
	}
}