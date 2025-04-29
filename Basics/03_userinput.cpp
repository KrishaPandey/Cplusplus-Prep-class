#include <iostream>

using namespace std;

int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    bool myBool;
    string myString;

    // Taking input from user
    cout << "Enter an integer: ";
    cin >> myInt;

    cout << "Enter a float: ";
    cin >> myFloat;

    cout << "Enter a double: ";
    cin >> myDouble;

    cout << "Enter a character: ";
    cin >> myChar;

    cout << "Enter a boolean (0 or 1): ";
    cin >> myBool;

    cout << "Enter a string (no spaces): ";
    cin >> myString;

    // Printing all values
    cout << "\n--- You entered ---\n";
    cout << "Integer: " << myInt << endl;
    cout << "Float: " << myFloat << endl;
    cout << "Double: " << myDouble << endl;
    cout << "Character: " << myChar << endl;
    cout << "Boolean: " << myBool << endl;
    cout << "String: " << myString << endl;

    return 0;
}

