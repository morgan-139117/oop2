#include <stdio.h>
#include <iostream>
#include <string.h>

#ifndef STRING_H_
#define STRING_H_
using namespace std;
class String{
   
	private: char* string;

	public: 

    //constructor

		String(){string=NULL;};
		~String(){ delete[] string;};
		String(const char* tmp);
        String(const String& src);
        void clear(){delete string;};

	    String& operator=(const String & src);
	    String operator+(const String &src)const;
	    bool operator==(const String&);
	   
        friend ostream& operator<<(ostream& os, const String &f);
        friend istream& operator>>(istream& is, String &f);
};


#endif /* STRING_H_ */
