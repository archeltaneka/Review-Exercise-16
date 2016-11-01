#ifndef TIME_H
#define TIME_H

// defines Time class
class Time{
	protected:
		int hours;
		int minutes;
		int seconds;
	public:
		class BadHour{};
		class BadSeconds{};
		
		// default constructor
		Time()
		{
			hours = 0;
			minutes = 0;
			seconds = 0;
		}
		
		// constructor 2
		Time(int hour, int minute, int second)
		{
			// set hour or throw an exception
			if(hour < 0 || hour > 2359)
			{
				throw BadHour();
			} else {
				hours = hour;
			}
			// set minute
			minutes = minute;
			// set second or throw an exception
			if(second < 0 || second > 59)
			{
				throw BadSeconds();
			} else {
				seconds = second;
			}
		}
		
		// get hours, minutes and seconds
		int getHours() const
		{
			return hours;
		}
		int getMinutes() const
		{
			return minutes;
		}
		int getSeconds() const
		{
			return seconds;
		}
};

#endif
