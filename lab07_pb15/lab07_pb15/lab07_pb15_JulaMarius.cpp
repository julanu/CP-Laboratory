/*
	Author: Jula Marius
	Date: 21/11/2017
	Description: Read a char and display it on N rows and lines.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/* prototypes */
void printChar(char, int);

void main()
{
	char c;
	int n;

	printf("\nPlease enter the character: ");
	scanf("%c", &c);
	printf("\nPlease enter the number of lines and rows: ");
	scanf("%d", &n);

	printChar(c, n);

	_getch();
}

/* function to print a character on N lines and rows */
void printChar(char c, int n)
{
	int i, j;  /* indexes */

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++)
			printf("%c ", c);
		  printf("\n");
	  	}
}