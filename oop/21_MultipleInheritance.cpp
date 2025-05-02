#include<iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine starts." << endl;
    }
};

class Wheels {
public:
    void rotate() {
        cout << "Wheels rotate." << endl;
    }
};

class Car : public Engine, public Wheels {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

int main() {
    Car c;
    c.start();
    c.rotate();
    c.drive();
    return 0;
}

