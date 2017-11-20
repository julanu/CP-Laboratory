/*
	Author: Jula Marius
	Date: 17/11/2017
	Description: Greatest common divisor
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

int input();
int greatestCommonDivisor(int, int);

void main()
{
	int a, b;
	a = input();
	b = input();

	printf("The greatest common divisor: %d", greatestCommonDivisor(a, b));

	_getch();
}

int input()
{
	int val;

	printf("Please enter the values: ");
	scanf("%d", &val);

	return val;
}

int  greatestCommonDivisor(int  a, int  b)
{

	//if  one  of  the  two  numbers  is  equal  to  0  then  we  exit  the  function  as  the  values  are  not  valid
	if (a == 0 || b == 0)
		return (-1);
	//if  one  of  the  values  is  equal  to  1  then  we  output  1  as  the  greatest  common  divisor  can't  be  greater  than  one
	//in  this  case
	if (a == 1 || b == 1)
		return  1;

	//if  the  cases  above  are  ignored  we  start  to  compute  the  GCD
	while (a != b)
		if (a  >  b)
			a = a - b;
		else
			b = b - a;

	return  a;
}