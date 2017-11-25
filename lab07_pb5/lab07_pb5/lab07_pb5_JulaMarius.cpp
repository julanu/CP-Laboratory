/*
	Author: Jula Marius
	Date: 17/11/2017
	Description: Det. all the prime nums smaller than N, and the greatest prime num smaller than N.
	Laboratory 7 Problem 5
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <cmath>

#define MAX 200

void sieve(int, int*);
void detPrimeNums(int, int*);
void detLastNum(int, int*);
int input();

/* spaced out the main function so the calling of the functions is more clear
   and intelligible */
void main()
{
	int primes[MAX], n;

	n = input();

	sieve(n, primes);

	printf("All the prime nums: \n");

	detPrimeNums(n, primes);

	detLastNum(n, primes);

	_getch();
}
/*function to read the input */
int input()
{
	int val;

	printf("Give the number: ");
	scanf("%d", &val);

	return val;
}

/* this function searches in the primes array for the first non-false value meaning that 
   holds a prime value, so we display the value of the index and exit from the function */
void detLastNum(int n, int primes[])
{
	int i;

	for (i = n - 1; i > 0; i--)
		if (primes[i] == 1)
		{
			printf("\n The greatest prime number: %d", i);
			return;
		}
}

/* using the primes array we check for every non-false value from the array
   because that value will hold at it's index a prime num */
void detPrimeNums(int n, int primes[])
{
	int i;

	for (i = 0; i < n; i++)
		if (primes[i] == 1)
			printf("\t\t%d\n", i); /* this just prints out each value if it's Prime */
}

/* function to det. all the prime nums smaller than a given N value using the famous
   Eratosthenes algorithm */
void sieve(int n, int primes[])
{
	int i, j; /* indexes*/

	for (i = 0; i < n; i++)
		primes[i] = 1; /* we initialize the sieve list to all 1's (True) */

	primes[0] = 0;
	primes[1] = 0; /* Set the first two numbers (0 and 1) to 0 (False) */

	for (i = 2; i < sqrt(n); i++) /* loop through all the numbers up to the sqrt(n) */
		for (j = 2 * i; j < n; j += i) /* mark off each factor of i by setting it to 0 (False) */
			primes[j] = 0;
}
