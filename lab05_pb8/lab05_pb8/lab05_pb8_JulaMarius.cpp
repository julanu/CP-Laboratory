/*
	Author: Jula Marius
	Date: 6/11/2017
	Description:. Calculate and display the travelling time of the train,
	represented in hours and minutes.
	Laboratory 5 Problem 8
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

int input();
void compute_time(int, int, int, int);

void main()
{
	int h_cj, min_cj, h_bv, min_bv;

	printf("Please enter the hour and minutes of the departure: ");
	h_cj = input();
	min_cj = input();
	printf("Please enter the hour and minutes of the arrival: ");
	h_bv = input();
	min_bv = input();
	
	compute_time(h_cj, min_cj, h_bv, min_bv);

	_getch();
}

void compute_time(int h_cj, int min_cj, int h_bv, int min_bv)
{
	
	
	printf("\nThe duration was %d h and %d min", timeH, timeMin);
}

int input()
{
	int x;

	scanf("%d", &x);

	return x;
}