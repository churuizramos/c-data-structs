// Jesus Ruiz Ramos
// Programming Assignment 5
// Stack Implementation

#include <iostream>
#include <ostream>
#include <stack>
using namespace std;

void newStack(stack <int> ss) {
    stack <int> sg = ss;

    cout << "Stack:" << endl;
    while (!sg.empty()) {
        cout << '\t' << sg.top();
        sg.pop();
    }
    cout << '\n';
}
void currentTop(stack <int> workingStack) {
    cout << "Current Top: " << workingStack.top() << endl;
}
void isEmpty(stack <int> workingStack) {
    cout << "Empty Test: " << (workingStack.empty() ? "EMPTY" : "NOT EMPTY") << endl;
}
void checkSize(stack <int> workingStack) {
    cout << "Curr Size: " << workingStack.size() << endl;
}

int main () {
    stack <int> myStack;

    // empty test
    isEmpty(myStack);
    newStack(myStack);

    // size test
    checkSize(myStack);

    // testing pushes
    myStack.push(12);
    myStack.push(40);
    myStack.push(99);
    myStack.push(1);
    newStack(myStack);

    // testing pops
    currentTop(myStack);
    cout << "-- Testing Pop --" << endl;
    myStack.pop();
    currentTop(myStack);
    newStack(myStack);

    // size test 2
    checkSize(myStack);

    // empty test 2
    isEmpty(myStack);
    newStack(myStack);

    // stack test
    cout << "-- Testing Swap --" << endl;
    stack <int> secondStack;
    secondStack.push(32);
    myStack.swap(secondStack);
    newStack(myStack);

    return 0;
}
