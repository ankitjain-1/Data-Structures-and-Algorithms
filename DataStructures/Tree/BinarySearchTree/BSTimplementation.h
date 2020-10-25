//
// Created by ankit on 22/09/20.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_BSTIMPLEMENTATION_H
#define DATA_STRUCTURES_AND_ALGORITHMS_BSTIMPLEMENTATION_H

struct Node {
    int data{};
    Node* left = nullptr;
    Node* right = nullptr;
};


Node* insertNode(Node*&rootPtr, int data);

Node* createNode(int data);

#endif //DATA_STRUCTURES_AND_ALGORITHMS_BSTIMPLEMENTATION_H
