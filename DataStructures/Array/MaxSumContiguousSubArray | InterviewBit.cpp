#include <bits/stdc++.h>
using namespace std;

int maxSubArray(const vector<int> &A) {
    int local_max = A[0], global_max = A[0];
    int n = A.size();
    for (int i = 1; i < n; i++) {
        local_max = max(A[i], local_max + A[i]);
        if (local_max > global_max) {
            global_max = local_max;
        }
    }
    return global_max;
    
}


int main () {
    vector<int> A{5, 6, 22, 5, -12, 1};
    cout << maxSubArray(A) << "\n";
    return 0;
}
