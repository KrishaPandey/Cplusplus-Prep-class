#include <iostream>
using namespace std;

int main() {
    cout << "Numbers from 1 to 10 (excluding 5):" << endl;

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Skip the the loop when i is 5
        }
        cout << i << " ";
    }

    cout << endl;
    return 0;
}

