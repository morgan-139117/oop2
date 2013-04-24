#include <stdio.h>
#include <iostream>
#include <string.h>
#include "string.h"

class Painting{

    public:
    int title_number(){return same_title;};
    void incre_title_number(){same_title++;};
    void decre_title_number(){same_title--;};
    bool same_artist(String _fname, String _lname);
    String get_title(){return title;};
    Painting(){same_title=0;};
    Painting(String& _fname, String& _lname, String& _title, int _h, int _w):
	fname(_fname),lname(_lname),title(_title),h(_h),w(_w){};
	Painting(const Painting& src);
    ~Painting(){};
    void deep_copy_(const Painting & src);
    bool dup_painting(String _title, String _fname, String _lname);//same title and fname ,lname


    bool operator==(const Painting&);//compare two paintings

    friend ostream& operator<<(ostream& os, Painting& f)
	{
		os<<"first name: "<<f.fname;
		os<<".  last name: "<<f.lname;
		os<<".  title: "<<f.title;
		os<<".  height: "<<f.h;
		os<<".  weight: "<<f.w<<endl;
	 	return os;
	}
  
    private :
        int same_title;
        String  fname;
        String  lname;
        String  title;
        long h;
        long w;

};