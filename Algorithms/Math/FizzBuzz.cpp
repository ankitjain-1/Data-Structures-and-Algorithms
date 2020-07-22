#include <bits/stdc++.h>
using namespace std;

vector<string> fizzBuzz(int A) {
    vector<string> vec;
    for (int i = 1; i <= A; i++) {
        if (i % 15 == 0) {
            vec.push_back("FizzBuzz");
        } else if (i % 5 == 0) {
            vec.push_back("Buzz");
        } else if (i % 3 == 0) {
            vec.push_back("Fizz");
        } else {
            vec.push_back(to_string(i));
        }
    }
    return vec;
}


int main () {
    int A = 16;
    vector<string> vec = fizzBuzz(A);
    for (auto num : vec) {
        cout << num << " ";
    }
    cout << "\n";
    return 0;
}


