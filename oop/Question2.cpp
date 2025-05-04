#include <iostream>
using namespace std;

class BoxB; // Forward declaration

class BoxA {
private:
    int length, width, height;

public:
    void setDimensions(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    // Friend function declaration
    friend void compareVolume(BoxA a, BoxB b);
};

class BoxB {
private:
    int length, width, height;

public:
    void setDimensions(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    // Friend function declaration
    friend void compareVolume(BoxA a, BoxB b);
};

// Friend function definition
void compareVolume(BoxA a, BoxB b) {
    int volumeA = a.length * a.width * a.height;
    int volumeB = b.length * b.width * b.height;

    cout << "Volume of Box A: " << volumeA << endl;
    cout << "Volume of Box B: " << volumeB << endl;

    if (volumeA > volumeB)
        cout << "Box A is bigger.\n";
    else if (volumeB > volumeA)
        cout << "Box B is bigger.\n";
    else
        cout << "Both boxes are equal in volume.\n";
}

int main() {
    BoxA a;
    BoxB b;

    a.setDimensions(10, 5, 2); // 100
    b.setDimensions(4, 5, 10);  // 100

    compareVolume(a, b);

    return 0;
}

