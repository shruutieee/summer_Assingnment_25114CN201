// write a program to count even and odd elements in an array.

#include <iostream>
using namespace std;

int main() {
    int n, even = 0, odd = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even= even+1;
        else
            odd= odd+1;
    }

    cout << "Even elements = " << even << endl;
    cout << "Odd elements = " << odd << endl;

    return 0;
}