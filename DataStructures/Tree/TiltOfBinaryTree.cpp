//
// Created by ankit on 30/09/20.
//

#include <bits/stdc++.h>

using namespace std;

struct Node {
    int val;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

int tiltTree(Node* root);

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        map<int, Node*> m;
        int n;
        scanf("%d", &n);
        struct Node* root = NULL;
        struct Node* child;
        while (n--) {
            Node* parent;
            char lr;
            int n1, n2;
            scanf("%d %d %c", &n1, &n2, &lr);
            if (m.find(n1) == m.end()) {
                parent = new Node(n1);
                m[n1] = parent;
                if (root == NULL)
                    root = parent;
            } else
                parent = m[n1];
            child = new Node(n2);
            if (lr == 'L')
                parent->left = child;
            else
                parent->right = child;
            m[n2] = child;
        }
        cout << tiltTree(root) << endl;
    }
    return 0;
}
// Contributed by: Harshit Sidhwa
// } Driver Code Ends


//User function Template for C++
/*
struct Node {
	int val;
	struct Node *left, *right;
};
*/
// Your are required to complete this function
// function should return the tilt of the tree
int sum = 0;
int sumTilt = 0;

int returnTreeSum(Node* root) {
    if (root == nullptr) return 0;
    sum += root->val;
    returnTreeSum(root->left);
    returnTreeSum(root->right);
    return sum;
}

void returnTilt(Node* root) {
    if (root->left == nullptr && root->right == nullptr) return;
    int l = 0, r = 0;
    sum = 0;
    if (root->left) l = returnTreeSum(root->left);
    sum = 0;
    if (root->right) r = returnTreeSum(root->right);
    sumTilt += ((l - r >= 0) ? (l - r) : -(l - r));
    if (root->left) returnTilt(root->left);
    if (root->right) returnTilt(root->right);
}


int tiltTree(Node* root) {
    // Code here
    if (root == nullptr) return 0;
    sum = 0;
    sumTilt = 0;
    returnTilt(root);
    return sumTilt;
}
