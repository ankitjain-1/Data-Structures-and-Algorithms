#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> A, int element) {
    int n = A.size();
    int lb = 0, ub = n - 1;
    int mid = lb + ub;
    while(A[mid] != element && ub > lb) {
        if (A[mid] == element) break;
        else if (A[mid] > element){
            ub = mid - 1;
        } else if (A[mid] < element){
            lb = mid + 1;
        }
        mid = (lb + ub)/2 + 1;
    }
    return A[mid] == element ? mid : -1;
}

int main () {
    vector<int> arr {1,2,3,4,5,6,7,8,9,10};
    int value = 9;
    int index = binary_search(arr, value);
    cout << index << "\n";
}
