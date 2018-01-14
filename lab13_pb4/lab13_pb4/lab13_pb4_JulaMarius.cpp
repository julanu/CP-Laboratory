/*
Author: Jula Marius
Date: 13/1/2017
Description: Write a program that reads from a text file 10 integer numbers. The file has to be
previously created using a different code or by using the operating system’s facilities.
Write the functions that:
- order the integers array in ascending/descending order and displays the result
- count the number of even numbers in the array and display the result
Write the generated results into the original file.*/#define _CRT_SECURE_NO_WARNINGS#include <stdio.h>#include <stdlib.h>#include <conio.h>#define MAX 10void sortArrDesc(int *);void sortArrAsc(int *);void displayArrFile(int *, FILE *);int countEven(int *);void main(){
	FILE *f;	errno_t err;	int arr[MAX], i = 0;	if ((err = fopen_s(&f, "nums.txt", "a+") != 0))
	{
		printf("Error opening the file!");
		_getch();
		exit(1);
	}
	while (!feof(f))
	{
		fscanf(f, "%d", &arr[i++]);
	}	sortArrAsc(arr);	displayArrFile(arr, f);	sortArrDesc(arr);	displayArrFile(arr, f);	fprintf(f, "%d", countEven(arr));	_getch();}void sortArrAsc(int *arr){
	int i, j, *p;	p = arr;	for (i = 0; i < MAX; i++)		for (j = 0; j < MAX; j++)			if (*(p + i) < *(p + j))			{				int temp;				temp = *(p + i);				*(p + i) = *(p + j);				*(p + j) = temp;			}}void sortArrDesc(int *arr){
	int i, j, *p;	p = arr;	for (i = 0; i < MAX; i++)		for (j = 0; j < MAX; j++)			if (*(p + i) > *(p + j))			{				int temp;				temp = *(p + i);				*(p + i) = *(p + j);				*(p + j) = temp;			}}void displayArrFile(int *arr, FILE *f){
	int i, *p;	p = arr;	printf("\nNow the result is: \n");	for (i = 0; i < MAX; i++)		fprintf(f, "%d", *(p + i));}int countEven(int *arr){
	int i, count, *p;	count = 0;	for (i = 0; i < MAX; i++)		if (*(p + i) % 2 == 0)			count++;	return count;}