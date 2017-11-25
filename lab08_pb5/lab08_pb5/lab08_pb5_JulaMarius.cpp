/*
	Author: Jula Marius
	Date: 25/11/2017
	Description: Read the name and surname and display them with the first letter
			     capitalized, separed by a <tab>.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define DIM  50

void displayCapitalized(char *, char *);

void main()
{
	char name[DIM], surname[DIM];

	printf("\nPlease enter the name: ");
	gets_s(name);
	printf("\nPlease enter the surname: ");
	gets_s(surname);

	displayCapitalized(name, surname);

	_getch();
}

/* we use the strlen to loop to the strings of characters
   until the end, then we check if every character is minuscule or not
   if it is, we capitalize it, and at the end we display the name and surname*/
void displayCapitalized(char name[], char surname[])
{
	int i;
	for (i = 0; i < strlen(name); i++)
		if ((name[i] >= 97) && (name[i] <= 122))
			name[i] -= 32;

	for (i = 0; i < strlen(surname); i++)
		if ((surname[i] >= 97) && (surname[i] <= 122))
			surname[i] -= 32;

	printf("\n%s\t\t%s", name, surname);
}