// write a program to write function for palindrome.

#include <iostream>
using namespace std;

bool palindrome(int n) {
    int rev = 0, p = n;

    while (p > 0) {
        rev = rev * 10 + p % 10;
        p /= 10;
    }

    return (n == rev);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (palindrome(num))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}