/**
 * Time Complexity: O(n*2)

* Auxiliary Space: O(1)

* Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted.

* Algorithmic Paradigm: Incremental Approach

* Sorting In Place: Yes

* Stable: Yes

* Online: Yes

* Uses: Insertion sort is used when number of elements is small. It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.


**/
#include <bits/stdc++.h>
#define fo(i, n)   for(int i = 0; i < n; i++)
// #define fo(n, i, r) for(int i = n; i > 0; i--)
#define Fo(i, k ,n)   for(int i = k; i < n; i++)
using namespace std;

void insertion_sort(vector<int>& seq);
void print_seq(vector<int>);

void insertion_sort(vector<int>& seq){
    int key, j;
    fo(i, seq.size()) {
        key = seq[i];
        j = i - 1;
        while (j >= 0 && key < seq[j]) {
            seq[j + 1] = seq[j];
            j--;
        }
        seq[j + 1] = key;
    }
}


    void print_seq(vector<int> seq) {
        for (auto num: seq) {
            cout << num << " ";
        }
        cout << "/n";
    }


int main () {
    cout << "Enter elements of the arrat to be sorted separated by space, enter any char to stop: " << "\n";
    vector<int> seq;
    int inp;
    while (cin >> inp){
        seq.push_back(inp);
    }
    insertion_sort(seq);
    print_seq(seq);
    return 0;
}
