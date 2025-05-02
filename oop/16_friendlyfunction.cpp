#include<iostream>
using namespace std;

class abc;  // Forward declaration

class xyz {
    int x;
public:
    void setvalue(int val) { x = val; }
    friend void max(xyz, abc);
};

class abc {
    int a;
public:
    void setvalue(int val) { a = val; }
    friend void max(xyz, abc);
};

void max(xyz m, abc n) {
    if (m.x >= n.a)
        cout << m.x;
    else
        cout << n.a;
}

int main() {
    abc j;
    j.setvalue(10);

    xyz s;
    s.setvalue(20);

    max(s, j);  // Output will be 20

    return 0;
}

