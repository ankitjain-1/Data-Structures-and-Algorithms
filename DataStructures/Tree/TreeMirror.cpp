//
// Created by ankit on 25/09/20.
//

#include <bits/stdc++.h>
#include "BinarySearchTree/BSTimplementation.h"
#include "BinarySearchTree/BinaryTreeTraversal.h"

using namespace std;

void swapNodes(Node*&x, Node*&y) {
    Node* temp = x;
    x = y;
    y = temp;
}

void mirrorTree(Node* node) {
    // Your Code Here
    if (node == nullptr) return;
    swapNodes(node->left, node->right);
    mirrorTree(node->left);
    mirrorTree(node->right);
}

int main() {
    Node* rootPtr = nullptr;
    insertNode(rootPtr, 10);
    insertNode(rootPtr, 5);
    insertNode(rootPtr, 15);
    insertNode(rootPtr, 4);
    insertNode(rootPtr, 6);
    insertNode(rootPtr, 14);
    insertNode(rootPtr, 20);

    PreorderTraversal(rootPtr);
    cout << "\n";

    mirrorTree(rootPtr);

    PreorderTraversal(rootPtr);
    cout << "\n";

    return 0;
    
}
