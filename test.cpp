//============================================================================
// Name        : test.cpp
// Author      : a
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include <netinet/in.h>
#include "String.h"
#include "Portrait.h"
#include "Landscape.h"
#include "Still.h"
#include "LinkedList.h"

using namespace std;

/*
ulong timeval_to_msec(struct timeval *t) {
	return t->tv_sec+t->tv_usec;
};

int current_msec() {
	struct timeval t;
	gettimeofday(&t,0);
	return timeval_to_msec(&t);
};


int main() {


	  String _fname;
	  String _lname;
	  String _title;
	  int _h;
	  int _w;

	  String temp;

	   cout<<"Please input first name"<<endl;

	   cin>>_fname;
	     cout<<"Please input last name"<<endl;
	   cin>>_lname;
	     cout<<"Please input title"<<endl;
	   cin>>_title;
	     cout<<"Please input height name"<<endl;
	   cin>>_h;
	   cout<<"Please input weight name"<<endl;
	   cin>>_w;

   cout<<current_msec();

   String  cc("12");
   int tt=2;

Painting *a;
Painting *b;
Painting *c;



a= new Portrait(_fname,_lname,_title,_h,_w,tt,cc);

b= new Landscape (_fname,_lname,_title,_h,_w,cc);

c= new Still (_fname,_lname,_title,_h,_w,0);

/*
Painting *d;
Painting *e;
Painting *f;





Portrait *p;
p = dynamic_cast<Portrait*>(a) ;
if (p != NULL) {

	d=p->copy();

}

Portrait *z;
z = dynamic_cast<Portrait*>(d) ;
if (z != NULL) {


   cout<<z<<endl;
}


   cout << a << endl;
   cout << b << endl;
   cout << c << endl;


Portrait *p;
p = dynamic_cast<Portrait*>(a) ;
if (p != NULL) {
   cout<<p<<endl;
}

Landscape *q;
q = dynamic_cast<Landscape*>(a) ;
if (q != NULL) {
   cout<<q<<endl;
}





   PLinkedList pl;
  bool res = pl.search_node(_title,_fname,_lname);
  if(res == true){
cout<<" dup"<<endl;
  }else{
	  cout<<"not dup"<<endl;
  }

pl.push_back(a);
cout<<"after 1"<<endl;
pl.push_back(b);
cout<<"after 2"<<endl;
pl.push_back(c);
cout<<"print "<<endl;
pl.print();

cout<<"deleteNode "<<endl;
int id;
cout<<"Please input id"<<endl;
cin>>id;
pl.deleteNode(id);
cout<<"print "<<endl;
pl.print();

cout<<"delete "<<endl;


/*



 res = pl.search_node(_title,_fname,_lname);
if(res == true){
cout<<"here";
}else{
	  cout<<"there";
}

res = pl.have_artist(_fname,_lname);

if(res == true){
cout<<"here";
}else{
	  cout<<"there";
}

res = pl.have_artist(_fname,_lname);

if(res == true){
cout<<"here";
}else{
	  cout<<"there";
}

   delete a;
   delete b;
   delete c;

	return 0;
}
*/
