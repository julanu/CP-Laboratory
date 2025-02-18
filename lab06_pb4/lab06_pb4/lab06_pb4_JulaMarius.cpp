/*
	Author: Jula Marius
	Date: 15/11/2017
	Description:  Write a program that monitors a communications channel on 16/32/64 bits. In order to do that,
				  read from the keyboard an unsigned int value a, that will be displayed in decimal, binary, octal and
				  hexadecimal counting bases. Use a function for converting the number from base 10 in base 2
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/*prototypes*/
void getsets(int, int, int);
void toBase2(int);

void main()
{
	int x, p, n;
	printf("Please enter the int number: ");
	scanf("%d", &x);

	printf("\nPlease enter the position of the byte: ");
	scanf("%d", &p);

	printf("\nNumber of byte to be extracted: ");
	scanf("%d", &n);

	if ((p < 8 * sizeof(x)) && (p > n))
	{
		printf("Number in base 10: %d", x);
		printf("\nNumber in base 2: ");
		toBase2(x);
		printf("\nNumber in base 8: %o", x);
		printf("\nNumber in base 16: %x", x);
		getsets(x, p, n);
	}
	else
		printf("You entered incorect data!");

	_getch();
}

/* we move p to the right with p + 1 position then we apply
the mask using the & operator and ~ operator to obtain the proper results */

void getsets(int x, int p, int n)
{
	int value;

	value = (x >> (p + 1 - n)) & (~(~0 << n));
	printf("\nResult in binary: ");
	toBase2(value);
	printf("\nResult in base 8: %o", value);
	printf("\nResult in base 16: %x", value);
}

/*function to print every byte of the integer number
  "recursive function using the >> operator moving
  to the right with one position the bytes of the number
  */
void toBase2(int val)
{
	int x;

	x = val % 2;
	toBase2(val >> 1); /*recall the function*/
	printf("%d", x); /* display the remainder*/
}