//ex 3 lab 4

#define _CRT_SECURE_NO_WARNINGS


//libraries
#include <iostream>
#include <conio.h>

#define value 2   //we defined a value

using namespace std;

void print_value(int);    //prototype


//main function
void main()
{

	print_value(value);

	_getch();

}

//function to print a given value
void print_value(int a)
{
	cout << "The value is " << a;
}
