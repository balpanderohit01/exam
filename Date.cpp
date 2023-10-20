#include<iostream>
#include"classDate.h"
using namespace std;


	
		Date::Date()
		{
			cout<<"this is default const"<<endl;
			day=01;
			month=01;
			year=1990;
		}
		Date::Date(int day,int month, int year){
			cout<<"this is para const"<<endl;
			this->day=day;
			this->month=month;
			this->year=year;
		}
		void Date::display()
		{
			cout<<"Day :"<<day<<endl;
			cout<<"month :"<<month<<endl;
			cout<<"year :"<<year<<endl;
		}
		

