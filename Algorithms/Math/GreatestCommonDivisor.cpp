#include <bits/stdc++.h>
using namespace std;

int gcd(int A, int B) {
    if (A == 0 || B == 0) {
        return max(A, B);
    }
    while (A != B) {
        if (A > B) {
            A = A - B;
        } else {
            B = B - A;
        }
    }
    return A;
}

int main () {
    cout << gcd(12, 18) << "\n";
}
