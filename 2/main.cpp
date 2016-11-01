#include "MilTime.h"
using namespace std;

int main(){
	
	// creates MilTime object
	MilTime time;//(1000, 30);
	
	// set time
	try
	{
		time.setTime(1000, 30);
	}
	catch(MilTime::BadHour)
	{
		cout << "Invalid hour input!";
	}
	catch(MilTime::BadSeconds)
	{
		cout << "Invalid seconds input!";
	}
	
	// creates TimeClock object
	TimeClock clockDiff;
	
	// set diff
	try
	{
		clockDiff.diff(300, 900);
	}
	catch(TimeClock::BadHour)
	{
		cout << "Invalid hour input!";
	}
	catch(TimeClock::BadSeconds)
	{
		cout << "Invalid seconds input!";
	}
	
	// display output
	cout << clockDiff.getStandhr() << endl;
	cout << clockDiff.getHour() << endl;
	
}
