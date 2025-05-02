#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;

public:
    // Parameterized constructor
    Student(string n, int r) {
        name = n;
        roll = r;
    }

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        roll = s.roll;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s1("Ram", 12);
    Student s2 = s1; // Copy constructor is called here

    cout << "Original Object: ";
    s1.display();

    cout << "Copied Object: ";
    s2.display();

    return 0;
}

