// main.cpp

#include <iostream>
#include <fstream>
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

	ofstream OutFile("main.out");
	OutFile << 100 << endl;
	OutFile.close();

	return 0;
}
