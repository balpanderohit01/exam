/*1:Create Date class with members day,month ,year.
Write no argument and parameterised constructor .
Create two objects and initialize them using no 
argument and parameterised constructor
respectively.Print date using display function.*/

#include<iostream>
using namespace std;

class Date
{
	int day,month,year;
	public :
		Date();
		Date(int day,int month, int year);
		void display();
};






