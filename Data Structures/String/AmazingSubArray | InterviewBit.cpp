#include <bits/stdc++.h>
using namespace std;

int solve(string A) {
    vector<int> pos;
    int n = A.size();
    cout << A << "\n";
    for (int i = 0; i < n; i++) {
        if (A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U' || A[i] == 'a' || A[i] == 'e' || 
        A[i] == 'i' || A[i] == 'o' || A[i] == 'u') {
            pos.push_back(i);
        }
    }
    for (auto ch : pos) cout << ch << " ";
    cout << "\n";
    // pos.push_back(n - 1);
    int m = pos.size();
    int count = 0;
    // int temp
    for (int i = 0; i < m; i++) {
        count +=  n - pos[i];
    }
    return count % 10003;
}


int main () {
    //code
    cout << solve("ABC") << "\n";
}


//  || 'E' || 'I' || 'O' || 'U' || 'a' || 'e' || 'i' || 'o' || 'u'

// (A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U' || A[i] == 'a' || A[i] == 'e' || 
        // A[i] == 'i' || A[i] == 'o' || A[i] == 'u')