#include <iostream>
using namespace std;

// Abstract class with pure virtual function
class SalaryCalculator {
public:
    virtual void calculateSalary(int amount) = 0;
};

class FullTime : public SalaryCalculator {
public:
    void calculateSalary(int amount) override {
        cout << "Full-Time Salary: " << amount * 10 << endl;
    }
};


class PartTime : public SalaryCalculator {
public:
    void calculateSalary(int amount) override {
        cout << "Part-Time Salary: " << amount * 5 << endl;
    }
};

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    
    SalaryCalculator* full = new FullTime();
    SalaryCalculator* part = new PartTime();

   
    full->calculateSalary(amount);
    part->calculateSalary(amount);

    // Free memory
    delete full;
    delete part;

    return 0;
}

