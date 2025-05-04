#include<iostream>
using namespace std;

class Animal {
	public :
		int x=5;
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Dog : private Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
	Animal a;
	a.x;
    Dog d;
    d.eat();   // Inherited
    d.bark();  // Own method
    return 0;
}

