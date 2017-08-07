//main for Heap of Student//
#include "Students.h"
#include "Address.h"
#include "Dates.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#define SIZE 50
using namespace std;

void swap(Students*,Students*);//swap function taking in two ptr types//

int main()
{
	string test;
	ifstream infile("students.dat");
	ofstream full("fullReport.txt");
	ofstream shortRep("shortReport.txt");
	ofstream alphaRep("alphaReport.txt");
	
	getline(infile,test);//takes first test line into string test
		
	int i;
	Students *stud = new Students[SIZE];//initialize classes
	Address *add = new Address[SIZE];
	Dates *date = new Dates[SIZE];

	for(i=0;i<SIZE;i++){
		string temp1,temp2,fName,lName,gpa,credhrs,address1,
		address2,city,state,zip,bday,cday;

		int day,month,year;

		stringstream ss1;
	
		getline(infile,temp1);//takes whole line and stores in temp str
		ss1<<temp1;//temp str goes to string stream

		getline(ss1,lName,',');//string stream line parsed using delimiters 
		getline(ss1,fName,',');
	
		getline(ss1,address1,',');	
		getline(ss1,address2,',');
		getline(ss1,city,',');
		getline(ss1,state,',');
		getline(ss1,zip,',');
		getline(ss1,bday,',');
		getline(ss1,cday,',');
		getline(ss1,gpa,',');
		getline(ss1,credhrs);//end of line to be parsed

	//cout<<stud[i].get_studentAddress().get_streetAddress();
	
		stud[i].setl_name(lName);//setters for student objects
		stud[i].setf_name(fName);

		add[i].set_streetAddress(address1);//setters for address objects
		add[i].set_address2(address2);
		stud[i].set_studentAddress(add[i]);//setters for student objects for an address object
		stud[i].set_studentAddress2(add[i]);

		add[i].set_city(city);
		stud[i].set_studentCity(add[i]);
	
		add[i].set_state(state);
		stud[i].set_studentState(add[i]);

		add[i].set_zip(zip);
		stud[i].set_studentZip(add[i]);

		date[i].set_date(bday);//setters for dates objects
		stud[i].set_studentDob(date[i]);//setters for student objects taking in a date object
		date[i].set_date(cday);
		stud[i].set_student_Grad_date(date[i]);	
	
		stud[i].set_gpa(gpa);

		stud[i].set_credhrs(credhrs);		
	
//	full<<stud[i].getl_name()<<", "<<stud[i].getf_name()<<endl;		
	
	}//end if loop to set data for student objects
	int reply;
	int x,y,z;
	bool keepGoing = true;
	while(keepGoing){//keeps going until quit
		cout<<"*******************************"<<endl;
		cout<<"*Welcome to Heap of Students! *"<<endl;//menu
		cout<<"*Press 1: full student report *"<<endl;
		cout<<"*Press 2: short student report*"<<endl;
		cout<<"*Press 3: alphabatized student report"<<endl;//note after alphabetatizing
		cout<<"*Press 4: quit                *"<<endl;//student array, applies to rest of reports
		cout<<"******************************"<<endl;//as well
	
		cin>>reply;
		if(reply==1){
			for(x=0;x<SIZE;x++){
				stud[x].print_fullReport(full);
			
			}
			cout<<"Your report is now ready for you"<<endl;
		}//end option 1	
	
		else if(reply==2){
			for(x=0;x<SIZE;x++){
				shortRep<<"Student "<<x+1<<endl;
				stud[x].print_shortReport(shortRep);
		
			}
			cout<<"Your report is now ready for you"<<endl;
		}//end option 2
	
		else if(reply==3){
			for(x=0;x<SIZE-1;x++){//bubble sort using compare function
				for(y=0;y<SIZE-1;y++){
					if(stud[y].getl_name().compare(stud[y+1].getl_name())>0){
						swap(stud+y,stud+y+1);//swaps if first element calling compare is less than second element being compared
					
					}		
				}
			}
			for(z=0;z<SIZE;z++){//uses swapped student array to print out alphabetatized list by last names
				stud[z].print_alphaReport(alphaRep);
			}
			cout<<"Your report is now ready for you"<<endl;
		}//end option 3
		else if(reply==4){
				keepGoing = false;
			}//end option 4
		else{
			cout<<"Sorry I don't know what you want"<<endl;
		}//end else
	}//end while

	full.close();//closes txt files
	shortRep.close();
	alphaRep.close();
	delete[]date;//deallocates memory
	delete[]add;
	delete[]stud;
	

return 0;
}//end main

void swap(Students*stud1,Students*stud2){//basic swap prototype
	Students temp;
	temp = *stud1;
	*stud1 = *stud2;
	*stud2 = temp;
	}//end swap function
	
		
			
