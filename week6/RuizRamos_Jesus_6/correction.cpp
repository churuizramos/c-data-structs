// Jesus Ruiz Ramos
// Week 6 Assignment
// Debugging a Sorting Algorithm
//
// Fix:
// - j starts at i not i-1, because index -1 is not valid when i is 0

#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n-1; i++) {
        min =i;
        for (j=i; j<n; j++) {
            if (a[j] < a[min]) {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
int main() {
    int a[] = {22,91,35,78,10,8,75,99,1,67};
    int n = sizeof(a)/sizeof(a[0]);
    int i;

    cout << "Given array is:"<<endl;

    for (i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    selectionSort(a,n);
    cout<<"\nSorted array is:\n";

    for (i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
