#include <bits/stdc++.h>
using namespace std;

int compareTwo(string A, string B) {
    int n = min (A.length(), B.length());
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == B[i]) count ++;
        else break;
    }
    return count;
}

string longestCommonPrefix(vector<string> &A) {
    int n = A.size();
    int resint = INT_MAX;
    int temp;
    for (int i = 0; i < n - 1; i++) {
        temp = compareTwo(A[i], A[i + 1]);
        resint = min(resint, temp);
    }
    return A[0].substr(0, resint);
}


int main () {
    vector<string> arr {"abcdefgh", "aefghijk", "abcefgh"};
    cout << longestCommonPrefix (arr) << "\n";
}
