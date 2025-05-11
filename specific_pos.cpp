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

    int pos;
    cout << "Enter the position to read (1-based): ";
    cin >> pos;

    node* temp = first;
    int count = 1;

    while (temp != NULL && count < pos) {
        temp = temp->next;
        count++;
    }

    if (temp != NULL) {
        cout << "Value at position " << pos << " is: " << temp->data << endl;
    } else {
        cout << "Invalid position!" << endl;
    }

    return 0;
}

