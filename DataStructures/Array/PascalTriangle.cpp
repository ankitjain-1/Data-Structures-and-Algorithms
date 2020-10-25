#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > pascal_triangle(int A) {
    vector<vector<int> > mat;
    vector<vector<int> > temp3;
    if (A == 0) return temp3;
    // mat[0].push_back(1);
    vector<int> temp2;
    temp2.push_back(1);
    mat.push_back(temp2);
    for (int i = 1; i < A; i++) {
        vector<int> temp;
        temp.push_back(1);
        for(int j = 1; j < i; j++) {
            temp.push_back(mat[i - 1][j - 1] + mat[i - 1][j]);
        }
        temp.push_back(1);
        mat.push_back(temp);
    }
    return mat;
}

int main () {
    vector<vector<int> > tri;
    tri = pascal_triangle(7);
    for (auto row : tri) {
        for (auto ele : row) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}
