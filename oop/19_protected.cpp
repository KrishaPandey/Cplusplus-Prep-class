#include <iostream>
using namespace std;

class Animal {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }
};

class Dog : public Animal {
public:
    void display() {
        cout << "Dog's name is: " << name << endl; // Direct access because 'name' is protected
    }
};

int main() {
    Dog d;
    d.setName("Bruno");
    d.display();

    return 0;
}

