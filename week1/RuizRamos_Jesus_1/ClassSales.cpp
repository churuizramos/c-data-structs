// Written by Jesus Ruiz Ramos
// CSE 302 Week 1
// Written in vim v9.0.1499 | Compiled with g++ v12.2.0 (Debian) compiler

#include <iostream>
#include <vector>
using namespace std;

void addSale(int * &arrayPtr, int &size, int &classId, int &sales);
void printSalesList(int * &arrayPtr, int &size);
void displayIntro();

int main() {
	int size = 10;
	int * arrayPtr = new int[size];
	
	bool running = true;

	displayIntro();

	while (running) {
		cout << "Actions List\n1 Add Sale | 2 Print All Class Data | 3 Print Sales | 4 Save Sales | 5 Load Sales | 6 Exit" << endl;
		int input;
		cout << ":" << endl;
		cin >> input;
		switch (input) {
			case 1:
				int classId, salesAmount;
				cout << "Class Id (1-10): " << endl;
				cin >> classId;
				cout << "Sales amount (<0): " << endl;
				cin >> salesAmount;
				addSale(arrayPtr, size, classId, salesAmount);
				break;
			case 2:
				printSalesList(arrayPtr, size);
				break;
			case 6:
				running = false;
				break;
			default:
				cout << "Invalid choice. Try something else." << endl;
				break;
		}
	}

	cout << "end" << endl;

	return 0;
}

void addSale(int * &arrayPtr, int &size, int &classId, int &sales) {
	if (classId < size) {
		arrayPtr[classId] += sales;
	}
	else {
		cout << "error" << endl;
	}

}
void printSalesList(int * &arrayPtr, int &size) {
	cout << "Current Sales" << endl;
	cout << "=======================================" << endl;
	for (int i = 0; i < size; ++i) {
		cout << "Class: " << i << "\tSales: " << arrayPtr[i] << endl;
	}
}
void displayIntro() {
	cout << "Welcome to the class sales data manager" << endl;
	cout << "=======================================" << endl;
}
