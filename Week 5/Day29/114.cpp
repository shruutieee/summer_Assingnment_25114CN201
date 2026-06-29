// Write a program to Create menu-driven array operations system.

#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, key, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    do {
        cout << "\n===== ARRAY OPERATIONS =====";
        cout << "\n1. Display";
        cout << "\n2. Sum";
        cout << "\n3. Maximum";
        cout << "\n4. Search";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Array: ";
                for (i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;

            case 2: {
                int sum = 0;
                for (i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum;
                break;
            }

            case 3: {
                int max = arr[0];
                for (i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];
                cout << "Maximum = " << max;
                break;
            }

            case 4: {
                cout << "Enter element to search: ";
                cin >> key;
                bool found = false;

                for (i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        cout << "Found at position " << i + 1;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Element not found.";
                break;
            }

            case 5:
                cout << "Program Ended.";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while (choice != 5);

    return 0;
}