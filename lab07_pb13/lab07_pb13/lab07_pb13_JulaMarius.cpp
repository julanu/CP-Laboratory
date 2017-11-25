/*
	Author: Jula Marius
	Date: 21/11/2017
	Description: Compute the lowest common multiple of two integers.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

/* prototypes */
int input();
int greatestCommonDivisor(int, int);
int lowCommonMultiple(int, int);

void main()
{
	int a, b;

	a = input();
	b = input();
	printf("\nThe lowest common multiple is equal to: %d", lowCommonMultiple(a, b));

	_getch();
}

/* function to read the input from the keyboard*/
int input()
{
	int x;
	printf("\nPlease enter a number: ");
	scanf("%d", &x);

	return x;
}

/* function to determine the lowest common multiple using a simple formula
   and making use of an algorithm solved before */
int lowCommonMultiple(int a, int b)
{
	int lcm;
	
	lcm = (a * b) / greatestCommonDivisor(a, b);
	
	return lcm;
}

/* function to determine the greatest common divisor of two numbers */ 
int  greatestCommonDivisor(int  a, int  b)
{

	/*if  one  of  the  two  numbers  is  equal  to  0  then  we  exit  the  function  as  the  values  are  not  valid */
	if (a == 0 || b == 0)
		return (-1);
	/* if  one  of  the  values  is  equal  to  1  then  we  output  1  as  the  greatest  common  divisor
	can't  be  greater  than  one  in  this  case */
	if (a == 1 || b == 1)
		return  1;

	/* if  the  cases  above  are  ignored  we  start  to  compute  the  GCD */
	while (a != b)
		if (a  >  b)
			a = a - b;
		else
			b = b - a;

	return  a;
}