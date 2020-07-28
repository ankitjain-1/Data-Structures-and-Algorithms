#include <bits/stdc++.h>
using namespace std;

int romanToInt(string A) {
    int n = A.size();
    int num = 0;
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        if (A[i] == 'I') nums[i] = 1;
        else if (A[i] == 'V') nums[i] = 5;
        else if (A[i] == 'X') nums[i] = 10;
        else if (A[i] == 'L') nums[i] = 50;
        else if (A[i] == 'C') nums[i] = 100;
        else if (A[i] == 'D') nums[i] = 500;
        else if (A[i] == 'M') nums[i] = 1000;
        
    }

    // for (int i = 0; i < n; i++) {
    //     cout << nums[i] << " ";
    // }

    if (n == 1) return nums[0];

    for (int i = n - 1; i >= 0; i--) {

        if (nums[i - 1] >= nums[i]) num += nums[i];
        else {
            num += nums[i] - nums[i - 1];
            i--;
        }
        cout << num << "\n";
    }

    return num;
}

int main () {
    string A = "V";
    cout << romanToInt(A) << "\n";
    
}
