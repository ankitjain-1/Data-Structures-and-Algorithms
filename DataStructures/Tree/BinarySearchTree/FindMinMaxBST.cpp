//
// Created by ankit on 22/09/20.
//
#include "FindMinMaxBST.h"
#include <bits/stdc++.h>
using namespace std;

int findMinIter(Node* rootPtr) {
    if (rootPtr == nullptr) {
        cout << "Tree is empty" << "\n";
        return -1;
    }
    while (rootPtr->left) {
        rootPtr = rootPtr->left;
    }
    return rootPtr->data;
}

int findMinRecur(Node* rootPtr) {
    if (rootPtr == nullptr) {
        cout << "Tree is empty\n";
        return -1;
    } else if (rootPtr->left == nullptr) return rootPtr->data;
    return findMinRecur(rootPtr->left);
}

int findMaxIter(Node* rootPtr) {
    if (rootPtr == nullptr) {
        cout << "Tree is empty" << "\n";
        return -1;
    }
    while (rootPtr->right) {
        rootPtr = rootPtr->right;
    }
    return rootPtr->data;
}

int findMaxRecur(Node* rootPtr) {
    if (rootPtr == nullptr) {
        cout << "Tree is empty\n";
        return -1;
    } else if (rootPtr->right == nullptr) return rootPtr->data;
    return findMaxRecur(rootPtr->right);
}
