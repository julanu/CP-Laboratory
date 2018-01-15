/*
	Author: Jula Marius
	Date: 14/1/2017
	Description: Define a structure called cookie that contains as variables the name, no_of_pieces and price.
				Read from the keyboard the data for n cookies and save it into a binary file. Read back the file and display
				the information belonging to the cheapest cookie.
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct cookie {
	char name[50];
	int no_of_pieces;
	float price;
};

void cheapestCookie(struct cookie *, int);
void readDataCookie(struct cookie *);

void main()
{
	struct cookie *c;
	FILE *f;
	int n, i;
	char fileName[255];

	printf("\nPlease enter the number of cookies: ");
	scanf("%d", &n);

	c = (cookie *)malloc(n * sizeof(cookie));
	if (!c)
	{
		printf("\nUnsuccessful allocation ");
		_getch();
		exit(1);
	}
	else
	{
		for (i = 0; i < n; i++)
			readDataCookie(c + i);

		printf("\nEnter  the  name  of  the  file: ");
		scanf("%s", &fileName);

		if ((f = fopen(fileName, "wb")) == NULL)
		{
			printf("\nUnable to open the file");
			_getch();
			exit(1);
		}

		for (int i = 0; i < n; i++)
			fwrite((c + i), sizeof(cookie), 1, f);

		fclose(f);

		if ((f = fopen(fileName, "rb")) == NULL)
		{
			printf("\nUnable to open the file");
			_getch();
			exit(1);
		}

		for (int i = 0; i < n; i++)
		{
			fread((c + i), sizeof(cookie), 1, f);    //reads  from  the  binary  file
		}
		cheapestCookie(c, n);
		fclose(f);
		_getch();
	}
}



void cheapestCookie(struct cookie *c, int n)
{
	int i, ind;
	float val;
	val = 1000000.0;
	for (i = 0; i < n; i++)
	{
		if ( (c + i)->price < val)
			ind = i;
	}

	printf("\nThe cheapest cookie is: ");
	printf("\n %s", (c + ind)->name);
	printf("\n %d", (c + ind)->no_of_pieces);
	printf("\n %.2f", (c + ind)->price);
}

void readDataCookie(struct cookie *c)
{
	printf("\nEnter the name of the cookie: ");
	scanf("%s", c->name);
	printf("\nEnter the number of pieces: ");
	scanf("%d", &c->no_of_pieces);
	printf("\nEnter the price: ");
	scanf("%f", &c->price);
}