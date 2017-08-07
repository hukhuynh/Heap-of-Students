//cpp file for Students object
#include "Students.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#define SIZE 50

using namespace std;

string Students::getf_name(){
	return fName;
}
void Students::setf_name(string fName){
	Students::fName = fName;
}

string Students::getl_name(){
	return lName;
}
void Students::setl_name(string lName){
	Students::lName = lName;
}

string Students::get_gpa(){
	return gpa;
}
void Students::set_gpa(string gpa){
	Students::gpa = gpa;
}

string Students::get_credhrs(){
	return credhrs;
}
void Students::set_credhrs(string credhrs){
	Students::credhrs = credhrs;
}

void Students::set_studentAddress(Address studentAddress){
	Students::studentAddress = studentAddress;
}
Address Students::get_studentAddress(){
	return studentAddress;
}

void Students::set_studentAddress2(Address address2){
	Students::address2 = address2;
}
Address Students::get_studentAddress2(){
	return address2;
}

void Students::set_studentCity(Address city){
	Students::city = city;
}
Address Students::get_studentCity(){
	return city; 
}

void Students::set_studentState(Address state){
	Students::state = state;
}
Address Students::get_studentState(){
	return state;
}

void Students::set_studentZip(Address zip){
	Students::zip = zip;
}
Address Students::get_studentZip(){
	return zip;
}

void Students::set_studentDob(Dates dob){
	Students::dob = dob;
}
Dates Students::get_studentDob(){
	return dob;
}
                  

void Students::set_student_Grad_date(Dates grad_date){
	Students::grad_date = grad_date;
}
 Dates Students::get_student_Grad_date(){
	return grad_date;
}
                   


void Students:: print_fullReport(ofstream& full){//reference to ofstream object as to avoid opening constantly
	full<<"Surname: "<<getl_name()<<"\nFirstName: "<<getf_name()<<endl;//for Addresses and Dates
	full<<"Student Address: "<<get_studentAddress().get_streetAddress()<<//student object accesses address/date
	"\nAddress 2: "<<get_studentAddress2().get_address2()<<"\nCity: " //object first and then that object accesses
	<<get_studentCity().get_city()<<"\nState: "<<get_studentState().get_state()<<"\nZip: "//their respective string/int
	<<get_studentZip().get_zip()<<"\nDate of Birth: "<<get_studentDob().get_date()<<"\nDate of Completion: "
	<<get_student_Grad_date().get_date()<<"\nGPA: "<<get_gpa()<<"\nCredit Hours Completed: "
	<<get_credhrs()<<"\n*************************************************************"<<endl;

		
}

void Students::print_shortReport(ofstream& shortRep){
	shortRep<<"Surname: "<<getl_name()<<"\nGiven Name: "<<getf_name()
	<<"\n"<<endl;
	
}

void Students::print_alphaReport(ofstream& alphaRep){
	alphaRep<<"Surname: "<<getl_name()<<"\nGiven Name: "<<getf_name()
	<<"\n"<<endl;
	
	
		}
		



	
	
	











Students::Students(){
	lName="";
	fName="";
	gpa="";
	
}

Students::~Students(){

}

