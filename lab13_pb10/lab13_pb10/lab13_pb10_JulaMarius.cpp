/*
	Author: Jula Marius
	Date: 13/1/2017
	Description: Write a program that reads from a file a series of float values. Write into another file
				the integer parts of the positive numbers.
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	FILE *f, *g;
	errno_t err;
	float val;
	int r;

	if ((err = fopen_s(&f, "float.txt", "r") != 0)) {
		puts("Error opening the file!"); _getch();
		exit(1);
	}
	if ((err = fopen_s(&g, "int.txt", "w") != 0)) {
		puts("Error opening the file!"); _getch();
		exit(1);
	}
	while (!feof(f))
	{
		fscanf(f, "%f", &val);
		r = (int)val;
		fprintf(g, "%d ", r);
	}
	fclose(f);
	fclose(g);
	_getch();
}