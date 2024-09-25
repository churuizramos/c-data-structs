#ifndef SORTEDARRAYTYPELIST_H
#define SORTEDARRAYTYPELIST_H

#include <iostream>
using namespace std;

struct ListItem {
	int key;
	float theData;
};

#define MAX_SIZE 50

class SortedArrayTypeList {
	private:
		int head;
		ListItem list[MAX_SIZE];
	public:
		SortedArrayTypeList();
		~SortedArrayTypeList();
		void Clear();

		int isEmpty() const;
		int isFull() const;

		int Insert(int key, float f);
		int Delete(int key);
		int Search(int key, float * retVal) const;
		int Size() const;
		
		void PrintList() const;
};

#ifndef FALSE
#define FALSE (0)
#endif

#ifndef TRUE
#define TRUE (!FALSE)
#endif

#endif // End of list header
