#include <stdio.h>

#include <string.h>
#include "string.h"
#include <ctime>
#include <netinet/in.h>
#include <ostream>
#include <sstream>
#include <string>

#ifndef PAINTING_H_
#define PAINTING_H_
using namespace std;
class Painting{

    public:

	virtual Painting* copy() {
	// create new instance, invoke copy constructor implicitly, and return it
	// but don¡¯t do this if Base class is abstract.
	Painting* aPainting = new Painting(*this);
	return aPainting;
	}
	Painting(const Painting& src);
    Painting(){same_title=0;h=0;w=0;set_id();};
   // Painting(String& _fname, String& _lname,String _title):
   // 	fname(_fname),lname(_lname),title(_title){same_title=0;set_id();};
    Painting(String& _fname, String& _lname, String& _title, int _h, int _w ):
	fname(_fname),lname(_lname),title(_title),h(_h),w(_w){same_title=0;set_id();};
    virtual ~Painting(){};
    void deep_copy_(const Painting & src);
    bool operator==(const Painting&);//compare two paintings


    int timeval_to_msec(struct timeval *t);
    int current_msec();

    bool dup_painting(ulong _id);
    bool dup_painting(String _title, String _fname, String _lname);//same title and fname ,lname
    String get_title(){return title;};
    int title_number(){return same_title;};
    void incre_title_number(){same_title++;};
    void decre_title_number(){same_title--;};
    bool same_artist(String _fname, String _lname);

    ulong get_id(){return id;};
    void set_id(){
    	for (int i=0;i<10000000;i++)
             string d;
    	id=current_msec();};


    virtual std::string toString()
    		{
    			std::stringstream os(std::stringstream::out |
    				std::stringstream::app);
    			    os<<"                 <<=Base=Class=Information=>>"<<endl;
    			    os<<"                     .  Painting id: "<<id<<endl;
    			    os<<"                     .  first name: "<<fname<<endl;
    				os<<"                     .  last name: "<<lname<<endl;
    				os<<"                     .  title: "<<title<<endl;
    				os<<"                     .  height: "<<h<<endl;
    				os<<"                     .  weight: "<<w<<endl;
    				os<<"                 <<==Sub=Class=Information=>>"<<endl;
    				return os.str();
    		}
/*
    friend ostream& operator<<(ostream& os, Painting& f)
	{
		os<<"first name: "<<f.fname;
		os<<".  last name: "<<f.lname;
		os<<".  title: "<<f.title;
		os<<".  height: "<<f.h;
		os<<".  weight: "<<f.w<<endl;
	 	return os;
	}
  */
    friend std::ostream& operator<<(std::ostream& os, Painting* e){
    	/* 	  switch(e->type)
    	        {

    	                case POR_:
    	                        return operator<<(os, static_cast<HEmployee*>(e));
    	                case LAND_:
    	                        return operator<<(os, static_cast<SEmployee*>(e));
    	                case STILL_:
    	        }
    	*/
    		os << e->toString();
    		return os;
    }


    private :
        int same_title;
        ulong id;
        String  fname;
        String  lname;
        String  title;
        long h;
        long w;

};
#endif /* PAINTING_H_ */
