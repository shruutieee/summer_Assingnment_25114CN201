// Write a program to Count words in a sentence.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a sentence: ";
    getline(cin, str);

    int words = 1;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ')
            words++;
    }

    cout << "Total words = " << words;

    return 0;
}