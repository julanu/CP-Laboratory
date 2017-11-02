/* Laboratory 4 Problem 4
Author: Jula Marius	
Date: 29/10/2017 */
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>

using namespace std;


/*prototypes*/
void display_array(char[], int);
void read_input(char[], int);

/* main function */
void main()
{
	char arr[50];
	int n;

	printf("Give the length of the array: ");
	cin >> n;

	read_input(arr, n); 

	display_array(arr, n);

	_getch();

}

/* reading the array of characters that will be displayed */
void read_input(char arr[], int n)
{
	int ind;
	for (ind = 0; ind < n; ind++)
		cin >> arr[ind];
}

/* function to display the array of character using different escape sequences */
void display_array(char arr[], int n)
{
	char tab = '\t';     /* horizontal tab */
	char ver = '\v';     /* vertical tab */
	char carr_ret = '\r';  /* carriage return, escape sequence which moves the active position of the cursos 
						     to the initial position of the current line */

	int ind; /* index for the array*/

	cout << "horizontal tab displaying" << endl;
	for (ind = 0; ind < n; ind++)
		cout << arr[ind] << tab;

	cout << endl << "vertical tab displaying" << endl;
	for (ind = 0; ind < n; ind++)
		printf("\v%c", arr[ind]);   /* cout << arr[ind] << ver;  not working */

	cout << endl << "displaying on a new line" << endl;
	for (ind = 0; ind < n; ind++)
		cout << arr[ind] << endl;

	cout << endl << "displaying using carriage return" << endl;
	for (ind = 0; ind < n; ind++)
		cout << arr[ind] << carr_ret;

}