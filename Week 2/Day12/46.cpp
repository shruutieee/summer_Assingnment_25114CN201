// write a program to write function for armstrong number.

#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int n) {
    int sum = 0, a = n, digits = 0;

    while (a > 0) {
        digits++;
        a /= 10;
    }

    a = n;

    while (a > 0) {
        int digit = a % 10;
        sum += pow(digit, digits);
        a /= 10;
    }

    return (sum == n);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (armstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}