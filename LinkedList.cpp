#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Painting.h"

template <class T>
class LinkedList {
    
private:   
    template <class U>
    class LinkedNode
    {
    private:
      U data;
      LinkedNode<U> *pre;
      LinkedNode<U> *next;
    public:

      friend class LinkedList;
    //  LinkedNode<U>(obj):data(obj),pre(NULL),next(NULL){cout<<"called1";};
      LinkedNode<U>(){pre=NULL;next=NULL;};
     ~LinkedNode<U>(){};

      /* data */
    };

public:
    LinkedNode<T> *head;
    LinkedNode<T> *tail;
    int size;
    LinkedList<T>(void){tail = head = NULL;size = 0;};
    ~LinkedList<T>(void){};
    void push_back(T node);
    T search_node(T node);
    int pop_back();

    T list();
    T front();
    void print();
    void traverse();

    int remove_node(String obj);
    int get_size() { return size;};
    int delete_all();

    bool deleteNode(String obj);
};



template <typename T>
void LinkedList<T>::push_back(T node){

   if ( 0 == size){

      LinkedNode<T> *temp = new LinkedNode<T>(); 
        temp->data = node;
    head = tail = temp;
    size++;
   }else{
      LinkedNode<T> *temp = new LinkedNode<T>(); 
       temp->data = node;
        tail->next = temp;
    temp->pre = tail;
    tail = temp;
  
    size++;
   }
};


template <typename T> 
bool LinkedList<T>::deleteNode(String obj)
{
 
 return false;
}
/*
template <typename T>
int LinkedList<T>::remove_node(String obj)
{
	if ( size == 0){
		
		return -1;
}
	else if( size == 1)
	{

		LinkedNode<T>* temp = head;
	
		T rtn = temp->data;
    cout<<"here";
		if(true==rtn.have_same_title(obj)){
        head = tail = NULL;
		delete temp;

		size--;}
		else
		return -2;
	}
	else
	{
		LinkedNode<T>* temp = head;
        LinkedNode<T>* tempnext = head-next;

	
do{

		T rtn = temp->data;

	
		if(true==rtn.have_same_title(obj)){
		delete temp;
    cout<<"asdfj;lksafdj;lasdf"<<size;
		size--;
    cout<<"asdfj;lksafdj;lasdf"<<size;

  }

   temp=temp->next;

}while(temp!=null);
		return 0;
	}
};

*/
template <class T>
void LinkedList<T>::print( )
{
    LinkedNode<T> *tmp;
     tmp=head;
 do {
      cout << tmp->data;

      tmp = tmp->next;

    }  while (NULL!=tmp);
    delete head;
cout<<"size"<<size<<endl;
};

template <typename T>
T LinkedList<T>::search_node(T t){

  return NULL;
};

template <typename T>
int LinkedList<T>::delete_all()
{
    cout<<"size"<<size<<endl;  
    do{ 
cout<<"size"<<size<<endl;
           LinkedList<T>::pop_back();
    }while(size!=1);
}


template <typename T>
int LinkedList<T>::pop_back()
{
  cout<<"asize"<<size<<endl;
  if ( size == 0)
    return -1;
  else if( size == 1)
  {cout<<"vsize"<<size<<endl;
    LinkedNode<T>* temp = tail;
    head = tail = NULL;
    T rtn = temp->data;
    delete temp;
    size--;
    return -3;
  }
  else
  {cout<<"csize"<<size<<endl;
    LinkedNode<T>* temp = tail;
    tail = tail->pre;
    tail->next = NULL;
    T rtn = temp->data;
    delete temp;
    size--;
    return size;
  }

  return 9;
}