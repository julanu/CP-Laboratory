/*
	Author: Jula Marius
	Date: 21/11/2017
	Description: Read numbers until the <ESC> key is pressed, compute
	the mean of the odd and positive numbers and display it 
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>

#define ESCAPE 27

void process();

/* everything was done in a single function so the main function looks really clean */
void main()
{
	process();
	
	_getch();
}
/* 
   we start the function by reading in the variable c using the _getche(function that reads an 
   character with echo), so we can see what character we have entered, we then check if the
   character we entered is equal with ESCAPE(the code for our escape key) if it's not ESCAPE
   then we add to the sum of odd numbers and count how many we have entered. by doing that we
   will be able to read until we press the ESC key and display the av. val. of the odd nums entered
   */
void process()
{
	char c;
	int sum, count, x;
	sum = 0;
	count = 1; /* as we can't divide by 0 in case no number is entered */

	do
	{
		printf("\nEnter the number: ");
		c = _getche();
		if (c == ESCAPE)
			printf("DONE");
		else
		{
			x = c - '0'; /* we substract '0' so we can obtain our value(for example 3 in ASCII is 51, but 51 - '0',
							where('0' = 48) gives us our needed value, 3 */
			if (x % 2 == 1)
			{
				sum += x;
				count++;
			}
		}
	} while (c != ESCAPE);

	/* we will divide by count - 1 because we initialized the variable with
	   1 in case no number is entered */
	if (count == 1)
		printf("\n\tNo numbers have been entered");
	else
	{
		count -= 1; /* we decrease the number count by one so we can obtain a proper result */
		printf("\nThe avg. val. of the odd pos. nums is: %.2f", (float)sum / count);
	}
}