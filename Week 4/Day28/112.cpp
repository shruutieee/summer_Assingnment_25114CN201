// Write a program to Create contact management system.

#include <iostream>
using namespace std;

class Contact {
    string name;
    string phone;

public:
    void addContact() {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Phone Number: ";
        getline(cin, phone);
    }

    void displayContact() {
        cout << "\nName: " << name;
        cout << "\nPhone: " << phone << endl;
    }
};

int main() {
    Contact c;

    cout << "=== Contact Management System ===\n";

    c.addContact();

    cout << "\nContact Details";
    c.displayContact();

    return 0;
}

