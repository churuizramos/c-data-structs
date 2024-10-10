#include <iostream>
#include <cstdlib>
using namespace std;

class LinkedList {
    private:
        int * head;
        int length;

    public:
        LinkedList(); // Creates a linked list.

        int size() const; // returns the current length of the LinkedList.
        bool isFull() const; // true if list is full.
        bool isEmpty() const; // true if list is empty.

        void ins(); // adds an item at the current index.
        void del(int index); // deletes the item at the "index".
};
