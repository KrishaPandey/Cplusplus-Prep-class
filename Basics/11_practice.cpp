#include <iostream>
using namespace std;

int main() {
    const int subjects = 5;
    int marks[subjects];
    int sum = 0;

    for (int i = 0; i < subjects; i++) {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    cout << "\nTotal Marks = " << sum << " out of 500" << endl;

 
    if (sum >= 200)
        cout << "Result: Pass " << endl;
    else
        cout << "Result: Fail " << endl;

    return 0;
}

