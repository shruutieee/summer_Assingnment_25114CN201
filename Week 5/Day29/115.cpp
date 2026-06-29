// Write a program to Create menu-driven string operations system.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    int choice;

    cout << "Enter first string: ";
    cin >> str1;

    do {
        cout << "\n===== STRING OPERATIONS =====";
        cout << "\n1. Length";
        cout << "\n2. Copy";
        cout << "\n3. Concatenate";
        cout << "\n4. Compare";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Length = " << strlen(str1);
                break;

            case 2:
                strcpy(str2, str1);
                cout << "Copied String = " << str2;
                break;

            case 3:
                cout << "Enter second string: ";
                cin >> str2;
                strcat(str1, str2);
                cout << "Concatenated String = " << str1;
                break;

            case 4:
                cout << "Enter second string: ";
                cin >> str2;

                if (strcmp(str1, str2) == 0)
                    cout << "Strings are Equal";
                else
                    cout << "Strings are Not Equal";
                break;

            case 5:
                cout << "Program Ended.";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while (choice != 5);

    return 0;
}