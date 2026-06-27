// Write a program to Create marksheet generation system.

#include <iostream>
using namespace std;

int main()
{
    string name;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks of 5 Subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "\nTotal Marks: " << total;
    cout << "\nPercentage: " << percentage;

    if(percentage >= 90)
        cout << "\nGrade: A";
    else if(percentage >= 80)
        cout << "\nGrade: B";
    else if(percentage >= 70)
        cout << "\nGrade: C";
    else if(percentage >= 60)
        cout << "\nGrade: D";
    else
        cout << "\nGrade: Fail";

    return 0;
}