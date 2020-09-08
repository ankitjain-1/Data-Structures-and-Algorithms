#include <bits/stdc++.h> 
using namespace std; 
  
// Function to check redundant brackets in a 
// balanced expression 
bool checkRedundancy(string A) 
{ 
        stack<char> vec;
    int n = A.length();
    for (int i = 0; i < n; i++) {
        if(A[i] == '(' || A[i] == '+' || A[i] == '-' || A[i] == '/' || A[i] == '*') {
            vec.push(A[i]);
        }
        if (A[i] == ')') {
            if (vec.top() == '(') return 1;
            while (vec.top() != '(') {
                vec.pop();
            }
            vec.pop();
        }
    }
    return 0;
} 
  
// Function to check redundant brackets 
void findRedundant(string& str) 
{ 
    bool ans = checkRedundancy(str); 
    if (ans == true) 
        cout << "Yes\n"; 
    else
        cout << "No\n"; 
} 
  
// Driver code 
int main() 
{ 
    string str = "((a+b))"; 
    findRedundant(str); 
  
    // str = "(a+(b)/c)"; 
    // findRedundant(str); 
  
    // str = "(a+b*(c-d))"; 
    // findRedundant(str); 
  
    return 0; 
} 