/*
	Author: Jula Marius
	Date: 13/1/2017
	Description: Develop a C/C++ application that will display (line by line) the content of a
				previously created text file then one created by program. 
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void readFromFile(FILE *, char *);

void main()
{
	FILE *f;
	errno_t err;
	char line[256];

	if ((err = fopen_s(&f, "file.txt", "r") != 0)) {
		puts("Error opening the file!"); _getch();
		exit(1);
	}

	readFromFile(f, line);

	fclose(f);
	_getch();
}

void readFromFile(FILE *f, char line[])
{
	while (fgets(line, sizeof(line), f)) {
		/* note that fgets don't strip the terminating \n, checking its
		presence would allow to handle lines longer that sizeof(line) */
		printf("%s", line);
	}
}