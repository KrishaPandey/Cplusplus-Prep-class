#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

int main() {
    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    first->next = second;
    second->next = third;

    // New node to insert at head
    node* head = new node(5);  // new data

    // Link it to old head (first)
    head->next = first;

    // Now head becomes the new starting point
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}

