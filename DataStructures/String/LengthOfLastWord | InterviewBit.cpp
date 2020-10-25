#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(const string A) {
    int n = A.length();
    int count = 0;
    int count2 = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (A[i] != ' ') break;
        count2++;
    }
    for (int i = n - 1 - count2; i >= 0; i--) {
        if (A[i] == ' ') break;
        count++;
    }
    return count;
}


int main () {
    //code
    string A = "Hello World    fhfiei  ";
    cout << lengthOfLastWord(A) << "\n";
    return 0;
}
