// Write a program to Create employee management system.

#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    Employee e[100];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cout << "\nEmployee " << i+1 << endl;

        cout << "ID: ";
        cin >> e[i].id;

        cout << "Name: ";
        cin >> e[i].name;

        cout << "Salary: ";
        cin >> e[i].salary;
    }

    cout << "\nEmployee Records\n";

    for(int i=0;i<n;i++)
    {
        cout << "\nID: " << e[i].id;
        cout << "\nName: " << e[i].name;
        cout << "\nSalary: " << e[i].salary << endl;
    }

    return 0;
}