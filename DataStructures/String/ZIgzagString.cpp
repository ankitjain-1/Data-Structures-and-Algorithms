#include <bits/stdc++.h>
using namespace std;

string convert(string A, int B) {
    int n = A.length();
    vector<int> ival;
    for (int i = 0; i < B; i++) {
        ival.push_back(i);
    }
    for (int i = B - 2; i > 0; i--) {
        ival.push_back(i);
    }
    int S = ival.size();
    vector<vector<char> > res(B);
    char ch;
    for (int i = 0; i < n; i++) {
        ch = A[i];

        res[ival[i % S]].push_back(ch);
    }
    string resString = "";
    for (auto row : res) {
        for (auto ele : row) {
            // resString += ele;
            cout << ele << " ";
        }
    }
    return resString;
    
}


int main () {
    string A = "PAYPALISHIRING";
    int B = 3;
    cout << convert (A, B) << "\n";
    return 0;
}
