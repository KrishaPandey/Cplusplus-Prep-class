#include <iostream>
#include <stdexcept>
using namespace std;

class DivisionByZeroException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Division by zero is not allowed!";
    }
};

double divide(double a, double b) {
    if (b == 0)
        throw DivisionByZeroException(); // Throw custom exception
    return a / b;
}

int main() {
    try {
        double result = divide(10, 0); // Trying division by zero
    }
    catch (const DivisionByZeroException& e) {
        cout << e.what() << endl;  // Prints the custom error message
    }
    catch (const exception& e) {
        cout << e.what() << endl;  // Catch any other exceptions
    }

    return 0;
}

