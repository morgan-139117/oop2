#include <stdio.h>
#include <iostream>
#include <string.h>
#include "LinkedList.h"


bool PLinkedList::deleteNode(int _id)
{
  PNode *curr = head, *prev = NULL;

  while (curr)
  {
     if(curr->data->dup_painting(_id)) break;

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

bool PLinkedList::deleteNode(String _title, String _fname, String _lname)
{
  PNode *curr = head, *prev = NULL;

  while (curr)
  {
     if(curr->data->dup_painting(_title,_fname,_lname)) break;

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
if( size != 0)

 do {
/*
      Portrait *p;
     	 p = dynamic_cast<Portrait*>(tmp->data) ;
     	 if (p != NULL) {
     	    cout<<p;
     	 }

     	 Landscape *q;
     	 q = dynamic_cast<Landscape*>(tmp->data) ;
     	 if (q != NULL) {
     	    cout<<q;
     	 }

     	 Still *r;
     		 r = dynamic_cast<Still*>(tmp->data) ;
     		 if (r != NULL) {
     		    cout<<r;
     		 }

*/

	 cout<<tmp->data;
      tmp = tmp->next;

    }  while (NULL!=tmp);



//cout<<"size"<<size<<endl;
};

void PLinkedList::push_back(Painting *node){

   if ( 0 == size){
	   

	      if(NULL != dynamic_cast<Portrait*>(node))
	      {
	    	 /* Portrait *p =  dynamic_cast<Portrait*>(node);
	    	  PNode *temp = new PNode();
	    	         temp->data = p->copy();
	    	         head = tail = temp;*/
	         // cout<<"type: Derive"<<endl;
	      }
	      else if(NULL != dynamic_cast<Portrait*>(node))
	      {
	         // cout<<"type: Derive2"<<endl;
	      }
	      else
	      {
	           //ASSERT(0)
	       }

	      PNode *temp = new PNode();
		 temp->data =node;
		 head = tail = temp;
  
    size++;

   }else{
      PNode *temp = new PNode();
       temp->data = node->copy();
        tail->next = temp;
    temp->pre = tail;
    tail = temp;

    size++;
   }
};



bool PLinkedList::search_node(String _title, String _fname, String _lname){
  
PNode *temp_p = NULL;

 if(head==NULL)
    return false;

 if(head->data->dup_painting(_title,_fname,_lname))
     
    return true;

else
  temp_p = head;
   while(NULL != temp_p){

     if(temp_p->data->dup_painting(_title,_fname,_lname))
        return true;

        temp_p = temp_p->next;
   }

  return false;
};



bool PLinkedList::have_artist(String _fname, String _name){

  if (head == NULL)
    return false;
  else
    if(head->data->same_artist(_fname,_name))
      return true;

  return false;
}

bool PLinkedList::have_artist( ulong _id){

  if (head == NULL)
    return false;
  else
    if(head->data->dup_painting(_id))
      return true;

  return false;
}


bool PLinkedList::delete_all_node(PNode * obj)
{
     if ( NULL == obj)
        return false;

     PNode * tp_node;
      tp_node = obj->next;
     delete (obj);
     size--;
      PLinkedList::delete_all_node (tp_node);
   
     return true;
}



bool PLinkedList::_copy_node(String _title, String _fname, String _lname){
  
PNode *temp_p = NULL;



  temp_p = head;
   while(NULL != temp_p){

     if(temp_p->data->dup_painting(_title,_fname,_lname))
        break;

        temp_p = temp_p->next;
   }

   Painting p;
    p.deep_copy_(*temp_p->data);
PLinkedList::push_back(&p);
   
  return temp_p;
};






/*

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
