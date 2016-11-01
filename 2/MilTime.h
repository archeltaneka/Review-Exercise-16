#ifndef MILTIME_H
#define MILTIME_H

#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

// creates MilTime class derived from Time class
class MilTime : public Time
{
	protected:
		int milHours;
		int milSeconds;
		string timeString;	
	public:
		class BadHour{};
		class BadSeconds{};
		
		// default constructor
		MilTime()
		{
			milHours = 0;
			milSeconds = 0;
		}
		
		// constructor 2
		MilTime(int h, int s)
		{
			// set milHours or throw exception
			if(milHours > 2359 || milHours < 0)
			{
				throw BadHour();
			} else {
				hours = milHours;
				
				if(milHours > 1259)
				{
					milHours = (milHours - 1200) / 100;
				} else {
					
					milHours = milHours / 100;
				}
				
				// print for am and pm
				if(milHours >= 1200)
				{
					timeString = "a.m";
				} else {
					timeString = "p.m";
				}
			}
			
			// set milSeconds or throw exception
			if(milSeconds > 59 || milSeconds < 0)
			{
				throw BadSeconds();
			} else {
				seconds = milSeconds;
			}
			
			// set minutes
			minutes = milHours % 100;
		}
		
		// set time
		void setTime(int milHours, int milSeconds)
		{
			// set milHours or throw exception
			if(milHours > 2359 || milHours < 0)
			{
				throw BadHour();
			} else {
				hours = milHours;
				
				if(milHours > 1259)
				{
					hours = (milHours - 1200) / 100;
				} else {
					hours = milHours / 100;
				}
				
				// print for am and pm
				if(milHours >= 1200)
				{
					timeString = "a.m";
				} else {
					timeString = "p.m";
				}
			}
			
			// set milSeconds or throw exception
			if(milSeconds > 59 || milSeconds < 0)
			{
				throw BadSeconds();
			} else {
				seconds = milSeconds;
			}
			
			// set minutes
			minutes = milHours % 100;
			
		}
		
		// get hour(military format)
		string getHour()
		{
			return to_string(milHours) + ":" + to_string(milSeconds);
		}
		
		// get hour(standard format)
		string getStandhr()
		{
			if(hours < 10 && minutes < 10)
			{
				return "0" + to_string(hours) + ":" + "0" + to_string(minutes) + ":" + to_string(seconds) + timeString;
			}
			if(hours < 10)
			{
				return "0" + to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds) + timeString;
			}
			if(minutes < 10)
			{
				return to_string(hours) + ":" + "0" + to_string(minutes) + ":" + to_string(seconds) + timeString;
			}
		}
		
		
};

// creates TimeClock class derived from MilTime class
class TimeClock : public MilTime
{
	private:
		int start;
		int end;
		int difference;
	public:
		class BadHour{};
		class BadSeconds{};
		
		// default constructor
		TimeClock()
		{
			start = 0;
			end = 0;
			difference = 0;
		}
		
		// set the difference
		void diff(int start, int end)
		{
			difference = end - start;
			setTime(difference);
		}
};


#endif
