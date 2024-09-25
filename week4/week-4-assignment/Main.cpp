#include "SortedArrayTypeList.h"
#include <fstream>

int main(int argc, char** argv) {
	float f;

	SortedArrayTypeList * list;
	
	cout << "Simple List Demonstration | By Jesus Ruiz Ramos\n";
	cout << "(List implemented as an Array - Do not try this at home)\n\n";
	cout << "Create a list and add a few tasks to the list";

	list = new SortedArrayTypeList();
	
	list->Insert(5, 3.1f);
	list->Insert(1, 5.6f);
	list->Insert(3, 8.3f);
	list->Insert(2, 7.4f);
	list->Insert(4, 2.5f);

	list->PrintList();

	cout << "\nList now contains " << list->Size() << " items.\n\n";

	cout << "Testing delete of last item in list.\n";
	list->Delete(5);
	list->PrintList();

	cout << "Testing delete of a middle item in list.\n";
	list->Delete(3);
	list->PrintList();

	cout << "Testing failure in delete function.\n";
	if (list->Delete(5)) { cout << "Oops! Should nothave been able to delete.\n\n"; }
	else { cout << "Unable to locate the item to delete.\n\n"; }

	cout << "Testing Search function. Search for key 2\n";
	if (list->Search(2, &f)) { cout << "Search result: theData = " << f << "\n"; }
	else { cout << "Search result: Unable to locate the item in list\n"; }

	cout << "\n\nEnd list demonstration..." << endl;

	return 0;
}
