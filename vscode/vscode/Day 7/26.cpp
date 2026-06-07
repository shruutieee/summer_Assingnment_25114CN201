//write a program to recursive fibonacci.
#include <iostream>
using namespace std;

int fibonacci(int a)
{
    if (a == 0)
        return 0;
    if (a == 1)
        return 1;

    return fibonacci(a - 1) + fibonacci(a - 2);
}

int main()
{
    int a;

    cout << "Enter the number: ";
    cin >> a;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < a; i++)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
