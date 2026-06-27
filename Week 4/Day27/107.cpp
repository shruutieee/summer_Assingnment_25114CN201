// Write a program to Create salary management system.

#include <iostream>
using namespace std;

int main()
{
    string name;
    float salary, bonus, total;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> salary;

    cout << "Enter Bonus: ";
    cin >> bonus;

    total = salary + bonus;

    cout << "\nEmployee Name: " << name;
    cout << "\nTotal Salary: " << total;

    return 0;
}