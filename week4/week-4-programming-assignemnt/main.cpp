#include <iostream>
#include <string>
#include "Day.h"
using namespace std;

int main() {
	Date * newDate = (Date*)malloc(sizeof(Date));
	newDate->day = 12;
	newDate->month = 10;
	newDate->year = 2024;

	Day * newDay = (Day*)malloc(sizeof(Day(newDate, 12))); 
	
	Entry * entry1 = (Entry*)malloc(sizeof(Entry));
	entry1->name = "Cindy";
	entry1->time = 1000;

	newDay->Insert(entry1);
	
	cout << "Current length: " << newDay->getEntries() << endl;

	newDay->show();
	return 0;
}
