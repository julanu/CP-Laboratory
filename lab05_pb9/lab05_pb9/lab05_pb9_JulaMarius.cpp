/*
	Author: Jula Marius
	Date: 7/11/2017
	Description: Display how many
    minutes will pass until the two cars meet in the same point.
	Laboratory 5 Problem 9
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

int compute_time(int, int, int);
int transform_km_m(int);
int speed_input();

void main()
{
	int v1, v2, d;
	d = 100; /* the distance in km */

	v1 = speed_input();
	v2 = speed_input();

	printf("\n %d minutes have passed until the cars have met", compute_time(v1, v2, d));

	_getch();
}

int compute_time(int v1, int v2, int d)
{
	int time; /* the time will be calculated in seconds */	

	d *= 1000;

	time = d / (v2 + v1);
	/* we multiply time by -1 if v2 is smaller than v1 because we can't 
	   obtain a result with a negative sign */

	if (time < 0)
		time *= -1;
	/* by using the m/s speed and computing using the distance in meters
	   we obtain the time in seconds so we must divide by 60 */

	time /= 60;

	return time;
}

/* transforming the speed from km/h into m/s */
int transform_km_m(int x)
{
	x = x * 1000 / 3600;

	return x;
}

/* entering the speeds' values from the keyboard*/
int speed_input()
{
	int x;

	printf("\nEnter the speeds' value: ");
	scanf("%d", &x);
	 
	x = transform_km_m(x);

	return x;
}