#include <cstdlib>
#include <iostream>
#include <string>
#include "Entry.h"
using namespace std;

struct Date {
	int day;
	int month;
	int year;
};

class Day {
	private:
		int length;
		int maxLength;
		Entry * list;
		Date this_date;
	public:
		Day(); // instantiate the list with 48 entries and set the Day's Date field to January 1, 1583
		Day(Date * date, int numEntries); // set the Day's Date field to date and instantiate the list with numEntries entries

		void Insert(Entry * entry); // insert an Entry object into the list of entries; throw an exception if the list is full
		void Delete(Entry entry); // remove the entry from the list of entries

		bool isFree(Entry * entry) const; // if time is not in the  list of entries, return true; else return false
		bool isPresent(Entry entry) const; // if the name is in the list of entries return true; else return false
		bool isFull() const;
		bool isEmpty() const;

		Date getDate() const; // return the Date object
		
		int getEntries() const; // return the number of entries in the list of entries
		
		void reset(); // initialize for iteration

		Entry nextEntry(); // return next entry in the list

		int comparedTo(Day day); // compares Day objects on the Date field

		void show() const;
};
