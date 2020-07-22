#include <bits/stdc++.h>
using namespace std;

int titleToNumber(string A) {
    // vector<string> alpha;
    // for (int i = 65; i <= 90; i++) {
    //     vector.push_back(i);
    // }
    int n = A.length();
    int ch;
    int sum = 0;
    int po = 0;
    for (int i = n - 1; i >= 0; i--) {
        ch = A[i];
        sum += (A[i] - 64) * pow(26, po);
        po++;
    }
    return sum;
}



int main () {
    string st = "A";
    cout << titleToNumber(st) << "\n";
    return 0;
}
