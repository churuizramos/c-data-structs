// projQuickSort C++ Program
// Jesus Ruiz Ramos
// Programming Assignment 6
#include <iostream>
#include <ostream>
using namespace std;

static int divide(int arr[], int start, int end){
    int pivote = arr[end];
    int index = start;
    for (int i=start;i<end;i++){
        if (arr[i] < pivote){
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            index++;
        }
    }
    int temp = arr[end];
    arr[end] = arr[index];
    arr[index] = temp;
    return index;
}

void Quick(int arr[], int start, int end) {
    if (start < end) {
        int d = divide(arr,start,end);
        Quick(arr,start,(d-1));
        Quick(arr,(d+1),end);
    }
}

int main() {
    int num, i;
    int arr[10]{};

    cout << "Enter the number of elements: ";
    cin >> num;
    cout << "Enter the elements: ";
    for (i=0;i<num;i++){
        cin >> arr[i];
    }

    Quick(arr,0,(num-1));
    cout << "After sorting, the elements are: " << endl;

    for (int i=0; i<num;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
