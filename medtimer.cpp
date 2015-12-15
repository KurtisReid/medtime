/*
	This is an application I mad to help me keep track of when I should remove my medication
	The medication is only supposed to be applied for 9 hours.
	This is a basic version.

	Future updates:
		am pm control
		input hour greater than 12 detection
		input minute greater than 59 or less than 0 detection
*/
#include <iostream>
using namespace std;

void check_for_am_pm(int hour, int minute);
void patch_removal(int hour, int minute);
void patch_kick_in(int hour, int minute);
void hour_check(int hour);






int main()
{
	time applied;//time patch was applied
	
	

	

	
	
	return 0;
}

time apply_patch(time applied)
{
	//User inputs hour and minute patch was applied. Input is stored in struct and returned.
	//Pre: time structure has hour
	//Post: 
	cout << "please enter what hour patch was applied. " << endl;
	cin >> applied.hour;
	cout << "please enter the minutes when patch was applied. " << endl;
	cin >> applied.minute;
	return applied;
}

void check_for_am_pm(int hour, int minute)
{
	
	if (hour > 12)
	{
		//checking for am pm
		hour -= 12;
	}
	
}
void patch_removal(int hour, int minute)
{
	hour += 9;
	check_for_am_pm(hour, minute);
	cout << "You should remove patch at " << hour << ":" << minute << endl;
}

void patch_kick_in(int hour, int minute)
{
	hour += 2;
	cout << "The patch willkick in at " << hour << ":" << minute << endl;
}

void hour_check(int hour) 
{
	if (hour > 12 || hour < 0)
	{
		cout << "Hour is not valid" << endl;
	}
}

