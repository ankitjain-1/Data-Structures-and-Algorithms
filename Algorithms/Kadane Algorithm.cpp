#include <bits/stdc++.h>
using namespace std;

int main () {
    int A[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int local_max = A[0], global_max = A[0]; 

    for (int i = 1  ; i < n; i++) {
        local_max = max(A[i], local_max + A[i]);
        if (local_max > global_max) {
            global_max = local_max;
        }
    }
    cout << global_max << "\n";
    return 0;
}
