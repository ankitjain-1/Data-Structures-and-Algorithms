//
// Created by ankit on 09/09/20.
//

#include <bits/stdc++.h>

using namespace std;

void TOH(int n, int A, int C, int B, int& count) {
    if (n > 0) {
        TOH(n - 1, A, B, C, count);
//        cout << "move disk " << n << " from rod " << A << " to rod " << C << "\n";
        cout << A << " " << C << "\n";
        count++;
        TOH(n - 1, B, C, A, count);
    }
}

int main() {
    int t;
//    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int count = 0;
        int A = 1, B = 2, C = 3;
        TOH(n, A, C, B, count);
        cout << count << "\n";
    }
}