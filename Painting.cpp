#include "Painting.h"





int Painting::timeval_to_msec(struct timeval *t) {
	return t->tv_sec*1000+t->tv_usec/1000;
}

int Painting::current_msec() {
	struct timeval t;
	gettimeofday(&t,0);
	return timeval_to_msec(&t);
}


bool Painting::same_artist(String _fname, String _lname){
     if (  fname == _fname && lname == _lname ){
      
      return true;

}else{

     return false;
};

}


bool Painting:: dup_painting(ulong _id){

      if ( id == _id ){

      return true;

}else{

     return false;
};

}


bool Painting:: dup_painting(String _title, String _fname, String _lname){

      if ( title == _title && fname == _fname && lname == _lname ){
      
      return true;

}else{

     return false;
};

}



bool Painting:: operator==(const Painting & obj){
      
      if( fname == obj.fname
      	  && lname == obj.lname
      	   && title == obj.title 
      	    && h == obj.h 
      	     && w == obj.w )
      	return true;
      return false;

};

Painting::Painting(const Painting & src){

    if(NULL!=&src){
   
      fname=src.fname;
      lname=src.lname;
      id = src.id;
      title=src.title;
      lname=src.lname;
      h=src.h;
      w=src.w;

    }
};

void Painting::deep_copy_(const Painting & src){

    if(&src){
   
      fname=src.fname;
      lname=src.lname;
      char tmp[10];
      char ccopy[]=" version2";
      //Painting::incre_title_number();
      //sprintf(tmp,"%d",Painting::title_number());
      String scopy=String(ccopy);
    //  String stmp=String(tmp);
      title=src.title + scopy;
     // title=title;
      lname=src.lname;
      h=src.h;
      w=src.w;

    }
};




/*
int main(){

  String first;
  String last;
  String title;
  int h;
  int w;
  cin>>first>>last>>title>>h>>w;

  Painting *p=new Painting(first,last,title,h,w);

  Painting *q=new Painting (*p);
    cout<<"q"<<*q;

    delete(p);

    cout<<*q;

    Painting *o=new Painting(*q);


if(*o==*o)
      cout<<"*o==*q";
    else
      cout<<"noo";

    if(*o==*q)
      cout<<"*o==*q";
    else
      cout<<"noo";
    if(o==q)
      cout<<"o==q";
    else
            cout<<"noo";

          cout<<o->get_title();
  return 0; 
}

*/
