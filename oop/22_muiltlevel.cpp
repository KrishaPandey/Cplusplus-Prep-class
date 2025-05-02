#include<iostream>
using namespace std;

class LivingThing {
public:
    void breathe() {
        cout << "Breathing..." << endl;
    }
};

class Animal : public LivingThing {
public:
    void move() {
        cout << "Animal moves." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog d;
    d.breathe();
    d.move();
    d.bark();
    return 0;
}

