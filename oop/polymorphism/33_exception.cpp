#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    try {
        if (number < 0)
            throw string("Negative number not allowed!");
        else if (number == 0)
            throw 0; // throw an int
        else
            cout << "You entered: " << number << endl;
    }
    catch (string msg) {
        cout << "Caught :" << msg << endl;
    }
    catch (int x) {
        cout << "Caught integer exception: " << x << " (zero is not accepted)" << endl;
    }
    catch (...) {
        cout << "Caught an unknown exception!" << endl;
    }

    return 0;
}

