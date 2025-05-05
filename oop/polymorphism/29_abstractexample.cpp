#include<iostream>
using namespace std;

// Abstract class
class Payment {
public:
    virtual void pay(float amount) = 0; // Pure virtual function
};

// Derived class: Credit Card Payment
class CreditCardPayment : public Payment {
public:
    void pay(float amount) override {
        cout << "Validating credit card details...\n";
        cout << "Processing credit card payment of Rs. " << amount << "\n";
    }
};

// Derived class: Cash Payment
class CashPayment : public Payment {
public:
    void pay(float amount) override {
        cout << "Counting cash...\n";
        cout << "Payment of Rs. " << amount << " received in cash.\n";
    }
};

int main() {
    Payment* p;
    CreditCardPayment cp;
    CashPayment cap;

    int choice;
    float amount;

    cout << "Enter amount to pay: ";
    cin >> amount;

    cout << "Choose payment method:\n1. Credit Card\n2. Cash\nChoice: ";
    cin >> choice;

    if (choice == 1)
        p =  &cp;
    else
        p = &cap;

    p->pay(amount);  // Abstracted call — we don't know what pay() actually does

    return 0;
}

