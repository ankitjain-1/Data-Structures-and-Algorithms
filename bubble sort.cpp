/**
 *  Time Complexity = O(n*n)
 *  
 * 
 **/

#include <bits/stdc++.h>
using namespace std;

void swap(int&, int&);

void swap(int& x, int& y) {
    x = x + y;
    y = x - y;
    x = x - y;
}
void print_seq(vector<int> seq) {
    for (auto num: seq) {
        cout << num << " ";
    }
    cout << "\n";
}

int main () {
    vector<int> seq;
    int num;
    cout << "enter number separated by space and exit by pressing other than int: " << "\n";
    while (cin >> num) {
        seq.push_back(num);
    }
    for (int i = 0; i<seq.size(); i++) {
        for (int j = 0; j < (seq.size() - 1 - i); j++) {
            if (seq[j] > seq[j+1]) {
                swap(seq[j], seq[j+1]);
            }
        }
    }
    print_seq(seq);
    return 0;
}