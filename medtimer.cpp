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

int main ()
{
	int hour;
	int minute;
	int new_hr;
	

	cout << "please enter what hour patch was applied. " << endl;
	cin >> hour;
	cout << "please enter the minutes when patch was applied. " << endl;
	cin >> minute;
	new_hr = hour + 9;

	if (new_hr > 12)
	{
		//checking for am pm
		new_hr = new_hr - 12;
	}
	cout << "You should remove patch at " << new_hr << ":" << minute << endl;
	return 0;
}

