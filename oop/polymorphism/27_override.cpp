#include <iostream>
using namespace std;

class Base {
public:
    // Virtual function (method in the base class)
    virtual void display() {
        cout << "Base class displayed" << endl;
    }
};

class Derived : public Base {
public:
    // Overriding the base class display method
    void display() override {
        cout << "Derived class displayed" << endl;
    }
};

int main() {
    Base* basePtr;       // Base class pointer
    Derived derivedObj;  // Derived class object

    basePtr = &derivedObj;  // Base class pointer points to derived class object

    // This will call the overridden method in Derived class
    basePtr->display();  // Output: Derived class display function
    

    return 0;
}

