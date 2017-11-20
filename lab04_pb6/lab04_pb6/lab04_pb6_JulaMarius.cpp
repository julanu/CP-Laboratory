/* Laboratory 4 Problem 6
	
Description: defining values and outputing them
	
Author : Jula Marius
	
Date : 2/11/2017 */


#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>

using namespace std;

/* we define some variables with different data types*/
#define val 6
#define C 'a'
#define R 2.2
#define S "Hello World"

void main()
{
	/*We now start to display the different values using the cout and the << operator */
	cout << "Int value:  " << val << endl;
	cout << "Char value : " << C << endl;
	cout << "Real value:  " << R << endl;
	cout << "Array of characters: " << S << endl;

	_getch();
}