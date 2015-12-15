/*
	time(int hr, int min);
	//constructor
	
	
	
	int get_hour() {return hour;}
	//pre: hour has value
	
	
	void set_hour(int new_hr){hour = new_hr;}
	
	
	int get_minute(){return minute;}
	
	
	void set_minute(int new_min){minute = new_min;}
	
	
	void check_for_am_pm();
		//Pre: 0 < hour < 24
		
		
	void check_hour();
	
	
	void check_minute();




*/

#include <iostream>
using namespace std;


class time
{
	public:
		time(int hr, int min);
		int get_hour() {return hour;}
		void set_hour(int new_hr){hour = new_hr;}
		int get_minute(){return minute;}
		void set_minute(int new_min){minute = new_min;}
		void check_for_am_pm();
		//Pre: 0 < hour < 24
		void check_hour();
		void check_minute();
	
	private:
		int hour;
		int minute;
		string am_pm;
	
};