#include "MList.h"

/* User input function */

int main() {

	String _fname;
	String _nfname;
	String _lname;
	String _title;
	String empty("empty");
	bool retaa;
	int _h;
	int _w;
	int _n_of_p;
	String _plist;
	String _country;
	int _medium;
	ulong _id;

	MLinkedList mlist;

	bool dup = false;
	bool del = false;
	char ch;
	char pa;
	char co;
	String temp;

	while (1) {
		pa = 0;
		co = 0;

		cout << "                            Menu" << endl;
		cout << "                      a.Add New Artist" << endl;
		cout << "                      p.Add New Painting" << endl;
		cout << "                      r.Remove a Painting" << endl;
		cout << "                      d.Delete all Paintings by artist"<< endl;
		cout << "                      i.List all Paintings" << endl;
		cout << "                      c.Clone a List" << endl;
		cout << "                      q.Quit" << endl;
		cout << "                      please choose: ";
		cin >> ch;

		dup = false;
		del = false;

		if (ch == 'a') {
			cout << "Please input first name" << endl;
			cin >> temp;
			cin >> _fname;
			cout << "Please input last name" << endl;
			cin >> _lname;
			 retaa = mlist.add_artist(_fname, _lname, empty, 0, 0, 0,
					 empty, empty, _medium, 0);
			if (retaa == true)
				cout << "Added!" << endl;
			else
				cout << "This artist is already exist" << endl;
		} else {
			switch (ch) {
			case 'p': {
				while (pa != 'a'  && pa != 'b' && pa != 'c') {
					cout << "                       Add New Painting" << endl;
					cout << "                         Painting Type" << endl;
					cout << "                      a.Portrait" << endl;
					cout << "                      b.Landscape" << endl;
					cout << "                      c.Still" << endl;
					cout << "                      Please choose: ";
					cin >> pa;
				}

				cout << "Please input first name" << endl;
				cin >> temp;
				cin >> _fname;
				cout << "Please input last name" << endl;
				cin >> _lname;
				cout << "Please input title" << endl;
				cin >> _title;
				cout << "Please input height name" << endl;
				cin >> _h;
				cout << "Please input weight name" << endl;
				cin >> _w;

				switch (pa) {
				case 'a': {
					cout << "Please input the number of people in the painting"
							<< endl;
					cin >> temp;
					cin >> _n_of_p;
					cout
							<< "Please input the name list of people in the painting"
							<< endl;
					cin >> temp;
					cin >> _plist;
					_country = empty;
					break;
				}
				case 'b': {
					cout << "Please input the country of  painting" << endl;
					cin >> temp;
					cin >> _country;
					break;
				}
				case 'c': {
					while (co != 'o' && co != 'w') {
						cout << "           medium of the painting" << endl;
						cout << "            o.oil-based" << endl;
						cout << "            w.water color" << endl;
						cout << "            Please choose: " << endl;
						cin >> co;
					}
					if (co == 'o')
						_medium = 0;
					else
						_medium = 1;
					_plist = empty;
					break;
				}
				}

				mlist.add_painting(_fname, _lname, _title, _h, _w, _n_of_p,
						_plist, _country, _medium, pa);
				break;
			}
			case 'i': {
				cout
						<< "*****************Painting information*****************\n";
				cin >> temp;
				mlist.print();

				break;
			}
			case 'r': {
				cout << "Removes a Painting\n";
				cout << "Please input id" << endl;
				cin >> temp;
				cin >> _id;
				mlist.deleteNode(_id);
				break;
			}
			case 'c': {
				cout << "Clone a List\n";
				cout << "Please input first name" << endl;
				cin >> temp;
				cin >> _fname;
				cout << "Please input last name" << endl;
				cin >> _lname;
				cout << "Please input a new first name" << endl;
				cin >> _nfname;
				mlist.clone(_fname, _lname, _nfname);
				break;
			}
			case 'd': {
				cout << "Delete all Paintings by artist\n";
				cout << "Please input first name" << endl;
				cin >> temp;
				cin >> _fname;
				cout << "Please input last name" << endl;
				cin >> _lname;

				mlist.delete_all_node(_fname, _lname);

				break;
			}

			case 'q':
				return 0;
			}
		}
	}
	return 0;
}
