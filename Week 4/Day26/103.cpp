// Write a program to Create ATM simulation.

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 5000, amount;

    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Balance = " << balance;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance = balance + amount;
            cout << "Updated Balance = " << balance;
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if(amount <= balance)
            {
                balance = balance - amount;
                cout << "Updated Balance = " << balance;
            }
            else
            {
                cout << "Insufficient Balance.";
            }
            break;

        default:
            cout << "Invalid Choice.";
    }

    return 0;
}