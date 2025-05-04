#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Display from A" << endl;
    }
};

class B {
public:
    void display() {
        cout << "Display from B" << endl;
    }
};

class C : public A, public B {
    // No display() here
};

int main() {
    C obj;
    obj.A::display(); // ? Compiler error: ambiguous
    return 0;
}
  
