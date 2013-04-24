#include "MList.h"

bool MLinkedList::_copy_node(String _title, String _fname, String _lname){

    
    MNode *temp = NULL;
	temp = MLinkedList::search_list(_fname,_lname);
	  if ( NULL == temp)
    { cout<<"Warning no Node to copy"<<endl;
        return false;
    }else{
       bool ret= temp->data._copy_node(_title,_fname,_lname);
       if ( ret == true){
            cout<<"Copied!"<<endl;
              return true;
       }
       else
       {
       	      cout<<"No identical Node to copy!"<<endl;
       	        return false;
       }
    
    }

}   

bool MLinkedList::delete_all_node(String _fname, String _lname){

	MNode *temp = NULL;
	temp = MLinkedList::search_list(_fname,_lname);
	  if ( NULL == temp)
    { cout<<"Warning no Painting list to delete"<<endl;
        return false;
    }else{
       bool ret= temp->data.delete_all_node(temp->data.head);
       if ( ret == true){
            cout<<"Deleted!"<<endl;
                return true;
       }
       else
       {
       	      cout<<"Unable to delete!"<<endl;
       	          return false;
       }
  
    }
}

bool MLinkedList::deleteNode(String _title, String _fname, String _lname){

	MNode *temp = NULL;
	temp = MLinkedList::search_list(_fname,_lname);
	  if ( NULL == temp)
    { cout<<"Warning no node to delete"<<endl;
        return false;
    }else{
       bool ret= temp->data.deleteNode(_title,_fname,_lname);
       if ( ret == true){
            cout<<"Deleted!"<<endl;
            return true;
       }
       else
       {
       	      cout<<"Unable to delete!"<<endl;
       	      return false;
       }
      
    }
  
}

void MLinkedList::print(){

	
      	MNode * temp = NULL;
      	temp = head;
      while( NULL != temp)
      {
      	  temp->data.print();
       temp = temp->next;
    }
}


void MLinkedList::push_back(PLinkedList &node){

   if ( 0 == size){

      MNode *temp = new MNode(); 
        temp->data = node;
    head = tail = temp;
    size++;
   }else{
      MNode *temp = new MNode(); 
       temp->data = node;
        tail->next = temp;
    temp->pre = tail;
    tail = temp;
  
    size++;
   }
};

bool  MLinkedList::add_painting(String _fname, String _lname, String _title, int _h, int _w){

	MNode *temp = NULL;
	temp = MLinkedList::search_list(_fname,_lname);
	  if ( NULL == temp)
    { cout<<"Painting list creation for new artist"<<endl;
      PLinkedList ppl_tmp;
     Painting b= Painting(_fname,_lname,_title,_h,_w);
      ppl_tmp.push_back(b);
      MLinkedList::push_back(ppl_tmp);
      return true;
    }else{
     Painting b=Painting(_fname,_lname,_title,_h,_w);
      bool dup=temp->data.search_node(_title,_fname,_lname);
         if ( true == dup) {
             cout<<"Adding failure: duplicated Painting"<<endl;
         }else
      temp->data.push_back(b);
      return true;
    }
    
};	

MNode * MLinkedList::search_list(String _fname, String _lname){
  
MNode *temp_p = NULL;

 if(head==NULL)
    return NULL;

 if(head->data.have_artist(_fname,_lname))
     
    return head;

else
  temp_p = head;
   while(NULL != temp_p){

     if(temp_p->data.have_artist(_fname,_lname))
        return temp_p;

        temp_p = temp_p->next;
   }

  return NULL;
};



