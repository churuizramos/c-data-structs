#include "SortedArrayTypeList.h"

SortedArrayTypeList::SortedArrayTypeList() {
	head = -1;
}

SortedArrayTypeList::~SortedArrayTypeList() { }

void SortedArrayTypeList::Clear() {
	head = -1;
}

int SortedArrayTypeList::isEmpty() const {
	return (head == -1);
}
int SortedArrayTypeList::isFull() const {
	return (head >= MAX_SIZE);
}

int SortedArrayTypeList::Insert(int key, float f) {
	int idx, i;

	if (isFull()) return FALSE;

	idx = 0;
	while ((idx <= head) && (list[idx].key < key)) idx++;

	head++;

	for (i = head; i > idx; i--) list[i] = list[i-1];

	list[idx].key = key;
	list[idx].theData = f;

	return TRUE;
}
int SortedArrayTypeList::Delete(int key) {
	int i, d = 0;

	if (isEmpty()) return FALSE;

	while ((d <= head) && (key != list[d].key)) d++;

	if (d > head) return FALSE;
	else {
		for (i = d; i < head; i++) {
			list[i] = list[i+1];
		}
		head--;
	}
	return TRUE;
}
int SortedArrayTypeList::Search(int key, float * retVal) const {
	int s = 0;
	while ((s <= head) && (key != list[s].key)) s++;

	if (s > head) return FALSE;

	else *retVal = list[s].theData;

	return TRUE;
}
int SortedArrayTypeList::Size() const {
	return head + 1;
}

void SortedArrayTypeList::PrintList() const {
	int i;
	cout << "\n\nItems in the List\n";
	cout << "-----------------------------------\n";
	cout << "Key\t\tData\n";
	cout << "-----------------------------------\n";
	for (i = 0; i <= head; i++) {
		cout << list[i].key << "\t\t" << list[i].theData << "\n";
	}
	cout << "-----------------------------------\n\n";
}
