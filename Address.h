//header file for address  object//
#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
#include <string>
using namespace std;
class Address
{
	public:
	
	string get_streetAddress();
	void set_streetAddress(string streetAddress);

	string get_address2();
	void set_address2(string address2);
	
	string get_city();
	void set_city(string city);

	string get_state();
	void set_state(string state);

	string get_zip();
	void set_zip(string zip);
	
	Address();
	~Address();
	
	private: 
	string streetAddress;
	string address2;
	string city;
	string state;
	string zip;

};//end class def
#endif
