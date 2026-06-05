//write a program to find largest prime number.
#include <iostream>
using namespace std;

int main() {
    int n, largestPrime = -1;

    cout << "Enter the upper limit: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            largestPrime = i;
        }
    }

    cout << "Largest prime number up to " << n << " is: " << largestPrime;

    return 0;
}
