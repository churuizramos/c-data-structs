// Written by Jesus Ruiz Ramos
// CSE 302 Week 1
//
// When I wrote this program I wasn't sure how much complexity we needed for the system
// but since I had the free time I went ahead and just added some fun stuff just because.
//
// A better description to the program is located in the bundled README.md

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

void addSale(int * &arrayPtr, int &size, int &classId, int &sales);
void printSalesList(int * &arrayPtr, int &size);
void printSales(int * &arrayPtr, int &classId);
void saveSales(int * &arrayPtr, int &size);
void loadSales(int * &arrayPtr, int &size);
void printResults(int * &arrayPtr, int &size);
void displayIntro();

int main() {
	int size = 10;
	int * salesPtr = new int[size];
	
	bool running = true;

	displayIntro();

	while (running) {
		cout << "Actions List\n1 Add Sale | 2 Print Box Sales | 3 Print a Class | 4 Save Sales | 5 Load Sales | 6 Print Results | 7 Exit : ";
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
				printResults(salesPtr,size);
				break;	
			case 7:
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
	cout << "Box sales saved to sales.out" << endl;
}
void loadSales(int * &arrayPtr, int &size) {
	int c = 0;
	string line;
	ifstream ReadFile("sales.out");
	while (getline(ReadFile, line)) {
		arrayPtr[c] = stoi(line);
		c++;
	}
	ReadFile.close();
	cout << "Box sales loaded from sales.out" << endl;
}
void printResults(int * &arrayPtr, int &size) {
	int winningClass = 0;
	int winningScore = 0;
	for (int i = 0; i < size; ++i) {
		if (arrayPtr[i] > winningScore) {
			winningClass = i;
			winningScore = arrayPtr[i];
		}
	}
	cout << "=======================================" << endl;
	cout << "Class " << winningClass + 1 << " wins by selling " << winningScore << " cookies!" << endl;
	cout << "=======================================" << endl;
}
void displayIntro() {
	cout << "Welcome to the class sales data manager" << endl;
	cout << "=======================================" << endl;
	cout << "!Load the testing input file with option 5!" << endl;
}
