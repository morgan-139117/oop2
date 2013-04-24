#include <stdio.h>
#include <iostream>
#include <string.h>
#include "LinkedList.h"


    class MNode
    {
    private:
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
  
    MNode * search_list(String _fname, String _lname);
    bool _copy_node(String _title, String _fname, String _lname);
    void print();
    bool delete_all_node(String _fname, String _lname);
    bool deleteNode(String _title, String _fname, String _lname);
    bool add_painting(String _fname, String _lname, String _title, int _h, int _w);
};
