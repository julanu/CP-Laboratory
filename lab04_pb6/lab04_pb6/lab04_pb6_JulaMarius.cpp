/* Laboratory 4 Problem 6
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
#define DIM 10

void main()
{
	int arr[DIM], i;
	/* initializing the array with some values */
	for (i = 0; i < DIM; i++)
		arr[i] = i;

	cout << "Printing the array" << endl;
	for (i = 0; i < DIM; i++)
		cout << arr[i] << " ";
      cout << endl;


	cout << "Int value  " << val << endl;
	cout << "Char value  " << C << endl;
	cout << "Real value  " << R << endl;


	_getch();
}