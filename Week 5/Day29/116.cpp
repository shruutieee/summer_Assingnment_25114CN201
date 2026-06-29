// Write a program to Create inventory management system.

#include <iostream>
using namespace std;

struct Item {
    int id;
    char name[30];
    int quantity;
    float price;
};

int main() {
    Item item[100];
    int n = 0, choice, i;

    do {
        cout << "\n===== INVENTORY MANAGEMENT =====";
        cout << "\n1. Add Item";
        cout << "\n2. Display Items";
        cout << "\n3. Search Item";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter Item ID: ";
                cin >> item[n].id;

                cout << "Enter Item Name: ";
                cin >> item[n].name;

                cout << "Enter Quantity: ";
                cin >> item[n].quantity;

                cout << "Enter Price: ";
                cin >> item[n].price;

                n++;
                cout << "Item Added Successfully.";
                break;

            case 2:
                if (n == 0) {
                    cout << "No Items Available.";
                } else {
                    cout << "\nID\tName\tQty\tPrice\n";
                    for (i = 0; i < n; i++) {
                        cout << item[i].id << "\t"
                             << item[i].name << "\t"
                             << item[i].quantity << "\t"
                             << item[i].price << endl;
                    }
                }
                break;

            case 3: {
                int id;
                bool found = false;

                cout << "Enter Item ID to Search: ";
                cin >> id;

                for (i = 0; i < n; i++) {
                    if (item[i].id == id) {
                        cout << "Item Found\n";
                        cout << "Name: " << item[i].name << endl;
                        cout << "Quantity: " << item[i].quantity << endl;
                        cout << "Price: " << item[i].price << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Item Not Found.";
                break;
            }

            case 4:
                cout << "Program Ended.";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while (choice != 4);

    return 0;
}

