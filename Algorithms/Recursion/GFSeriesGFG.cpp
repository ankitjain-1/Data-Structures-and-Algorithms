//
// Created by ankit on 09/09/20.
//

#include <bits/stdc++.h>

using namespace std;

long long int T(int n) {
    if (n == 0 || n == 1) return n;
//    return pow( T(n - 2), 2) - T(n - 1);
    return T(n - 2) * T(n - 2) - T(n - 1);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cout << T(i) << " ";
        }
        cout << "\n";
    }
}