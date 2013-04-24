#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Painting.h"

class PLinkedList {
private:   

    class PNode
    {
    private:
      Painting data;
      PNode *pre;
      PNode *next;
    public:

      friend class PLinkedList;
      PNode(){pre=NULL;next=NULL;};
     ~PNode(){};

      /* data */
    };

public:
   
    PNode *head;
    PNode *tail;
    int size;
    PLinkedList(void){tail = head = NULL;size = 0;};
    ~PLinkedList(void){};
    void push_back(Painting &node);
  
    bool search_node(String _title, String _fname, String _lname);
    bool _copy_node(String _title, String _fname, String _lname);
    void print();
    int get_size() { return size;};
    bool delete_all_node(PNode * obj);
    bool deleteNode(String _title, String _fname, String _lname);
    bool have_artist(String _fname, String _lname);
};



/*


void PLinkedList::push_back(PNode node){

   if ( 0 == size){

      PNode *temp = new PNode(); 
        temp->data = node;
    head = tail = temp;
    size++;
   }else{
      PNode *temp = new PNode(); 
       temp->data = node;
        tail->next = temp;
    temp->pre = tail;
    tail = temp;
  
    size++;
   }
};


bool PLinkedList::deleteNode(String obj)
{
  PNode *curr = head, *prev = NULL;

  while (curr)
  {
    if (curr->data.have_same_title(obj)) break;

    prev = curr;
    curr = curr->next;
  }

  if (curr)
    {
      if (prev)
        {
          prev->next = curr->next;
        }
      else
        {
          head = curr->next;
        }
      delete(curr);
      --size;
      return true;
    }
  else
    {
      return false;
    }
}



void PLinkedList::print()
{
    PNode *tmp;
     tmp=head;
 do {
      cout << tmp->data;

      tmp = tmp->next;

    }  while (NULL!=tmp);
   
cout<<"size"<<size<<endl;
};



int PLinkedList::delete_all()
{
    cout<<"size"<<size<<endl;  
    do{ 
cout<<"size"<<size<<endl;
           PLinkedList::pop_back();
    }while(size!=1);
}



int PLinkedList::pop_back()
{
  cout<<"asize"<<size<<endl;
  if ( size == 0)
    return -1;
  else if( size == 1)
  {cout<<"vsize"<<size<<endl;
    PNode* temp = tail;
    head = tail = NULL;
    PNode rtn = temp->data;
    delete temp;
    size--;
    return -3;
  }
  else
  {cout<<"csize"<<size<<endl;
    PNode* temp = tail;
    tail = tail->pre;
    tail->next = NULL;
    PNode rtn = temp->data;
    delete temp;
    size--;
    return size;
  }

  return 9;
}*/