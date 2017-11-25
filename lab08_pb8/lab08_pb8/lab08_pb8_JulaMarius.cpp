/*
	Author: Jula Marius
	Date: 25/11/2017
	Description: Function to determine the average value of N elements from a one-dimensional array and display it.
				 Function to display the elements from the initial array that are greater than the computed average. 
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

void readArr(int *, int);
float avgValue(int *, int);

void main()
{

}

/* function to read a one-dimensional array */
void readArr(int arr[], int n)
{
	int i;
	
	printf("\nPlease enter the elements of the array: \n");

	for (i = 0; i < n; i++)
	{
		printf("arr[%d]: ");
		scanf("%d", &arr[i]);
	}
}

/* function to determine the average value of all the elements of the array */
float avgValue(int arr[], int n)
{
	float sum;
	int i;
	sum = 0;
	for (i = 0; i < n; i++)
		sum += arr[i];

	return (sum / n);
}

void smallThanAvgVal(int arr[], int n)
{

}