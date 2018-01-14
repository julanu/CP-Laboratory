/*
	Author: Jula Marius
	Date: 14/1/2017
	Description: Write a C/C++ program that reads from the comand line two file names. The program
should ask the user to introduce eight integer values fom the KBD, saving them into the first file, in binary
mode. Read back these values from the file, and determine the arithmetical media of the values greather
than 4. Write the result into the second file in text mode, using the following format: “The average value of
... is ...”. The first space needs to be replaced with the values used for calculating the average, the second
with the average value itself, using a two digits precision.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void  main(int  argc, char  *argv[])
{
	FILE  *f;
	char  *fileNameIn, *fileNameOut;
	int  *tab, count = 0;
	float  avgVal = 0;
	
	fileNameIn = argv[1];
	fileNameOut = argv[2];

	if (!(tab = (int *)malloc(8*sizeof(int))))
	{
		printf("\nUnsuccessful allocation");
		_getch();
		exit(1);
	}

	printf("\nEnter  8  integer  numbers:  \n");
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", (tab + i));
	}

	if ((f = fopen(argv[1], "wb")) == NULL)
	{
		printf("\nUnable to open the file");
		_getch();
		exit(1);
	}   

	fwrite(tab, sizeof(int), 8, f);
	fclose(f);

	if ((f = fopen(argv[1], "rb")) == NULL)
	{
		printf("\nUnable to open the file");
		_getch();
		exit(1);
	}  

	fread(tab, sizeof(int), 8, f);
	fclose(f);

	if ((f = fopen(argv[2], "w")) == NULL)   
	{
		printf("\nUnable to open the file");
		_getch();
		exit(1);
	}

	fprintf(f, "The  average  value  of  the  numbers: ");
	for (int i = 0; i<8; i++)
	{

		if (*(tab + i) > 4)
		{
			fprintf(f, "%d ", *(tab + i));
			avgVal += *(tab + i);  
			count++;    
		}
	}

	avgVal /= count;

	fprintf(f, "The average value of %d %d %d %d %d %d %d %d is  %.2f.", *(tab + 0), *(tab + 1), *(tab + 2), *(tab + 3), *(tab + 4), *(tab + 5), *(tab + 6), *(tab + 7),  avgVal);
	fclose(f);

	printf("\nThe  result  was  written  in  the  file  %s.  ", argv[2]);
	_getch();
}