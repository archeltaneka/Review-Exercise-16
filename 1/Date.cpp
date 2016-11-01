#include <iostream> 
#include <string>
#include "Date.h"
using namespace std;

void Date::printFirstForm()
{
	cout << month << "/" << day << "/" << year;
}

Date::Date(int day, int month, int year)
{
	if(day < 1 && day > 31)
	{
		throw NegativeDate();
	} else {
		this->day = day;
	}
	
	if(month < 1 && month > 12)
	{
		throw NegativeMonth();
	} else {
		this->month = month;
	}
	
	this->year = year;
}


