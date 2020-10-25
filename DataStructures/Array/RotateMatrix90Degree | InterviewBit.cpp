#include <bits/stdc++.h>
using namespace std;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}


void rotate(vector<vector<int> > &A) {
    int nr = A.size();
    int nc = A[0].size();
    
    for (int i = 0; i < nr; i++) {
        for (int j = i; j < nc; j++) {
            swap(A[i][j], A[j][i]);
        }
    }
    
    for (int i = 0; i < nr; i++) {
        for (int j = 0; j < nc/2; j++) {
            swap(A[i][j], A[i][nc - 1 - j]);
        }
    }
}


int main () {
    vector<vector<int> > matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(matrix);
    for (auto row : matrix) {
        for (auto ele : row) {
            cout << ele << " ";
        }
        cout << "\n";
    }
}
