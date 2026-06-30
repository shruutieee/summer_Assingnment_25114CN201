// Write a program to Develop complete mini project using arrays, strings and functions.

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void addStudent(struct Student s[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Roll No: ");
        scanf("%d",&s[i].roll);

        printf("Name: ");
        scanf("%s",s[i].name);

        printf("Marks: ");
        scanf("%f",&s[i].marks);
    }
}

void displayStudent(struct Student s[], int n)
{
    int i;

    printf("\nStudent Records\n");

    for(i=0;i<n;i++)
    {
        printf("\nRoll No : %d",s[i].roll);
        printf("\nName    : %s",s[i].name);
        printf("\nMarks   : %.2f\n",s[i].marks);
    }
}

int main()
{
    struct Student s[5];
    int choice;

    do
    {
        printf("\n===== Student Management =====");
        printf("\n1. Add Students");
        printf("\n2. Display Students");
        printf("\n3. Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addStudent(s,5);
                break;

            case 2:
                displayStudent(s,5);
                break;

            case 3:
                printf("Thank You!");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(choice!=3);

    return 0;
}