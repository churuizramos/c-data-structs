
// Written by Jesus Ruiz Ramos
// CSE 302 Week 1

#include <iostream>
#include <string>
using namespace std;

int main() {
	const int ARRAY_SIZE = 5;
	int myIntArray[ARRAY_SIZE];
	string myStrArray[4];

	myIntArray[0] = 15;
	myIntArray[1] = 20;
	myIntArray[2] = 22;
	myIntArray[3] = 13;
	myIntArray[4] = 6;

	myStrArray[0] = "Bob";
	myStrArray[1] = "Sally";
	myStrArray[2] = "John";
	myStrArray[3] = "Ed";

	for (int i = 0; i < ARRAY_SIZE; ++i) {
		cout << myIntArray[i] << endl;
	}
	for (int i = 0; i < ARRAY_SIZE-1; ++i) {
		cout << myStrArray[i] << endl;
	}

	return 0;
}
