//
// Created by ankit on 22/09/20.
//

#include <bits/stdc++.h>
#include "BSTimplementation.h"
#include "searchInBST.h"
#include "FindMinMaxBST.h"
#include "heightOfBST.h"
#include "BinaryTreeTraversal.h"
using namespace std;

int getSize(Node* node)
{
    // Your code here
    if (node == nullptr) return 0;
    int count = 0;
    queue<Node*> Q;
    Q.push(node);
    while (!Q.empty()) {
        Node* current = Q.front();
        count ++;
        if (current->left) Q.push(current->left);
        if (current->right) Q.push(current->left);
        Q.pop();
    }
    return count;
}

int main() {
        Node* rootPtr = nullptr;
        insertNode(rootPtr, 10);
        insertNode(rootPtr, 5);
        insertNode(rootPtr, 15);
        insertNode(rootPtr, 4);
        insertNode(rootPtr, 6);
        insertNode(rootPtr, 14);
        insertNode(rootPtr, 20  );
    cout << (searchInBST(rootPtr, 25) ? "Found" : "Not Found") << "\n";

    cout << "Height Of Tree" << heightOfBST(rootPtr) << "\n";

    cout << "Min in BST: " << findMinRecur(rootPtr) << "\n";
    cout << "Max in BST: " << findMaxRecur(rootPtr) << "\n";

    levelOrderTraversal(rootPtr);
    cout << "\n";
    PreorderTraversal(rootPtr);
    cout << "\n";
    InorderTraversal(rootPtr);
    cout << "\n";
    PostorderTraversal(rootPtr);
    cout << "\n";

    cout << getSize(rootPtr);
    return 0;
}