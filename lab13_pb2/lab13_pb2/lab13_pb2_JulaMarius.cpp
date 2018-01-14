/*
	Author: Jula Marius
	Date: 13/1/2017
	Description: Define an enumeration called White_Light that will contain the basic colors (red,
				orange, yellow, green, blue, indigo and violet). Initialize a few variables of type
				White_Light and try to generate some secondary colors by combining the basic colors
				mentioned above. Use an enumeration based mechanism for translating the color
				names into French, English or German. Display all the colors mentioning the
				original- and the translated names and the associated value. 
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

enum White_Light {
	red,
	yellow,
	orange,
	green,
	blue,
	indigo,
	violet
}clrs;

char *translateToFr(White_Light clrs);
void displayData(White_Light clrs);

void main()
{
	int magenta, white;
	magenta = red + blue;
	white = blue + green + red + violet + indigo + orange;
	printf("\nColor Magenta - value = %d", magenta);
	printf("\nColor White - value = %d\n", white);

	displayData(clrs);

	_getch();
}

char *translateFromEngToFr(White_Light clrs) {
	switch (clrs) {
	case red:
		return "rouge";
	case orange:
		return "orange";
	case yellow:
		return "jaune";
	case green:
		return "vert";
	case blue:
		return "bleu";
	case indigo:
		return "indigo";
	case violet:
		return "pourpre";
	default:
		return "error";
		break;
	}
}

void displayData(White_Light clrs)
{
	printf("\nEnglish: %d (red)\t French: %s", red, translateFromEngToFr(red));
	printf("\nEnglish: %d (orange)\t French: %s", orange, translateFromEngToFr(orange));
	printf("\nEnglish: %d (yellow)\t French: %s", yellow, translateFromEngToFr(yellow));
	printf("\nEnglish: %d (green)\t French: %s", green, translateFromEngToFr(green));
	printf("\nEnglish: %d (blue)\t French: %s", blue, translateFromEngToFr(blue));
	printf("\nEnglish: %d (indigo)\t French: %s", indigo, translateFromEngToFr(indigo));
	printf("\nEnglish: %d (violet)\t French: %s", violet, translateFromEngToFr(violet));
}