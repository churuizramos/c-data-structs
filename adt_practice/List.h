// List ADT of integers

const int MAX_SIZE = 10;

class List {
	private:
		int count;
		int listArray[MAX_SIZE];
	public:
		List(); // constructor
		
		int size(); // returns the size of an array
		bool isFull(); // true if count is max size, otherwise false
		bool isEmpty(); // true if count is 0, otherwise false

		int get(int index); // return an element from the list at any given position
		
		void insert(int element); // insert an element at any position of the list
		void remove(int element); // remove the first occurance of any element from a NON EMPTY list
		void removeAt(int index); // remove the element at a specified location from a NON EMPTY list
		void replace(int index, int element); // replace an element at any position by another element
		void show(); // displays the list
};
