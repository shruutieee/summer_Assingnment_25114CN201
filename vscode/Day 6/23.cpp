//write a program to count set bits in a number.
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        count += num % 2;  // Add 1 if the last bit is set
        num /= 2;
    }

    cout << "Number of set bits = " << count;

    return 0;
}
