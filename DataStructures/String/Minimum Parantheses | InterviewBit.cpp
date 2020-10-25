#include <bits/stdc++.h>
using namespace std;

int solve(string A) {
    vector<char> stack;
    int n = A.length();
    for (int i = 0; i < n; i++) {
        if (stack.size() == 0) {
            stack.push_back(A[i]);
            continue;
        }
        if (A[i] == ')' && stack[stack.size() - 1] == '(') stack.pop_back();
        else stack.push_back(A[i]);
    }
    return stack.size();
}


int main () {
    string A = "(((())))()()(((()(()((";
    cout << solve(A) << "\n";
    return 0;
}
