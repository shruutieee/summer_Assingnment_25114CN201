//write a program to find x raised to the power n without pow().
#include <iostream>
using namespace std;

int main() {
    int x, n;
    long long result = 1;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter exponent (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        result *= x;
    }

    cout << x << " raised to the power " << n << " = " << result;

    return 0;
}
