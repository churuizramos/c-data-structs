// Jesus Ruiz Ramos
// 8 Queens Problem
// Week 8 Programming Assignment


#include <iostream>
#include <vector>
using namespace std;

bool isValidPlacement(const vector<vector<char>>& board, int row, int col) {
    // Check the same row
    for (int j = 0; j < col; j++) {
        if (board[row][j] == 'Q') return false;
    }
    // Check upper diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') return false;
    }
    // Check lower diagonal
    for (int i = row, j = col; i < 8 && j >= 0; i++, j--) {
        if (board[i][j] == 'Q') return false;
    }
    return true;
}

void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool solveNQueens(vector<vector<char>>& board, int col) {
    if (col == 8) {
        printBoard(board);
        return true; // Found one solution, return true
    }

    for (int i = 0; i < 8; i++) {
        if (isValidPlacement(board, i, col)) {
            board[i][col] = 'Q'; // Place queen
            if (solveNQueens(board, col + 1)) // Recur to place rest
                return true; // Stop after finding the first solution
            board[i][col] = '.'; // Backtrack
        }
    }
    return false; // No solution found in this configuration
}

int main() {
    vector<vector<char>> board(8, vector<char>(8, '.')); // Initialize with '.'
    solveNQueens(board, 0);
    return 0;
}
