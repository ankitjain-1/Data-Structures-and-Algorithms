#include <bits/stdc++.h>
using namespace std;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

vector<int> wave(vector<int> &A) {
    sort(A.begin(), A.end());
    int n = A.size();
    for (int i = 0; i <= n - 2; i+=2) {
        swap(A[i], A[i + 1]);
    }
    return A;
}

int main () {
    vector<int> arr = {6, 5, 4, 2, 7, 9};
    wave(arr);

    for(auto num : arr) {
        cout << num << " ";
    }
    cout << "\n";
    return 0;
}
