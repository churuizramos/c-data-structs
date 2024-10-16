#include <iostream>
using namespace std;

int Puzzle(int base, int limit) {
    if (base > limit)
        return -1;
    else if (base == limit)
        return 1;
    else
        return base * Puzzle(base+1, limit);
}

int main() {
    cout << "Running Puzzle(14,10):\t";
    cout << Puzzle(14,10) << endl;

    cout << "Running Puzzle(4,7):\t";
    cout << Puzzle(4,7) << endl;

    cout << "Running Puzzle(0,0):\t";
    cout << Puzzle(0,0) << endl;
    return 0;
}
