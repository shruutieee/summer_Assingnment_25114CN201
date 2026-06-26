// Write a program to Create quiz application.

#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    char answer;

    cout << "Q1. C++ was developed by Bjarne Stroustrup? (Y/N): ";
    cin >> answer;

    if(answer == 'Y' || answer == 'y')
        score++;

    cout << "Q2. 10 + 20 = 40? (Y/N): ";
    cin >> answer;

    if(answer == 'N' || answer == 'n')
        score++;

    cout << "Q3. int stores decimal values? (Y/N): ";
    cin >> answer;

    if(answer == 'N' || answer == 'n')
        score++;

    cout << "\nYour Score = " << score << "/3";

    return 0;
}