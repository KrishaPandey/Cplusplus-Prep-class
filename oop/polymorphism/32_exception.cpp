#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int index;

    cout << "Enter index (0–4): ";
    cin >> index;

    try {
        if (index < 0 || index >= 5)
            throw "Array index out of bounds!";
        cout << "Value = " << arr[index] << endl;
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }

    return 0;
}

