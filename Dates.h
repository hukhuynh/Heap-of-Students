//header file for date class//
#ifndef DATES_H
#define DATES_H
#include <iostream>
using namespace std;
class Dates
{
	public:
	
	Dates();
	~Dates();

	int get_day();
	void set_day(int day);

	int get_month();
	void set_month(int month);
	
	int get_year();
	void set_year(int year);
		
	string get_date();
	void set_date(string date);
	
	private:
	
	int day;
	int month;
	int year;
	string date;
};//end class def
#endif
