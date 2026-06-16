// Write a program to Remove duplicates from array.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "After removing duplicates:\n";

    for(int i = 0; i < n; i++) {
        bool duplicate = false;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }

        if(!duplicate) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}