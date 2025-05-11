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
    node* fourth = new node(40);
    first->next = second;
    second->next = third;
	third->next=fourth;
    int pos = 3;
    int val = 15;
    node* newNode = new node(val);

//    if (pos == 1) {
//        newNode->next = first;
//        first = newNode;
//    } else {

        node* temp = first;
        int count = 1;

        // Traverse to pos-1
        while (count < pos - 1 && temp != NULL) {
            temp = temp->next;
            count++;
        }

        if (temp != NULL) {
            newNode->next = temp->next;
            temp->next = newNode;
        }

    // Print updated list
    node* temp = first;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

