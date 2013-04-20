#include "LinkedList.cpp"

class Manager{

   
};

int main(){


  typedef LinkedList<Painting> PaintingList;
  typedef LinkedList<PaintingList> ArtistList;

	String _fname;
	String _lname;
	String _title;
	String fs;
	int _h;
	int _w;
  
   cin>>_fname>>_lname>>_title>>_h>>_w;
   

   Painting b=Painting(_fname,_lname,_title,_h,_w);
Painting c=b;
Painting d=b;
Painting e=b;
Painting z;

z.deep_copy_(b);

  PaintingList plist1;
  ArtistList artist;
  artist.push_back(plist1);
  plist1.push_back(b);
  plist1.push_back(c);
  plist1.push_back(d);
  plist1.push_back(e);
  plist1.push_back(z);
 
cout<<"abc";
	plist1.print();
cin>>fs;
cin>>fs;

//plist1.deleteNode(fs);//return -2 let outer list delete this one
 //plist1.delete_all();
plist1.print();
//artist.traverse();


//LinkedList<Painting> *tmp;

	//tmp=artist.return_head();

  return 0;
}
