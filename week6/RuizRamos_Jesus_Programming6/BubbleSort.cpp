// Bubble Sort
// Jesus Ruiz Ramos
// Programming Assignment 6
#include <iostream>
#include <ostream>
using namespace std;

int main() {
    int i,j,temp;
    int arr[8] = {12,3,1,5,18,10,7,35};

    cout << "Unsorted Array: " << endl;
    for (i=0;i<8;i++) {
        cout << arr[i] << endl;
    }
    cout << endl;

    for (i=0;i<8;i++) {
        for (j=i;j<8;j++) {
            if (arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted Elements: " << endl;
    for (i=0;i<8;i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
