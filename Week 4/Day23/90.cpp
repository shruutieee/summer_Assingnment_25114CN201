// Write a program to Find first repeating character.

#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};

    for(int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;

        if(freq[str[i]] > 1) {
            cout << "First repeating character: " << str[i];
            return 0;
        }
    }

    cout << "No repeating character found";
    return 0;
}