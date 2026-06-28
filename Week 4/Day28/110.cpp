// Write a program to Create bank account system.

#include <iostream>
using namespace std;

class Bank {
    int accNo;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amount;
        cout << "Enter Deposit Amount: ";
        cin >> amount;
        balance += amount;
    }

    void withdraw() {
        float amount;
        cout << "Enter Withdraw Amount: ";
        cin >> amount;

        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance\n";
    }

    void display() {
        cout << "\nAccount Number: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {
    Bank b;
    int choice;

    b.createAccount();

    do {
        cout << "\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1: b.deposit(); break;
            case 2: b.withdraw(); break;
            case 3: b.display(); break;
            case 4: cout << "Thank You"; break;
            default: cout << "Invalid Choice";
        }

    } while(choice != 4);

    return 0;
}

