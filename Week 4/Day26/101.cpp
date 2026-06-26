// Write a program to Create number guessing game.

#include <iostream>
using namespace std;

int main()
{
    int secret = 25;
    int guess;

    cout << "Guess the number (1-50): ";
    cin >> guess;

    if (guess == secret)
    {
        cout << "Congratulations! Correct Guess.";
    }
    else if (guess < secret)
    {
        cout << "Too Low!";
    }
    else
    {
        cout << "Too High!";
    }

    return 0;
}