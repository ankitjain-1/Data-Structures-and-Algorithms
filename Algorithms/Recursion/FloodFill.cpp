//
// Created by ankit on 13/09/20.
//

#include <bits/stdc++.h>

using namespace std;

void floodFill(vector<vector<char>> &vec, int row, int col, int r, int c, char toFIll, char prevFilled);

void floodFill(vector<vector<char>> &vec, int row, int col, int r, int c, char toFIll, char prevFilled) {
    if ( (r < 0) || (r >= row) || (c < 0) || (c >= col) ) return;
    if (vec[r][c] != prevFilled) return;
    vec[r][c] = toFIll;
    floodFill(vec, row , col, r + 1, c, toFIll, prevFilled);
    floodFill(vec, row , col, r, c + 1, toFIll, prevFilled);
    floodFill(vec, row , col, r - 1, c, toFIll, prevFilled);
    floodFill(vec, row , col, r, c - 1, toFIll, prevFilled);
}

void printVec(const vector<vector<char>> &vec) {
    for (const auto& row : vec) {
        for (auto item : row) {
            cout << item << " ";
        }
        cout << "\n";
    }
}

int main() {
    vector<vector<char>> vec =
            {{'4', '2', '2', '2', '1', '1'},
             {'4', '2', '1', '2', '1', '9'},
             {'4', '2', '2', '2', '1', '1'},
             {'1', '1', '1', '1', '1', '9'},
             {'1', '9', '9', '1', '1', '1'},
             {'1', '1', '9', '9', '9', '1'}
            };
    int row = vec.size();    // 6
    int col = vec[0].size(); // 6
    printVec(vec);
    cout << "\n";
    floodFill(vec, row, col, 5, 5, '*', '1');
    printVec(vec);
    return 0;
}
