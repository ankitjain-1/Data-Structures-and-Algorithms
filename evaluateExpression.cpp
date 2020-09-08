#include <bits/stdc++.h>

using namespace std;

int returnRes(int A, int B, string op) {
    // switch(op) {
    //     case "+": return B + A;
    //     case "-": return B - A;
    //     case "*": return B * A;
    //     case "/": return B / A;
    if (op == "+") {
        return B + A;
    }
    if (op == "-") {
        return B - A;
    }
    if (op == "*") {
        return B * A;
    }
    if (op == "/") {
        return B / A;
    }
}

int evalRPN(vector <string> &A) {
    int n = A.size();
    stack <string> expr;
    string a, b;
    int num1, num2;
    int res;
    for (int i = 0; i < n; i++) {
        string s = A[i];
        if (A[i] == "+" || A[i] == "-" || A[i] == "*" || A[i] == "/") {
            a = expr.top();
            expr.pop();
            b = expr.top();
            expr.pop();
            num1 = stoi(a);
            num2 = stoi(b);
            res = returnRes(num1, num2, A[i]);
            // res = to_string(res);
            expr.push(to_string(res));
        } else expr.push(A[i]);
    }
    return stoi(expr.top());
}


int main() {
    vector <string> expr{"2", "1", "+", "3", "*"};
    cout << evalRPN(expr) << "\n";
}
