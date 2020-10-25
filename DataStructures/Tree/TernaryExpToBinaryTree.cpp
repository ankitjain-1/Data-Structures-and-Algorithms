//
// Created by ankit on 29/09/20.
//
#include<bits/stdc++.h>

using namespace std;

struct Node {
    char data;
    struct Node* left;
    struct Node* right;

    Node(char x) {
        data = x;
        left = nullptr, right = nullptr;
    }

};

void preorder(Node* root) {
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

Node* TernaryExpToBinaryTree(string str, int& i);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int i = 0;
        Node* root = TernaryExpToBinaryTree(str, i);
        preorder(root);
        cout << endl;
    }
}

Node* createNode(char data) {
    return new Node(data);
}

Node* TernaryExpToBinaryTree(string str, int& i) {
    Node* rootPtr = createNode(str[i]);
    if (i == str.length() - 1) return rootPtr;
    i++;
    if (str[i] == '?') {
        i++;
        rootPtr->left = TernaryExpToBinaryTree(str, i);
        i++;
        // i++;
        rootPtr->right = TernaryExpToBinaryTree(str, i);
        // i++;
        return rootPtr;
    }
    else return rootPtr;
}
