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
    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);

    first->next = second;
    second->next = third;

    // Delete tail (third node)
//    if (first->next == NULL) {
//        delete first;
//        first = NULL;
//    } else {
        node* temp = first;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        
        delete temp->next;  
        temp->next = NULL;  
//    }

    // Print list
    node* current = first;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}

