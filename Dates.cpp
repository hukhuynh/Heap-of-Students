//methods for class Dates//
#include "Dates.h"

using namespace std;

int Dates::get_day(){
	return day;
}
void Dates::set_day(int day){
	Dates::day = day;
}

void Dates::set_month(int month){
	Dates::day = day;
}
int Dates::get_month(){
	return month;
}

void Dates::set_year(int year){
	Dates::year = year;
}
int Dates::get_year(){
	return year;
}

void Dates::set_date(string date){
	Dates::date = date;
}
string Dates::get_date(){
	return date;
}

Dates::Dates(){
}

Dates::~Dates(){

}
