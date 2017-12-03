/*
	Author: Jula Marius
	Date: 3/12/2017
	Description: Read from the keyboard an array of characters. Define the function that reverses the array and
populates another array with the elements from the even positions of the reverted array. Display the results.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define DIM 50

void reverse(char *);
void getNew(char *, char *);

void main()
{
	char s1[DIM], s2[DIM];
	printf("Give the string:");
	gets_s(s1);
	reverse(s1);
	getNew(s1, s2);

	_getch();
}

void reverse(char s1[])
{
	int i, n;
	n = strlen(s1);
	for (i = 0; i < n; i++)
	{
		char aux;
		aux = s1[i];
		s1[i] = s1[n - i - 1];
		s1[n - i - 1] = aux;
	}
	printf("\nThe reversed string is: ");
	puts(s1);
}

void getNew(char s1[], char s2[])
{
	int i, j, n;
	j = 0;
	n = strlen(s1);
	for (i = 0; i < n; i++)
		s2[j++] = s1[i];
	s2[j] = '\0';
	printf("\nThe second string is: ");
	puts(s2);
}