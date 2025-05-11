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

    int pos, newValue;
	cout << "Enter position to update: ";
	cin >> pos;
	cout << "Enter new value: ";
	cin >> newValue;
	
	node* temp = first;
	int count = 1;
	
	while (temp != NULL && count < pos) {
	    temp = temp->next;
	    count++;
	}
	
	if (temp != NULL) {
	    temp->data = newValue;
	    cout << "Value updated at position " << pos << endl;
	} else {
	    cout << "Invalid position!" << endl;
	}
	 temp = first;

	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}

}

