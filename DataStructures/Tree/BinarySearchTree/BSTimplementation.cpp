//
// Created by ankit on 22/09/20.
//

#include "BSTimplementation.h"


Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    return newNode;
}

Node* insertNode(Node*&rootPtr, int data) {
    if (rootPtr == nullptr) {
        rootPtr = createNode(data);
    } else if (data <= rootPtr->data) {
        insertNode(rootPtr->left, data);
    } else {
        insertNode(rootPtr->right, data);
    }
    return rootPtr;
}
