//ex 4 lab 4


#define _CRT_SECURE_NO_WARNINGS

//libraries
#include <iostream>
#include <conio.h>

using namespace std;


//prototypes
void display_array(char[], int);
void read_input(char[], int);

void main()
{
	char arr[20];
	int n;
	printf("Give the length of the array: ");
	cin >> n;

	read_input(arr, n);//read array

	display_array(arr, n);

	_getch();

}

//read the array of characters
void read_input(char arr[], int n)
{
	int ind;
	for (ind = 0; ind < n; ind++)
		cin >> arr[ind];
}

//function to display he array using different escape sequences
void display_array(char arr[], int n)
{
	char tab = '\t'; //horizontal tab
	char ver = '\v'; //vertical tab
	char carr_ret = '\r'; //carriage return, moves the active position to the initial position of the current line
	int ind; //index for the array

	cout << "horizontal tab displaying" << endl;
	for (ind = 0; ind < n; ind++)
		cout << arr[ind] << tab;

	cout << endl << "vertical tab displaying" << endl;
	for (ind = 0; ind < n; ind++)
		printf("\v%c", arr[ind]);  //    why????
								   // cout << arr[ind] << ver;  //not working

	cout << endl << "displaying on a new line" << endl;
	for (ind = 0; ind < n; ind++)
		cout << arr[ind] << endl;

	cout << endl << "displaying using carriage return" << endl;
	for (ind = 0; ind < n; ind++)
		cout << arr[ind] << carr_ret;

}