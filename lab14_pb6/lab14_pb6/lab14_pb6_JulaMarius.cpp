/* 
	Author: Jula Marius
	Date: 14/1/2017
	Description: Write  into  a  binary  file  a  series  of  integer  numbers  read  from  the  keyboard.
				Read  back  the  numbers  stored  in  the  file  on  odd  positions  displaying  wether
				they  are  odd  or  even  numbers.

*/

#define  _CRT_SECURE_NO_WARNINGS

#include  <stdio.h>
#include  <conio.h>
#include <stdlib.h>
#include <malloc.h>

void  readArr(int  *, int);

void  main()
{
	FILE  *fbin;
	int  *tab, i, n;
	char  fileName[255];
	
	printf("\nEnter the num of elements: ");
	scanf("%d", &n);

	if (!(tab = (int *)malloc(n*sizeof(int))))
	{
		printf("\nUnsuccessful allocation");
		_getch();
		exit(1);
	} 

	readArr(tab, n);

	printf("\nEnter  the  name  of  the  file:  ");
	scanf("%s", &fileName);

	if ((fbin = fopen(fileName, "wb")) == NULL)
	{
		printf("\nUnable to open file");
		_getch();
		exit(1);
	} 

	fwrite(tab, sizeof(int), n, fbin);
	fclose(fbin);

	if ((fbin = fopen(fileName, "rb")) == NULL) 
	{
		printf("\nError!");
		_getch();
		exit(1);
	}   

	fread(tab, sizeof(int), n, fbin);
	fclose(fbin);

	printf("\nThe  even  numbers  are:  ");
	for (i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			if (*(tab + i) % 2 == 0)
				printf("\nThe num %d is an even num (position %d)", *(tab + i), i);
			else
				printf("\nThe num %d is an odd num (position %d)", *(tab + i), i);
		}
	} 
	free(tab); 
	_getch();
}    


void  readArr(int  *tab, int  n)
{
	printf("\nPlease introduce the elements: ");
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", (tab + i));
} 