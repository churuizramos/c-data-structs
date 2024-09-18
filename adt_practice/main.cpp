#include <iostream>
#include "List.h"
using namespace std;

int main() {
	List mylist;

	mylist.insert(20);
	mylist.insert(4);
	mylist.insert(99);

	for (int i = 0; i < 3; ++i) {
		cout << "Index: " << i << " -> " << mylist.get(i) << endl;
	}
	
	cout << mylist.get(1) << endl;
	mylist.replace(1, 22222);
	cout << mylist.get(1) << endl;
}
