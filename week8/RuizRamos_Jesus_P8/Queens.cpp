#include <iostream>
#include <vector>
using namespace std;

bool isSafe(const vector<int>& board, int row, int col) {
    for (int i = 0; i < row; ++i) {
        if (board[i] == col || board[i] - i == col - row || board[i] + i == col + row) {
            return false;
        }
    }
    return true;
}

bool solveNQueens(vector<int>& board, int row) {
    int n = board.size();
    if (row == n) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i] == j) {
                    cout << "Q";
                }
                else {
                    cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
        return true;
    }

    bool res = false;
    for (int col = 0; col < n; ++col) {
        if (isSafe(board, row, col)) {
            board[row] = col;
            res = solveNQueens(board, row+1) || res;
        }
    }
    return res;
}

void solve() {
    int n = 8;
    vector<int> board(n, -1);
    if (!solveNQueens(board, 0)) {
        cout << "No solution exists." << endl;
    }
}

int main() {
    solve();
    return 0;
}
