#include <bits/stdc++.h>
using namespace std;

int isPalindrome(int A) {
    string B = to_string(A);
    int n = B.length();
    for (int i = 0; i <= n/2; i++) {
        if (B[i] != B[n - 1 - i]) {
            return 0;
        }
    }
    return 1;
}


int main () {
    cout << isPalindrome(1234321) << "\n";
    return 0;
}
