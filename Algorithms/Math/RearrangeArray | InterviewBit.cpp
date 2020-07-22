#include <bits/stdc++.h>
using namespace std;

void arrange(vector<int> &A) {
    int n = A.size();
    for (int i = 0; i < n; i++) {
        A[i] += (A[A[i]] % n) * n;
    }
    
    for (int i = 0; i < n; i++) {
        A[i] /= n;
    }
    // return A;
    
}

int main () {
    vector<int> vec{1, 4, 3, 5, 2, 0, 1,};
    arrange(vec);
    
    for (auto num : vec) {
        cout << num << " ";
    }
    cout << "\n";
    return 0;
}
