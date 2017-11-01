//tema lab 4
//exercitiu 2

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <cmath>

float geometric_av(int, int);
int input();

void main()
{
	int a, b;
	printf("Enter the two values: ");
	a = input();
	b = input();

	printf("The geometric average is %.3f", geometric_av(a, b));


	_getch();
}


int input()
{
	int a;

	scanf("%d", &a);

	return a;
}

float geometric_av(int a, int b)
{
	float g_av;

	g_av = sqrt(a * b);

	return g_av;

}