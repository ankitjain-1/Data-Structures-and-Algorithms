//
// Created by ankit on 07/09/20.
//

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    cout << factorial(n) << "\n";
    return 0;
}
