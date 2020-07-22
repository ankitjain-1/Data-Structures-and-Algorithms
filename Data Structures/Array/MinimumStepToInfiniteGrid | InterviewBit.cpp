#include <bits/stdc++.h>
using namespace std;

int coverPoints(vector<int> &A, vector<int> &B) {
    int count = 0;
    int n = A.size();
    int dx, dy;
    for (int i = 0; i < n - 1; i++) {
        dx = abs(A[i + 1] - A[i]);
        dy = abs(B[i + 1] - B[i]);
        count += (dx > dy ? dx : dy);
    }
    return count;
}


int main () {
    vector<int> A{4, 3, 5, 2, 1, 9};
    vector<int> B{6, 2, 7, 1, 9, 4};

    cout << coverPoints(A, B) << "\n";
}
