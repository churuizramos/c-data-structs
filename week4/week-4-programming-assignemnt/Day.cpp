#include "Day.h"

// Constructors
Day::Day() {
	length = 0;
	this_date.day = 1;
	this_date.month = 1;
	this_date.year = 1583;

	list = (Entry*)malloc(sizeof(Entry));

	maxLength = 48;
}
Day::Day(Date *date, int numEntries) {
	length = 0;
	this_date.day = date->day;
	this_date.month = date->month;
	this_date.year = date->year;

	list = (Entry*)malloc(sizeof(Entry));
	
	maxLength = numEntries;
}

// Operations
void Day::Insert(Entry * entry) {
	if (isFull()) return;
	if (!isFree(entry)) return;

	int index = 0;
	while (list[index].time < entry->time) ++index;
	
	for (int i = (length + 1); i > index; ++i) {
		list[i] = list[i-1];
	}

	list[index] = *entry;
	++length;
}	

// Bool checks
bool Day::isFree(Entry * entry) const {
	for (int i = 0; i < length; ++i) {
		if (entry->time == list[i].time) return false;
	}
	return true;
}
bool Day::isFull() const {
	return (length == maxLength);
}
bool Day::isEmpty() const {
	return (length == 0);
}

// Getters
Date Day::getDate() const {
	return this_date;
}
int Day::getEntries() const {
	return length;
}

// ------------------------------
// TESTING
void Day::show() const {
	for (int i = 0; i < length; ++i) {
		cout << "ENTRY: " << i << "\tNAME: " << list[i].name << "\tTIME: " << list[i].time << endl;
	}
}
