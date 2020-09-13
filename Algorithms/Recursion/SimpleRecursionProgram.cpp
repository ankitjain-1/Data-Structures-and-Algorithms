#include <bits/stdc++.h>
using namespace std;

void PrintFun(int test) {
    if (test < 1) {
        return;
    } else {
        cout << test << " ";
        PrintFun(test - 1);
        cout << test << " ";
        return;
    }
}

int main () {
    int test = 3;
    PrintFun(test);
    cout << "\n";
    return -1;
}
