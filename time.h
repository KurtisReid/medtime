#include <iostream>
using namespace std;


class time
{
	public:
		time(int hr, int min);
		int get_hour();
		void set_hour(int new_hr);
		int get_minute();
		void set_minute(int new_min);
		void check_for_am_pm();
		void check_hour();
		void check_minute();
	
	private:
		int hour;
		int minute;
	
};