#include "string.h"

ostream& operator<<(ostream& os,const String& f){

    os<< f.string;
    return os;
};

istream& operator >>(istream & IS,String& str)
{
   /* char* input = new char[100];
    IS.getline(input,100);
    
    int i = 0;
    while(input[i] != '\0')
    {i++;}
    delete[]str.string;
    str.string = new char[(i+1)];
    for(int j = 0; j < (i) ; j++)
    {
        str.string[j] = input[j];
    }
    str.string[i] = '\0';
    delete[]input;
    return IS;*/

    char* input = new char[1000];
    IS.getline(input,1000);

    str.string = new char[strlen(input)+1];
    memcpy(str.string,input,strlen(input)+1);


    delete[] input;
    return IS;

}
/*
istream& operator>>(istream& is, String& f){
    
    if(f.string)
    	delete [] f.string;
    

    char * tmp =new char[50];
      is.getline(tmp,50);
      f.string=new char[strlen(tmp)+1];
       strcpy(f.string,tmp);
      delete [] tmp;


    return is;
}*/

String::String(const char* tmp){
	
	if(!tmp){
          string= 0 ;
	}else{
	     string=new char[strlen(tmp)+1];
	     strcpy(string,tmp);

	}
}

String::String(const String& tmp){
	

	
	if(!tmp.string ){
		string= 0 ;
	}else{

    string= new char[strlen(tmp.string)+1];
    strcpy(string,tmp.string);
    }
}

String& String::operator=(const String& src){
	if(this!=&src){

		if(string)
				delete[] string;
			if(!src.string) 
				string = 0 ;
			else 
				string = new char[strlen(src.string)+1];
			    strcpy(string,src.string);
		
	}
	return *this;
}

String String::operator +(const String &src) const{
	String  tmp;

		if(NULL ==src.string)
			tmp= *this;
		else if(NULL ==string)
			tmp=  src;
	else {

		tmp= new char[strlen(src.string)+strlen(string)+1];
		strcpy(tmp.string,string);
		strcat(tmp.string,src.string);
	}
    return tmp;
}


bool String:: operator == (const String & obj){

	if( 0 == strcmp(string,obj.string))
		return true;	 
	return false;
	
}
/*
int main(void) {
    char abc[]="asw";
  String *a= new String(abc);
    String *b=new String(*a);
    String *c=new String(abc);
    String *d=new String("ddd");
    String *e=new String("eee");

    String z; String w=String(abc);
    z=w;
    cout<<"w"<<w;
    cout<<"z"<<z;

    String f=String();
    cin>>f;
    cout<<"f"<<f;
cin>>f;
    cout<<"f"<<f;

    cout<<"a"<<*a<<endl;
    cout<<"b"<<*b<<endl;
	cout<<"second"<<endl;
//delete(a);//delete a to test if b is deep copied from a
	*a=*d;
	cout<<"a"<<*a<<endl;
    
	cout<<"b"<<*b<<endl;

    if (a==b)
    	cout<<"a=b";
    else
    	cout<<"a!=b";
    
    *a=*b;
   cout<<"a==b"<<endl;
    if (a==b)
    	cout<<"a=b";
    else
    	cout<<"a!=b";
   //delete(a);
//    cout<<"see b after delete a"<<*b<<endl;
   // *a=*a+*e;
    cout<<*a<<endl;

	return 0;
}


*/
