#include <bits/stdc++.h>
using namespace std;

void print_seq(vector<int> seq);
void swap(int&, int&);

void print_seq (vector<int> seq) {
    for (auto num: seq) cout << num << " ";
    cout << "\n";
}

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}


int main () {
    vector<int> seq {5, 3, 1, 2, 6, 4};
    cout << "Enter element of array to be sorted separated by space, enter any char to stop: " << "\n";
    int inp;
    // while (cin >> inp){
    //     seq.push_back(inp);
    // }
    cout << "Entered sequence: ";
    print_seq(seq);

    for(int i = 0; i<seq.size(); i++) {
        int min_index = i;
        for (int j = i; j<seq.size(); j++) {
            if ( seq[min_index] > seq[j] ) {
                min_index = j;
            }
        }
        swap(seq[min_index], seq[i]);
    }
    print_seq(seq);
}