#include <bits/stdc++.h>
using namespace std;

void swap (int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int firstMissingPositive(vector<int> &A) {
    int n = A.size();
    for (int i = 0; i < n; i++) {
        while (A[i] > 0 && A[i] <= n && A[i] != A[A[i] - 1]) {
            swap (A[i], A[A[i] - 1]);
        }
    }
    for (int i = 0; i < n; i++) {
        if (A[i] != i + 1) return i + 1;
    }
    return n + 1;
}

int main () {
    vector<int> arr {1, 2, 4, 5, 6, 6, 6};
    cout << firstMissingPositive(arr) << "\n";
    return 0;
}
