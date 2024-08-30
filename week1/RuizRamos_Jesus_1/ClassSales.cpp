// Written by Jesus Ruiz Ramos
// CSE 302 Week 1
// Written in vim v9.0.1499 | Compiled with g++ v12.2.0 (Debian) compiler

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void addSale(int * &arrayPtr, int &size, int &classId, int &sales);
void printSalesList(int * &arrayPtr, int &size);
void printSales(int * &arrayPtr, int &classId);
void saveSales(int * &arrayPtr, int &size);
void loadSales(int * &arrayPtr, int &size);
void displayIntro();

int main() {
	int size = 10;
	int * salesPtr = new int[size];
	
	bool running = true;

	displayIntro();

	while (running) {
		cout << "Actions List\n1 Add Sale | 2 Print All Class Data | 3 Print Sales | 4 Save Sales | 5 Load Sales | 6 Exit : ";
		int input;
		cin >> input;
		switch (input) {
			case 1:
				int classId, salesAmount;
				cout << "Class Id (1-10): ";
				cin >> classId;
				cout << "Sales amount (>0): ";
				cin >> salesAmount;
				addSale(salesPtr, size, classId, salesAmount);
				break;
			case 2:
				printSalesList(salesPtr, size);
				break;
			case 3:
				int searchId;
				cout << "Class Id (1-10): ";
				cin >> searchId;
				printSales(salesPtr, searchId);
				break;
			case 4:
				saveSales(salesPtr, size);
				break;
			case 5:
				loadSales(salesPtr, size);
				break;
			case 6:
				running = false;
				break;
			default:
				cout << "Invalid choice. Try something else." << endl;
				break;
		}
	}

	cout << "Closing program..." << endl;

	return 0;
}

void addSale(int * &arrayPtr, int &size, int &classId, int &sales) {
	int index = classId - 1;
	if (index < size) {
		arrayPtr[index] += sales;
	}
	else {
		cout << "Not within the range" << endl;
	}

}
void printSalesList(int * &arrayPtr, int &size) {
	cout << "Current Sales" << endl;
	cout << "=======================================" << endl;
	for (int i = 0; i < size; ++i) {
		cout << "Class: " << i+1 << "\tSales: " << arrayPtr[i] << endl;
	}
}
void printSales(int * &arrayPtr, int &classId) {
	int index = classId - 1;
	cout << "=======================================" << endl;
	cout << "Class: " << classId << "\tSales: " << arrayPtr[index] << endl;
	cout << "=======================================" << endl;
}
void saveSales(int * &arrayPtr, int &size) {
	ofstream SaveFile("sales.out");
	for (int i = 0; i < size; ++i) {
		SaveFile << arrayPtr[i] << endl;
	}
	SaveFile.close();
}
void loadSales(int * &arrayPtr, int &size) {
	ifstream ReadFile("sales.out");
	for (int i = 0; i < size; ++i) {
		arrayPtr[i] = ReadFile.getline();
	}
	ReadFile.close();
}
void displayIntro() {
	cout << "Welcome to the class sales data manager" << endl;
	cout << "=======================================" << endl;
}
