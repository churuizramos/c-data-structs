#include <iostream>
#include "UnsortedArrayType.h"
using namespace std;

UnsortedArrayType::UnsortedArrayType() { // we create constructor
	length = 0;
}


// let us write the code for UnsortedType: InsertItem
// O(1)
void UnsortedArrayType::InsertItem(int item) {
	if (IsFull()) {
		return;
	}

	info[length] = item;
	length++;
}
// what is the O(1) runtime of this

bool UnsortedArrayType::IsFull() const {
	return (length == 10);
}

// int UnsortedArrayType::Getlength() const {
// 	return 0;
// }
// O(1)

void UnsortedArrayType::MakeEmpty() {
	length = 0;
}

// bool UnsortedArrayType::IsFull() cosnt {
// 	return false;
// }

int UnsortedArrayType::Getlength() const {
	return 0;
}

// O(n)
void UnsortedArrayType::DeleteItem(int item) {
	for (int i = 0; i < 10; i++) {
		if (info[i] == item) {
			// We found our item
			info[i] = info[length - 1]; // to get to the last element
			length--; // make length got down by 1 after delete
		}
	}
}

// O(n)
void UnsortedArrayType::Show() const {
	// for (int i = 0; i < 10; i++)
	for (int i = 0; i < length; i++) {
		cout << info[i] << endl;
	}
}
