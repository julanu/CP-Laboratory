/*
	Author:Jula Marius
	Date:2/1/17
	Description: Define a structure named Car that contains the following variables: producer,
				production_year, cylinder_volume and colour. Store in a newly allocated zone of
				memory the data for n cars. Display the records for the red cars produced after 2010.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct Car {
	char producer[30];
	int production_year;
	int cylinder_volume;
	char colour[15];
};

void readData(struct Car *);
void dispData(struct Car *);
void detectCar(struct Car *, int);

void main()
{
	int i, n;
	struct Car *x;

	printf("\nPlease enter the number of cars you want to introduce: ");
	scanf("%d", &n);
	/* checking if the memory is corectly allocated*/
	if (!(x = new struct Car[n]))
	{
		printf("\nUnsuccessful allocation");
		_getch();
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{   /* reading the data from the keyboard*/
			printf("\n-------Please enter a new car:");
			readData(x + i);
		}
		detectCar(x, n);
		/* eliberating the memory*/
		if (x)
			free(x);

		_getch();
	}
}

/* function to read the car data */
void readData(struct Car *pc)
{
	printf("\nPlease enter the producer: ");
	scanf("%s", pc->producer);
	printf("\nPlease enter the production year: ");
	scanf("%d", &(pc->production_year));
	printf("\nPlease enter the cylinder volume: ");
	scanf("%d", &(pc->cylinder_volume));
	printf("\nPlease enter the colour: ");
	scanf("%s", pc->colour);
}

/* function to display the data of a car */
void dispData(struct Car *pc)
{
	printf("\n---------");
	printf("\n%s", pc->producer);
	printf("\nProduction year: %d", pc->production_year);
	printf("\nCylinder volume: %d", pc->cylinder_volume);
	printf("\nColour: %s", pc->colour);
}

/* function to check if the production year and colour of a car are greater than 2010 and red*/
void detectCar(struct Car *pc, int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (((pc + i)->production_year > 2010) && (_stricmp((pc + i)->colour, "red") == 0))
			dispData(pc + i);
}