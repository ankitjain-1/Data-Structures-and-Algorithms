#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node (int x) {
        data = x;
        next = NULL;
    }
};

struct LinkedList {
    Node* head = NULL;

    void append(int data) {
        Node* newNode = new Node(data);
        if(head == NULL) head = newNode;
        else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void const printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << "\n";
    }

    void const printLength() {
        int count = 0;
        Node* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        cout << count << "\n";
    }
};


int main () {
    //code
    LinkedList ll;
    ll.append(10);
    ll.append(20);
    ll.append(30);
    ll.append(40);
    ll.append(50);
    ll.printLength();
    // cout << ll.head->next->next->data << "\n";

    // cout << ll.head->data << "\n";

}
