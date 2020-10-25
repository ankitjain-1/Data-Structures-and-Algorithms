//
// Created by ankit on 23/09/20.
//

/*
 * There are two types of tree traversal ->
 *
 * 1. Breadth-First Traversal
 *      a. Level Order Traversal
 *
 * 2. Depth-First Traversal
 *      a. Preorder Traversal
 *      b. Inorder Traversal
 *      c. Postorder Traversal
 */


#include "BinaryTreeTraversal.h"
#include <bits/stdc++.h>

using namespace std;


// Breadth-First Traversal -> Level Order Traversal
void levelOrderTraversal(Node* rootPtr) {
    queue<Node*> Q;
    Q.push(rootPtr);
    while (!Q.empty()) {
        Node* current = Q.front();
        cout << current->data << " ";
        if (current->left) Q.push(current->left);
        if (current->right) Q.push(current->right);
        Q.pop();
    }
}

// Depth-First Traversal -> a. Preorder Traversal
void PreorderTraversal(Node* rootPtr) {
    if (rootPtr == nullptr) return;
    cout << rootPtr->data << " ";
    if (rootPtr->left != nullptr) PreorderTraversal(rootPtr->left);
    if (rootPtr->right != nullptr) PreorderTraversal(rootPtr->right);
}

// Depth-First Traversal -> a. Inorder Traversal
void InorderTraversal(Node* rootPtr) {
    if (rootPtr == nullptr) return;
    if (rootPtr->left != nullptr) InorderTraversal(rootPtr->left);
    cout << rootPtr->data << " ";
    if (rootPtr->right != nullptr) InorderTraversal(rootPtr->right);
}

// Depth-First Traversal -> a. Preorder Traversal
void PostorderTraversal(Node* rootPtr) {
    if (rootPtr == nullptr) return;
    if (rootPtr->left != nullptr) PostorderTraversal(rootPtr->left);
    if (rootPtr->right != nullptr) PostorderTraversal(rootPtr->right);
    cout << rootPtr->data << " ";
}


