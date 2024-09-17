#include <iostream>
#include "List.h"
using namespace std;

List::List() {
	count = 0;
}

//status operators
int List::size() {
	return count;
}
bool List::isFull() {
	return count == MAX_SIZE;
}
bool List::isEmpty() {
	return count == 0;
}

// search operator
int List::get(int index) {
	return listArray[index];
}

// void operators
void List::insert(int element) {
	if (isFull()) { return; }
	listArray[count] = element;
	++count;
}
void List::remove(int element) {
	int currIndex;
	if (isEmpty()) { return; }
	for (int i = 0; i < count; ++i) {
		if (listArray[i] == element) {
			currIndex = i;
			break;
		}
	}
	for (int i = currIndex; i < count; ++i) {
		listArray[i] = listArray[i+1];
	}
	--count;
	return;
}
void List::removeAt(int index) {
	if (isEmpty()) { return; }
	for (int i = index; i < count; ++i) {
		listArray[i] = listArray[i+1];
	}
	--count;
}
void List::replace(int index, int element) {
	if (index > MAX_SIZE) { cerr << "Index out of range" << endl; }
	listArray[index] = element;
}

// testing display operator
void List::show() {
	if (isEmpty()) { return; }
	for (int i = 0; i < count; ++i) {
		cout << listArray[i] << endl;
	}
}	
