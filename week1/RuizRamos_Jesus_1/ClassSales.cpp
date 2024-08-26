
// Written by Jesus Ruiz Ramos
// CSE 302 Week 1

#include <iostream>
#include <string>
using namespace std;

class SaleData {
	private:
		int listSize = 1;
		int salesList[listSize];
	public:
		void printSalesList() {
			for (int i = 0; i < listSize; ++i) {
				cout << "Class: " << i << "Sales: " << salesList[i] << endl;
			}
		}
		void openList() {
			
		}

}

int main() {
	
}
