//cpp file for address object
#include "Address.h"
#include <string>
#include <iostream>
using namespace std;

string Address::get_streetAddress(){
	return streetAddress;
}
void Address::set_streetAddress(string streetAddress){
	Address::streetAddress = streetAddress;
}

string Address::get_address2(){
	return address2;
}
void Address::set_address2(string address2){
	Address::address2 = address2;
}

string Address::get_city(){
	return city;
}
void Address::set_city(string city){
	Address::city = city;
}

string Address::get_state(){
	return state;
}
void Address::set_state(string state){
	Address::state = state;
}

string Address::get_zip(){
	return zip;
}
void Address::set_zip(string zip){
	Address::zip = zip;
}

Address::Address(){
}

Address::~Address(){
}
