/*
	Author: Jula Marius
	Date: 14/1/2017
	Description: Write a C/C++ application that reads a text file character by character and converts
				the first letter of each word into its uppercase equivalent.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char *readFile(char *, FILE *);

void main()
{
	FILE *file;
	errno_t err;
	char *code, fileName[30];
	printf("\nPlease enter the name of the file(e.g name.txt): ");
	scanf("%s", fileName);

	if ((err = fopen_s(&file, fileName, "r") != 0)) {
		puts("Error opening the file!"); _getch();
		exit(1);
	}
	code = readFile(file, fileName);

	_getch();
}


/* reading from the file char by char */
char *readFile(char *fileName)
{
	char *code =(char *)malloc(100 * sizeof(char));

	do
	{
		*code++ = (char)fgetc(file);

	} while (*code != EOF);

	return code;
}