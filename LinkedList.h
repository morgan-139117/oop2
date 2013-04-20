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
      void print(){cout<<data;};
     ~LinkedNode<U>(){};

      /* data */
    };

public:
   class Iterator{ 
   public:
    LinkedNode<T> *node;
  public:

#define eoi NULL
    explicit Iterator(LinkedNode<T>* node = NULL): node(node) {};

        bool operator = (const Iterator& it) {  
      return this->node = it.node;
        } ;

  
  
  };

public:
    LinkedNode<T> *head;
    LinkedNode<T> *tail;
    int size;
    LinkedList<T>(void){tail = head = NULL;size = 0;};
    ~LinkedList<T>(void){};
    void push_back(T node);
    T search_node(T node);
    int remove_node(T node);
    T list();
    T front();
    void print();
    void delete_by_artist(const Iterator& it);

    int get_size() { return size;};

    Iterator begin()          //返回第一个元素的迭代器
  {
    return Iterator(head) ;
  };
  Iterator end()              //结束标记的迭代器
  {
    return Iterator( eoi);
  };
};

