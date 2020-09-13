//
// Created by ankit on 09/09/20.
//

#include <bits/stdc++.h>

using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;

//  method 1 =>
//  long long res = factorial(m + n - 2) / ( factorial(m - 1) * factorial(n - 1) );

//  method 2 =>
//  formule (5 + 4)! / (5! * 4!) redeced to (9 * 8 * 7 * 6) / (4!)
        int mini = min (m - 1, n - 1);
        int tot = m + n - 2;
        long long upp = 1;
        while (mini--) {
            upp *= tot--;
        }
        long long dow = factorial(min(m - 1, n - 1));
        long long res = upp / dow;
        cout << res << "\n";
    }
}