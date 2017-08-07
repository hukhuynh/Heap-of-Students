startHeapofStudents:Address.o Students.o Dates.o main.o
	g++ Address.o Students.o Dates.o main.o -o startHeapofStudents
main.o: main.cpp Students.h Dates.h Address.h
	g++ -c main.cpp
Address.o:Address.h Address.cpp
	g++ -c Address.cpp
Students.o: Students.h Students.cpp Address.h Dates.h
	g++ -c Students.cpp 
Dates.o:Dates.cpp Dates.h
	g++ -c Dates.cpp
clean:
	rm -f startHeapofStudents *.o
run: startHeapofStudents
	./startHeapofStudents
