/*
	Author: Jula Marius
	Date: 14/1/2017
	Description: Write a program that displays the integer elements read from a text file. The filenames
	entered from the keyboard. The file has to be created in another program or
	function.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
	FILE *f;
	char fileName[20];
	errno_t err;
	int x;

	printf("\nPlease enter the name of the file(e.g name.txt): ");
	scanf("%s", fileName);

	if ((err = fopen_s(&f, fileName, "r") != 0)) {
		puts("Error opening the file!"); _getch();
		exit(1);
	}
	while (!feof(f))
	{
		fscanf(f,"%d", &x);
		printf("%d ", x);
	}

	fclose(f);
	_getch();
}