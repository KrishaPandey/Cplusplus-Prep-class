#include<iostream>
using namespace std;

class account1; // Forward declaration

class account2 {
private:
    int balance;
public:
    account2() { balance = 567; }

    void showacc2() {
        cout << "Balance in account2: " << balance << endl;
    }

    // Friend function declaration
    friend int transfer(account2 , account1 , int amount);
};

class account1 {
private:
    int balance;
public:
    account1() { balance = 345; }

    void showacc1() {
        cout << "Balance in account1: " << balance << endl;
    }

    // Friend function declaration
    friend int transfer(account2 , account1 , int amount);
};

// Friend function definition
int transfer(account2 acc2, account1 acc1, int amount) {
    if (amount <= acc1.balance) {
        acc2.balance += amount;
        acc1.balance -= amount;
        return amount;
    } else {
        cout << "Insufficient balance in account1!" << endl;
        return 0;
    }
}

int main() {
    account1 aa;
    account2 bb;

    cout << "Balance in the accounts before transfer:" << endl;
    aa.showacc1();
    bb.showacc2();

    cout << "Amount transferred from account1 to account2: ";
    cout << transfer(bb, aa, 100) << endl;

    cout << "\nBalance in the accounts after the transfer:" << endl;
    aa.showacc1();
    bb.showacc2();

    return 0;
}

