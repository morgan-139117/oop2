#include "MList.h"

bool MLinkedList::clone(String _fname, String _lname, String _clone) {

	MNode *temp = NULL;
	temp = MLinkedList::search_list(_fname, _lname);
	if (NULL == temp) {
		cout << "Warning no List to clone" << endl;
		return false;
	} else {
		//only head
		temp->data.getData();

		//create a new list

		//traverse the target list from head

		//copy each one and push_back to the new list

		//push the new list to the mlist
	}

}
;

bool MLinkedList::_copy_node(String _title, String _fname, String _lname) {

	MNode *temp = NULL;
	temp = MLinkedList::search_list(_fname, _lname);
	if (NULL == temp) {
		cout << "Warning no Node to copy" << endl;
		return false;
	} else {
		bool ret = temp->data._copy_node(_title, _fname, _lname);
		if (ret == true) {
			cout << "Copied!" << endl;
			return true;
		} else {
			cout << "No identical Node to copy!" << endl;
			return false;
		}

	}

}

bool MLinkedList::delete_all_node(String _fname, String _lname) {

	MNode *temp = NULL;
	temp = MLinkedList::search_list(_fname, _lname);
	if (NULL == temp) {
		cout << "Warning no Painting list to delete" << endl;
		return false;
	} else {
		bool ret = temp->data.delete_all_node(temp->data.head);
		if (ret == true) {
			cout << "Deleted!" << endl;
			return true;
		} else {
			cout << "Unable to delete!" << endl;
			return false;
		}

	}
}

bool MLinkedList::deleteNode(ulong _id) {

	MNode *temp = NULL;
	temp = MLinkedList::search_list(_id);
	if (NULL == temp) {
		cout << "Warning no node to delete" << endl;
		return false;
	} else {
		bool ret = temp->data.deleteNode(_id);
		if (ret == true) {
			cout << "Deleted!" << endl;
			return true;
		} else {
			cout << "Unable to delete!" << endl;
			return false;
		}
	}

}

void MLinkedList::print() {

	MNode * temp = NULL;
	temp = head;
	while (NULL != temp) {
		temp->data.print();
		temp = temp->next;
	}
}

void MLinkedList::push_back(PLinkedList &node) {

	if (0 == size) {

		MNode *temp = new MNode();
		temp->data = node;
		head = tail = temp;
		size++;
	} else {
		MNode *temp = new MNode();
		temp->data = node;
		tail->next = temp;
		temp->pre = tail;
		tail = temp;

		size++;
	}
}
;
bool MLinkedList::add_artist(String _fname, String _lname, String _title,
		int _h, int _w, int _n_of_p, String _plist, String _country,
		int _medium, char _type){
	MNode *temp = NULL;
	temp = MLinkedList::search_head(_fname, _lname);
	if (NULL == temp) {
		cout << "Painting list creation for new artist" << endl;
		PLinkedList ppl_tmp;
		Painting *b;
		b = new Painting(_fname, _lname, _title, _h, _w);
		ppl_tmp.push_back(b);
		MLinkedList::push_back(ppl_tmp);
		delete b;
		 return true;
	} else {
		 return false;
	}

}
;

bool MLinkedList::add_painting(String _fname, String _lname, String _title,
		int _h, int _w, int _n_of_p, String _plist, String _country,
		int _medium, char _type) {

	MNode *temp = NULL;

	temp=MLinkedList::search_head(_fname, _lname);
	//temp = MLinkedList::search_list(_fname, _lname);
	if (NULL == temp) {
		cout << "Painting list creation for new artist" << endl;
		PLinkedList ppl_tmp;
		Painting *b;

		switch (_type) {
		case 'a': {
			b = new Portrait(_fname, _lname, _title, _h, _w, _n_of_p, _plist);
			break;
		}
		case 'b': {
			b = new Landscape(_fname, _lname, _title, _h, _w, _country);
			break;
		}
		case 'c': {
			b = new Still(_fname, _lname, _title, _h, _w, _medium);
			break;
		}
		}

		ppl_tmp.push_back(b->copy());
		MLinkedList::push_back(ppl_tmp);
		delete b;
		return true;
	} else {

		bool dup = temp->data.search_node(_title, _fname, _lname);
		if (true == dup) {
			cout << "Adding failure: duplicated Painting" << endl;
		} else {
			Painting *b;

			switch (_type) {
			case 'a': {
				b = new Portrait(_fname, _lname, _title, _h, _w, _n_of_p,
						_plist);
				break;
			}
			case 'b': {
				b = new Landscape(_fname, _lname, _title, _h, _w, _country);
				break;
			}
			case 'c': {
				b = new Still(_fname, _lname, _title, _h, _w, _medium);
				break;
			}
			}

			temp->data.push_back(b->copy());
			delete b;
		}

		return true;
	}

}
;

MNode * MLinkedList::search_head(String _fname, String _lname) {

	if (head == NULL)
		return NULL;
	if (head->data.have_artist(_fname, _lname))
		return head;
	else
		return NULL;
}
;

MNode * MLinkedList::search_list(String _fname, String _lname) {

	MNode *temp_p = NULL;

	if (head == NULL)
		return NULL;

	if (head->data.have_artist(_fname, _lname))

		return head;

	else
		temp_p = head;
	while (NULL != temp_p) {

		if (temp_p->data.have_artist(_fname, _lname))
			return temp_p;

		temp_p = temp_p->next;
	}

	return NULL;
}
;
MNode * MLinkedList::search_list(ulong _id) {

	MNode *temp_p = NULL;

	if (head == NULL)
		return NULL;

	if (head->data.have_artist(_id))

		return head;

	else
		temp_p = head;
	while (NULL != temp_p) {

		if (temp_p->data.have_artist(_id))
			return temp_p;

		temp_p = temp_p->next;
	}

	return NULL;
}
;

