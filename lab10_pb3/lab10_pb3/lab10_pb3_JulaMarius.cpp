/*
	Author: Jula Marius
	Date: 29/12/17
	Description: Read from the KB an array of characters that
				has more than 7 elements. Use a pointer for displaying the characters that have the
				indexes 1, 3, 5 and 7.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define DIM 255

void printChars(char *);

void main()
{
	char arr[DIM], *pc;
	pc = &arr[0];
	/* we start reading until there are introduced more than 7 characters*/
	do
	{
		printf("Enter the array: ");
		scanf("%s", pc);
		if (strlen(pc) <= 7)
			printf("Please enter more than 7 characters\n");
	} while ((strlen(pc) <= 7));

	printf("\nThe characters from the pos. 1, 3, 5... are: \n");
	printChars(pc);

	_getch();
}


void printChars(char *ch)
{
	char *pc;
	int i, l;
	pc = &ch[0];
	l = strlen(pc);;/* the length of the array of chars */

	for (i = 0; i < l; i++)
		if (i % 2 != 0)
			printf(" %c", *(pc + i));
}