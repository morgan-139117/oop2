#include "MList.h"

/* User input function */
     

int main(){

  String _fname;
  String _lname;
  String _title;
  int _h;
  int _w;

  MLinkedList mlist;


  bool dup = false;
  bool del = false;
  char ch;
  String temp;

 while(1)
 {
  cout<<"                            Menu"<<endl;
  cout<<"                      a.Add New Painting"<<endl;
  cout<<"                      r.Remove a Painting"<<endl;
  cout<<"                      d.Delete all Paintings by artist"<<endl;  
  cout<<"                      i.List all Paintings"<<endl;
  cout<<"                      c.Copy a Painting"<<endl;
  cout<<"                      q.Quit"<<endl;
  cout<<"                      Please choose: ";
  cin>>ch;

   dup = false;
   del = false;
  switch(ch)
  {
    
  case'a':{cout<<"Add New Painting"<<endl;


   cout<<"Please input first name"<<endl;
   cin>>temp;
   cin>>_fname;
     cout<<"Please input last name"<<endl;
   cin>>_lname;
     cout<<"Please input title"<<endl;
   cin>>_title;
     cout<<"Please input height name"<<endl;
   cin>>_h;
   cout<<"Please input weight name"<<endl;
   cin>>_w;
    
  mlist.add_painting(_fname,_lname,_title,_h,_w);
 
  break;};
  case'i':{cout<<"*****************Painting information*****************\n";
  cin>>temp;
  mlist.print();

  break;};
  case'r':{cout<<"Removes a Painting\n";
   cout<<"Please input first name"<<endl;
   cin>>temp;
   cin>>_fname;
   cout<<"Please input last name"<<endl;
   cin>>_lname;
   cout<<"Please input title"<<endl;
   cin>>_title;
   mlist.deleteNode(_title,_fname,_lname);
  break;};
  case'c':{cout<<"Copy a Painting\n";
   cout<<"Please input first name"<<endl;
   cin>>temp;
   cin>>_fname;
     cout<<"Please input last name"<<endl;
   cin>>_lname;
     cout<<"Please input title"<<endl;
   cin>>_title;
   mlist._copy_node(_title,_fname,_lname);
  break;
};
   case'd':{cout<<"Delete all Paintings by artist\n";
   cout<<"Please input first name"<<endl;
   cin>>temp;
   cin>>_fname;
     cout<<"Please input last name"<<endl;
   cin>>_lname;

   mlist.delete_all_node(_fname,_lname);

  break;
};


  case'q':return 0;
  }
 }

  return 0;
}
