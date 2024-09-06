// Jesus Ruiz Ramos
// Week 2 Programming Assignment
//
// I didn't really add anything fancy to this

#include <iostream>
using namespace std;

void printArray(int * &array, int &size);
void swapArray(int * &array, int &size);

int main() {
	const int ARRAY_SIZE = 6;
	int * myArray = new int[ARRAY_SIZE];
	int size = ARRAY_SIZE;
	
	myArray[0] = 1;
	myArray[1] = 5;
	myArray[2] = 7;
	myArray[3] = 9;
	myArray[4] = 11;
	myArray[5] = 13;

	printArray(myArray, size);
	swapArray(myArray, size);
	printArray(myArray, size);

	return 0;
}

void printArray(int * &array, int &size) {
	for (int i = 0; i < size; ++i) {
		cout << array[i] << endl;
	}
}

void swapArray(int * &array, int &size) {
	int temp = array[0];
	int lastIndex = size-1;
	array[0] = array[lastIndex];
	array[lastIndex] = temp;
}
