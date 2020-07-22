#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &A) {
    int n = A.size();
    A[n - 1] += 1;
    int carry = A[n - 1] / 10;
    A[n - 1] = A[n - 1] % 10;
    
    for (int i = n - 2; i >= 0; i--) {
        if (carry == 1) {
            A[i] += 1;
            carry = A[i] / 10;
            A[i] = A[i] % 10;
        }
    }
    
    if (carry == 1) {
        A.insert(A.begin(), carry);
    }
    
    int count = 0;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] == 0){
            count ++;
        } else break;
    }
    
    vector<int> B;
    for (int i = count; i < A.size(); i++) {
        B.push_back(A[i]);
    }
    return B;
    
}


int main () {
    vector<int> A{1, 9, 9, 9};
    plusOne(A);
    for (auto num : A) {
        cout << num << " ";
    }
    cout << "\n";
}
