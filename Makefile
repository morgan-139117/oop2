bbc: main.o LinkedList.o  Painting.o  string.o
	g++ -o abc main.o  LinkedList.o  Painting.o  string.o
main.o: main.cpp  LinkedList.cpp
	g++ -c main.cpp
LinkedList.o: LinkedList.cpp  Painting.h
	g++ -c LinkedList.cpp 
Painting.o:  Painting.cpp  Painting.h string.h
	g++ -c Painting.cpp 
string.o: string.cpp string.h
	g++ -c string.cpp

