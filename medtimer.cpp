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
#include "time.h"
using namespace std;

//void check_for_am_pm(int hour, int minute);
void patch_removal(int hour, int minute);
void apply_patch_before(int hour, int minute);
void patch_kick_in(int hour, int minute);
//void hour_check(int hour);

/*struct time
{
	int hour;
	int minute;
};*/




int main()
{
	
	time applied;//time patch was applied
	int hour;
	int minute;
	cout << "please enter what hour patch was applied. " << endl;
	cin >> hour;
	cout << "please enter the minutes when patch was applied. " << endl;
	cin >> minute;
	applied.set_hour(hour);
	applied.set_minute(minute);
	applied.check_hour();
	applied.check_minute();
	applied.check_for_am_pm();
	

	patch_removal(applied.hour, applied.minute);
	apply_patch_before(applied.hour, applied.minute);
	patch_kick_in(applied.hour, applied.minute);
	

	
	
	return 0;
}

/*time apply_patch(time applied)
{
	//User inputs hour and minute patch was applied. Input is stored in struct and returned.
	//Pre: time structure has hour
	//Post: 
	
	int hour;
	int minute;
	cout << "please enter what hour patch was applied. " << endl;
	cin >> hour;
	cout << "please enter the minutes when patch was applied. " << endl;
	cin >> minute;
	
	return applied;
}*/



/*void check_for_am_pm(time applied)
{
	
	if (applied.hour > 12)
	{
		//checking for am pm
		applied.hour -= 12;
		
		//check again
		check_for_am_pm(applied);
	}
	
}*/




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
void apply_patch_before(int hour, int minute)
{
	//when to apply pacth for it to be effective by specified time
	hour -= 2;
	cout << "Apply patch before " << hour << ":" << minute << " for it to be effective";
}

/*void hour_check(int hour) 
{
	if (hour > 12 || hour < 0)
	{
		cout << "Hour is not valid" << endl;
	}
}*/

