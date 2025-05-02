#include<iostream>
using namespace std;

class Student {
public:
    int roll;
    static int count;  // Static data member

    Student(int r) {
        roll = r;
        count++;  // Increase count whenever a new object is created
    }

    void display() {
        cout << "Roll: " << roll << endl;
    }

    static void showCount() {  // Static member function
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;  // Define the static data member

int main() {
    Student s1(101);
    Student s2(s1);
    Student s3(103);
    

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();  // Call static method

    return 0;
}

