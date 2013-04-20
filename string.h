#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
class String{
   
	private: char* string;

	public: 

    //constructor
		String(){string=NULL;};
		~String(){ delete[] string;};
		String(const char* tmp);
        String(const String& src);

	    String& operator=(const String & src);
	    String operator+(const String &src)const;
	    bool operator==(const String&);
	    bool same_title(char* obj);

        friend ostream& operator<<(ostream& os, const String &f);
        friend istream& operator>>(istream& is, String &f);
};
