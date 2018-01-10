/*
	Author: Jula Marius
	Date:  2/1/17
	Description: Write a C/C++ application that allocates the necessary amount of memory for storing
				n products, using a structure named Product having the fields: name, price, quantity.
				After reading from the keyboard each product’s data, display the item that has the
				biggest stock value. Free up the allocated memory.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Product {
	char name[20];
	double price;
	int quantity;
};


void readProdData(struct Product *);
void dispProd(struct Product *);

void main()
{
	struct Product *x;
	int i, n, max_val, index_of;
	max_val = 0; /* out of stock */

	printf("\nPlease enter the number of products: ");
	scanf("%d", &n);



	if (!(x = new struct Product[n]))
	{
		printf("\nUnsuccessful allocation");
		_getch();
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
			readProdData(x + i);

		for (i = 0; i < n; i++)
			if ((x + i)->quantity > max_val)
			{
				max_val = (x + i)->quantity; /* biggest stock */
				index_of = i; /* index of the item that has the biggest stock*/
			}

		dispProd(x + index_of);

		if (x)
			free(x);

		_getch();
	}
}	


void readProdData(struct Product *p)
{
	printf("\nPlease enter the name of the product: ");
	scanf("%s", p->name);
	printf("\nPlease enter the price of the product: ");
	scanf("%lf", &(p->price));
	printf("\nPlease enter the stock: ");
	scanf("%d", &(p->quantity));
}

void dispProd(struct Product *p)
{
	printf("\n------Item------");
	printf("\n%s", (p->name));
	printf("\nPrice: %.2lf", (p->price));
	printf("\nQuantity: %d", (p->quantity));
}