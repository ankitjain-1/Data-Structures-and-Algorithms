//
// Created by ankit on 22/09/20.
//

#include "searchInBST.h"
bool searchInBST(Node* rootPtr, int data) {
    if (rootPtr == nullptr) return false;
    else if (data == rootPtr->data) return true;
    else if (data <= rootPtr->data) return searchInBST(rootPtr->left, data);
    else if (data > rootPtr->data) return searchInBST(rootPtr->right, data);
    return false;
}