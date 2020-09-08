#include <bits/stdc++.h>
using namespace std;

void swap(char x, char y) {
    char temp = x;
    x = y;
    y = temp;
}

int reverse(int A) {
    string num = to_string(A);
    bool posi = true;
    int n = num.length();
    if (num[0] == '-') {
        posi = false;
        for (int i = 1; i < n; i++) {
            num[i - 1] = num[i];
        }
    }
    // if (n > 10) return 0;
    // if (n == 10 && num[n - 1] == )
    for (int i = 0; i < n / 2; i++) {
        swap(num[i], num[n - i - 1]);
    }
    
    long long int res = strtol(num);
    if (res > INT_MAX)  return 0;
    
    return int(res);
}

int main () {
    //code
    int A = 1234;
    cout << reverse(A) << "\n";
}
