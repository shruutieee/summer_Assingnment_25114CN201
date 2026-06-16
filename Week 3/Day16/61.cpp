//  Write a program to Find missing number in array. 


#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter value of N: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " elements:\n";

    for(int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int sum = n * (n + 1) / 2;
    int arrSum = 0;

    for(int i = 0; i < n - 1; i++) {
        arrSum += arr[i];
    }

    cout << "Missing Number = " << sum - arrSum;

    return 0;
}