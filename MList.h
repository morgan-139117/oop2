#include <stdio.h>
#include <iostream>
#include <string.h>
#include "LinkedList.h"


    class MNode
    {
    private:
      String fname;
      String lname;
      PLinkedList data;
      MNode *pre;
      MNode *next;
    public:
  
      friend class MLinkedList;
      MNode(){pre=NULL;next=NULL;};
     ~MNode(){};

      /* data */
    };

class MLinkedList {

public:
   
    MNode *head;
    MNode *tail;
    int size;
    MLinkedList(void){tail = head = NULL;size = 0;};
    ~MLinkedList(void){};
    void push_back(PLinkedList &node);
    MNode * search_head(String _fname, String _lname);
    MNode * search_list(ulong);
    MNode * search_list(String _fname, String _lname);
    bool _copy_node(String _title, String _fname, String _lname);
    void print();
    bool delete_all_node(String _fname, String _lname);
    bool deleteNode( ulong);
    bool clone(String _fname, String _lname,String);

    bool add_artist(String _fname, String _lname, String _title,
    		int _h, int _w, int _n_of_p, String _plist, String _country,
    		int _medium, char _type);

    bool add_painting(String _fname, String _lname,String _title,
    		int _h, int _w,  int _n_of_p,  String _plist,
    	    String _country,int _medium, char type);
};
