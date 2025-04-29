#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 2;

    float result1 = a / b;  // Implicit: integer division
    float result2 = (float)a / b;  // Explicit cast

    cout << "a / b without casting: " << result1 << endl;
    cout << "a / b with casting: " << result2 << endl;

    char ch = 'A';
    cout << "Character: " << ch << ", ASCII: " << int(ch) << endl;

    return 0;
}

