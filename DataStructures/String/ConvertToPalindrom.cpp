#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(string A) {
    
    int n = A.size();
    for (int i = 0; i <= n/2; i++) {
        if(A[i] != A[n - 1 - i]) return false;
    }
    return true;
}
int solve(string A) {
        int n = A.size();
    int mid = n / 2;
    if (isPalindrom(A)) {
        string B = A.substr(0, mid - 1);
        B += A.substr(mid + 1, n - 1);
        if (isPalindrom(B)) return 1;
    }
    
        int i = 0, j = n - 1;
        int count = 0;
        while(i <= j && count < 2) {
            if (A[i] != A[j]) {
                count ++;
                i++;
            } else {
                i++;
                j--;   
            }
        }
        
        if (count == 1) return 1;
        
        count = 0, i = 0, j = n - 1;
        while (i <= j && count < 2) {
            if (A[i] != A[j]) {
                count ++;
                j--;
            } else {
                i++;
                j--;   
            }
        }
        
        if (count == 1) return 1;
        return 0;
}
int main () {
    string A = "pwxu";
    cout << solve(A) << "\n";
    return 0;
}
