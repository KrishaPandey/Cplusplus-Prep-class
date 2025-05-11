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
    node* fourth = new node(40);
    node* fifth = new node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    int newValue;
    cout << "Enter new value: ";
    cin >> newValue;

    first->data = newValue;  

    node* temp = first;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

