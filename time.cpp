#include <iostream>
#include "time.h"
using namespace std;

time(int hr, int min)
{
	hour = hr;
	minute = min;
}

void time::check_for_am_pm()
{
	if (hour > 12 && hour < 24)
	{
		//checking for am pm
		hour -= 12;
		am_pm = "pm";
	}
	else
	{
		am_pm = "am";
	}
	
}
void time::check_hour()
{
	if (hour < 0 || hour > 23)
	{
		cout << "error. impossible time: hours" << endl;
		exit(1);
	}
}
void time::check_minute()
{
	if (minute < 0 || minute > 59)
	{
		cout << "error. impossible time: minutes" << endl;
		exit(1);
	}
}