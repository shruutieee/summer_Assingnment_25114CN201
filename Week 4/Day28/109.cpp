// Write a program to Create library management system.

#include <iostream>
using namespace std;

class Library {
    int bookId;
    string bookName;
    string author;

public:
    void addBook() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();
        cout << "Enter Book Name: ";
        getline(cin, bookName);
        cout << "Enter Author Name: ";
        getline(cin, author);
    }

    void displayBook() {
        cout << "\nBook ID: " << bookId;
        cout << "\nBook Name: " << bookName;
        cout << "\nAuthor: " << author << endl;
    }
};

int main() {
    Library b;

    cout << "=== Library Management System ===\n";
    b.addBook();

    cout << "\nBook Details";
    b.displayBook();

    return 0;
}