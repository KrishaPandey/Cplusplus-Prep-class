#include<iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
    void common() {
        cout << "All shapes have borders.\n";
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};

int main() {
    Shape* s = new Circle();
    s->draw();
    s->common();
    return 0;
}

