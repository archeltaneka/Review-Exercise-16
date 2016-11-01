#include "Date.h"

int main()
{
	Date newDate;
	
	try{
		
		newDate.setDate(32, 12, 2014);
		
	}
	catch(Date::NegativeMonth)
	{
		cout << "Error: Negative month!";
	}
	catch(Date::NegativeDate)
	{
		cout << "Error: Negative date!";
	}

	
	return 0;
}
