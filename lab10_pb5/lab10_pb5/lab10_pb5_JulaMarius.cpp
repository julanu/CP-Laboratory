/*
	Author: Jula Marius
	Date: 29/12/17
	Description: The application generates a random number between 0 and 100 and then reads
				repeatedly the keyboard until the user enters the right number. Use the previously defines
				messages for informing the client about the relation between the auto-generated number
				and the last value entered from the keyboard.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
	char *words[3];
	int num, x;
	words[0] = "value too small";
	words[1] = "value too big";
	words[2] = "corect value";

	srand(time(NULL));
	num = rand() % 100 + 1;

	do
	{
		printf("\nPlease enter a number: ");
		scanf("%d", &x);
		if (x == num)
			printf("%s", words[2]);
		if (x > num)
			printf("%s", words[1]);
		if (x < num)
			printf("%s", words[0]);
	} while (x != num);
	printf("\ncongratulations!");
	_getch();
}