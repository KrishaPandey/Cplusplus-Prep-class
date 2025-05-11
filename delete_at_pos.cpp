#include <iostream>
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
    // Creating the list: 10 ? 20 ? 30 ? 40 ? 50
    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    node* fourth = new node(40);
    node* fifth = new node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    int pos = 3; // We want to delete the 3rd node (value = 30)

    node* temp = first;
    int count = 1;

    // Traverse to the node just before position
    while (count < pos - 1 && temp->next != NULL) {
        temp = temp->next;
        count++;
    }

    // Delete the node at position
    if (temp->next != NULL) {
        node* toDelete = temp->next;         // Node to delete = third (30)
        temp->next = temp->next->next;       // Link second ? fourth
        delete toDelete;                     // Free memory
    }

    // Print the updated list
    node* current = first;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}

