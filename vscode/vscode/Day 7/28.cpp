//write a program to recursive reverse number.
#include <iostream>
using namespace std;

int reverse(int n, int r = 0)
{
    if (n == 0)
        return r;

    return reverse(n / 10, r * 10 + n % 10);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number = " << reverse(num);

    return 0;
}
