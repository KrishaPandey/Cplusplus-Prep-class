#include<iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor called!" << endl;
    }

    ~Student() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Student s1;  // Constructor called when object created
    // Destructor will be called automatically when s1 goes out of scope
    return 0;
}

