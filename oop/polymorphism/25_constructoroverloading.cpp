#include <iostream>
using namespace std;

class Box {
public:
    int length, width, height;

    // Parameterized constructor with two values (length, width)
    Box(int l, int w) {
        length = l;
        width = w;
    }

    // Parameterized constructor with three values (length, width, height)
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    Box box1(10, 5);       // Calls constructor with two parameters
    box1.display();

    Box box2(10, 5, 7);    // Calls constructor with three parameters
    box2.display();
    
    return 0;
}

