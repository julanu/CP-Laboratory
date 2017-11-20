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

int input()
{
	int val;

	printf("Give the number: ");
	scanf("%d", &val);

	return val;
}

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
void detPrimeNums(int n, int primes[])
{
	int i;
	for (i = 0; i < n; i++)
		if (primes[i] == 1)
			printf("%d\n", i); // this just prints out each value if it's Prime
}

void sieve(int n, int primes[])
{
	int i, j;
	for (i = 0; i < n; i++)
		primes[i] = 1; // we initialize the sieve list to all 1's (True)

	primes[0] = 0;
	primes[1] = 0; // Set the first two numbers (0 and 1) to 0 (False)

	for (i = 2; i < sqrt(n); i++) // loop through all the numbers up to the sqrt(n)
		for (j = 2 * i; j < n; j += i) // mark off each factor of i by setting it to 0 (False)
			primes[j] = 0;
}
