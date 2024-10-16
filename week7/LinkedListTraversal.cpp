// Jesus Ruiz Ramos
// Week 7 Assignment
// Single Linked List Traversal
#include <iostream>
#include <cstdlib>
using namespace std;

class Node{
    private:
        int data;
        Node * next;

    public:
        Node(int data) {
            this->data = data;
        }
        void setNext(Node * next) {
            this->next = next;
        }
        Node * getNext() {
            return next;
        }
        int getData() {
            return data;
        }
};

int main () {
    Node * head = new Node(12);
    head->setNext(new Node(99));
    head->getNext()->setNext(new Node(3));

    cout << head->getData() << endl;
    cout << head->getNext()->getData() << endl;
    cout << head->getNext()->getNext()->getData() << endl;

    return 0;
}
