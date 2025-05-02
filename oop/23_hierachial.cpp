#include<iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "This is parent class." << endl;
    }
};

class Child1 : public Parent {
public:
    void child1Display() {
        cout << "This is Child1." << endl;
    }
};

class Child2 : public Parent {
public:
    void child2Display() {
        cout << "This is Child2." << endl;
    }
};

int main() {
    Child1 c1;
    Child2 c2;
    c1.show();
    c1.child1Display();

    c2.show();
    c2.child2Display();
    return 0;
}

