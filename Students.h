//header file for Students class//
#ifndef STUDENTS_H
#define STUDENTS_H
#include <iostream>
#include <string>
#include <fstream>
#include "Dates.h"
#include "Address.h"

class Students
{

	public:
	Students();

	~Students();
	
	std::string getf_name();
	void setf_name(std::string fName);
	
	std::string getl_name();
	void setl_name(std::string lName);

	std::string get_gpa();
	void set_gpa(std::string gpa);
	
	std::string get_credhrs();
	void set_credhrs(std::string credhrs);

	void set_studentAddress(Address studentAddress);
	Address get_studentAddress();
	
	void set_studentAddress2(Address address2);
	Address get_studentAddress2();

	void set_studentCity(Address city);
	Address get_studentCity();
	
	void set_studentState(Address state);
	Address get_studentState();
	
	void set_studentZip(Address zip);
	Address get_studentZip();

	void set_studentDob(Dates dob);
	Dates get_studentDob();

	void set_student_Grad_date(Dates grad_date);
	Dates get_student_Grad_date();

	void print_fullReport(ofstream&);
	void print_shortReport(ofstream&);
	void print_alphaReport(ofstream&);
//	void parse_Students();	
	
	private:
       	std::string lName;
	std::string fName;
	std::string gpa;
	std::string credhrs;
	Address studentAddress;
	Address address2;
	Address city;
	Address state;
	Address zip;
	Dates dob;
	Dates grad_date;
	
	
};//end of class def
#endif
