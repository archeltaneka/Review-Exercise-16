#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

// define Date class
class Date{
	private:
		int month = 1;
		int day = 1;
		int year = 1970;
		
		const string monthName[12] = {"Jan", "Feb", "Mar", "April", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};
	public:
		class NegativeMonth{};
		class NegativeDate{};
		
		Date()
		{
			day = 0;
			month = 0;
			year = 0;
		}
		Date(int day, int month, int year);
		void printFirstForm();
		void printSecondForm();
		void printThirdForm();
		
	void setDate(int day, int month, int year)
	{
	if(day < 1 || day > 31)
	{
		throw NegativeDate();
	} else {
		this->day = day;
	}
	
	if(month < 1 || month > 12)
	{
		throw NegativeMonth();
	} else {
		this->month = month;
	}
	
	this->year = year;
	}	
};

void Date::printSecondForm()
{
	cout << monthName[month-1];
}

#endif
