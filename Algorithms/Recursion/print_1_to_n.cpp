//
// Created by ankit on 06/09/20.
//

#include <bits/stdc++.h>

using namespace std;

void print(int n) {
//  cout << n << " ";
//  if (n == 1) return;
//  print(n - 1);
    if (n == 0) return;
    print(n - 1);
    cout << n << " ";
}

int main() {
    int n = 10;
    print(n);
    return 0;
}