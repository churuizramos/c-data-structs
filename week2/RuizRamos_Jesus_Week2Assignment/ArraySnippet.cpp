// Jesus Ruiz Ramos
// Week 2 Assignment

#include <iostream>
#include <string>
using namespace std;

string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

int main() {
	for (int i = 0; i < 5; ++i) {
		cout << cars[i] << endl;
	}
	for (int i = 0; i < 5; ++i) {
		cout << i << " = " << cars[i] << endl;
	}
	return 0;
}
