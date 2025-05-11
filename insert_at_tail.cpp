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

    node* newNode = new node(40);

    // Traverse to the last node
    node* temp = first;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link new node at end
    temp->next = newNode;

    // Print full list
    temp = first;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}

