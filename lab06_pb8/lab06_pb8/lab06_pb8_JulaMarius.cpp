/*
	Author: Jula Marius
	Date: 18/11/2017
	Description: Read from the keyboard several lowercase characters. Transform them into uppercase letters
    using: - an arithmetic operation; - a logical operation, combined with a specific mask;
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

char input();
void toUppercase1(char);
void toUppercase2(char);
void main()
{
	char a, b, c, d;

	a = input(); toUppercase1(a); toUppercase2(a);
	b = input(); toUppercase1(b); toUppercase2(b);
	c = input(); toUppercase1(c); toUppercase2(c);
	d = input(); toUppercase1(d); toUppercase2(d);
	/* 4 characters are enough */

	_getch();
}

/* function to read the input */
char input()
{
	char x;
	printf("\nPlease enter the character:");
	scanf("%c", &x);

	return x;
}

/* function to compute the lowercase of a letter using
	an arithmetical method on the variable */
void toUppercase1(char c)
{
	c = c - 32;
	printf("to upp: %c\n", c);
}

void toUppercase2(char c)
{	

	c = c & 0xDF; /* we apply the mask on the character */
	printf("to upp(bit mask): %c", c);

}