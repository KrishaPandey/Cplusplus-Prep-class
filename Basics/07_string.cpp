#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    // Concatenation
    string fullName = firstName + " " + lastName;

    // Length
    int length = fullName.length();

    // Substring
    string sub = fullName.substr(0, 3);

    // Find
    size_t pos = fullName.find("a"); // returns position of 'a'

    // Replace
    fullName.replace(0, 1, "X");

    cout << "\nFull Name: " << fullName << endl;
    cout << "Length: " << length << endl;
    cout << "First 3 chars: " << sub << endl;
    cout << "Position of first 'a': " << pos << endl;

    return 0;
}

