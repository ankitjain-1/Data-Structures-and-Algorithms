#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string A) {
    string B = "";
    int n = A.length();
    for (int i = 0; i < n; i++) {
        if (isalnum(A[i])) B += A[i];
    }
    transform(B.begin(), B.end(), B.begin(), ::toupper);
    n = B.length();
    for (int i = 0; i <= n / 2; i++) {
        if (B[i] != B[n - i - 1]) return 0;
    }
    return 1;
}


int main () {
    //code
    string A = "A man, a plan, a canal: Panama";
    cout << isPalindrome(A) << "\n";
    return 0;
}
