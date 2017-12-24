/*
	Author: Jula Marius
	Date: 14/12/2017
	Description: Eliminate duplicates from array of characters using pointers.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define DIM 255
char* removeOneDuplicate(char *, char);
char* removeAllDuplicates(char *);
void main()
{
	char str[DIM];

	printf("\nPlease enter the array of characters: "); 
	
	gets_s(str);

	printf("\nThe new array is: %s", removeOneDuplicate(str, 'a'));

	_getch();

}

void removeOneDuplicate(char * str, char c)
{
	int j = 0, i = 0;

	while (str[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (str[j] == c)
				while (str[j] != '\0')
					str[j] = str[j + 1];
					
		}
	}
}
