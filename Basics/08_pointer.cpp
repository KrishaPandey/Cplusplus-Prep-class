#include <iostream>
using namespace std;

int main() {
    int num = 42;           
    int* ptr = &num;       

    cout << "Value of num: " << num << endl;
    cout << "Address of num (&num): " << &num << endl;
    cout << "Value of ptr (address stored): " << ptr << endl;
    cout << "Value at the address (*ptr): " << *ptr << endl;

    return 0;
}

