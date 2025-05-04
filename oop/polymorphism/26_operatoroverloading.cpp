#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;  

public:

    Complex(float r, float i) {
    	real=r;
    	imag=i;
	}

    
    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.4, 5.6);  
    Complex c2(1.1, 2.2);  

    Complex c3 = c1 + c2;  

    c3.display();  

    return 0;
}

