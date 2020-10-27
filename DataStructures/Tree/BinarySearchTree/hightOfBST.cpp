//
// Created by ankit on 22/09/20.
//

#include "heightOfBST.h"
#include "bits/stdc++.h"
using namespace std;

int heightOfBST(Node* rootPtr) {
    if (rootPtr == nullptr) return -1;
    return max(heightOfBST(rootPtr->left), heightOfBST(rootPtr->right)) + 1;
}