// Write a program to Find first non-repeating character.

#include <iostream>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};

    for(int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[str[i]] == 1) {
            cout << "First non-repeating character: " << str[i];
            return 0;
        }
    }

    cout << "No non-repeating character found";
    return 0;
}