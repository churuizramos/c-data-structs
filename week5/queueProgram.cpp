#include <iostream>
#include <queue>
using namespace std;

void showsq(queue <int> sg) {
    queue <int> ss = sg;

    cout << "Queue:" << endl;
    while (!ss.empty()) {
        cout << '\t' << ss.front();
        ss.pop();
    }
    cout << '\n';
}

void isEmpty(queue <int> workingQueue) {
    cout << "Empty Test: " << (workingQueue.empty() ? "EMPTY" : "NOT EMPTY") << endl;
}
void currentFront(queue <int> workingQueue) {
    cout << "Curr Top: " << workingQueue.front() << endl;
}
void currentBack(queue <int> workingQueue) {
    cout << "Curr Back: " << workingQueue.back() << endl;
}
void checkSize(queue <int> workingQueue) {
    cout << "Curr Size: " << workingQueue.size() << endl;
}

int main() {
    queue <int> myQueue;

    // empty test
    isEmpty(myQueue);
    showsq(myQueue);

    // push test
    myQueue.push(13);
    myQueue.push(24);
    myQueue.push(10);
    myQueue.push(50);
    showsq(myQueue);
    isEmpty(myQueue);

    cout << "-- POP TEST --" << endl;
    // pop and font/back test
    currentFront(myQueue);
    currentBack(myQueue);
    myQueue.pop();
    currentFront(myQueue);
    currentBack(myQueue);
    showsq(myQueue);

    cout << "-- SWAP TEST --" << endl;
    //swap test
    queue <int> secondQueue;
    secondQueue.push(120);
    myQueue.swap(secondQueue);
    showsq(myQueue);



    return 0;
}
