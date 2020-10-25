#include <bits/stdc++.h>
using namespace std;

void set1(int& num, int pos) {
    num |= (1 << pos);
    cout << num << "\n";

}

int main () {
    int x = 10;
    int pos = 2;
    set1(x, pos);
    // cout << x << "\n";
}
