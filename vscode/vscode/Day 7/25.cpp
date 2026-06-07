//write a program to recursive factorial.
#include <iostream>
using namespace std;

long long fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " = " << fact(num);

    return 0;
}