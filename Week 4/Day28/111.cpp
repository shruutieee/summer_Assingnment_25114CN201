// Write a program to Create ticket booking system.

#include <iostream>
using namespace std;

class Ticket {
    string name;
    int seats;

public:
    void bookTicket() {
        cin.ignore();
        cout << "Enter Passenger Name: ";
        getline(cin, name);

        cout << "Enter Number of Seats: ";
        cin >> seats;

        cout << "\nTicket Booked Successfully!\n";
    }

    void display() {
        cout << "\nPassenger Name: " << name;
        cout << "\nSeats Booked: " << seats << endl;
    }
};

int main() {
    Ticket t;

    cout << "=== Ticket Booking System ===\n";

    t.bookTicket();
    t.display();

    return 0;
}

