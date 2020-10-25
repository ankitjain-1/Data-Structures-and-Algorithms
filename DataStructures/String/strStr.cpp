#include <bits/stdc++.h>
using namespace std;

int strStr(string A, string B) {
    int n = A.length();
    int m = B.length();
    int count, k;
    for (int i = 0; i < n; i++) {
        count = 0;
        k = i;
        for (int j = 0; j < m; j++) {
            if (A[k] == B[j]) {
                count++;
                k++;
                continue;
            }
            break;
        }
        if (count == m) return (i);
    }
    return -1;
}

int main () {
    string A = "llllll0";
    string B = "llll0";
    cout << strStr(A, B) << "\n";
    return 0;
}
