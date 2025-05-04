#include<iostream>
using namespace std;

class Employee {
    string name;
    int id;
public:
    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
    }

    void showData() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Employee emp[3]; // Array of 3 Employee objects

    for (int i = 0; i < 3; i++) {
        cout << "\nEnter data for Employee " << i + 1 << ":\n";
        emp[i].getData();
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 3; i++) {
        emp[i].showData();
    }

    return 0;
}

