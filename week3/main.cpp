// main.cpp

#include <iostream>
#include "UnsortedArrayType.cpp"
using namespace std;

int main() {
	UnsortedArrayType ust;
	ust.InsertItem(5);
	ust.InsertItem(6);
	ust.InsertItem(7);
	ust.InsertItem(8);

	ust.DeleteItem(6);

	ust.MakeEmpty();

	ust.InsertItem(100);
	ust.Show();

	return 0;
}
