bbc: main.o MLinkedList.o LinkedList.o  Painting.o  string.o
	g++ -o bbc main.o MLinkedList.o  LinkedList.o  Painting.o  string.o
main.o: main.cpp  MList.h
	g++ -c main.cpp
MLinkedList.o: MList.cpp  MList.h
	g++ -c MList.cpp -o MLinkedList.o
LinkedList.o: LinkedList.cpp  Painting.h LinkedList.h
	g++ -c LinkedList.cpp  
Painting.o:  Painting.cpp  Painting.h string.h
	g++ -c Painting.cpp 
string.o: string.cpp string.h
	g++ -c string.cpp
clean:
	rm -rf *o
