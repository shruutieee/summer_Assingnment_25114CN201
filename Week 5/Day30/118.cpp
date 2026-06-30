// Write a program to Create mini library system.

#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Book b[3];
    int i;

    printf("Enter Book Details:\n");

    for(i=0;i<3;i++)
    {
        printf("\nBook %d\n",i+1);

        printf("Book ID: ");
        scanf("%d",&b[i].id);

        printf("Book Name: ");
        scanf("%s",b[i].name);

        printf("Author: ");
        scanf("%s",b[i].author);
    }

    printf("\nLibrary Books:\n");

    for(i=0;i<3;i++)
    {
        printf("\nBook ID : %d",b[i].id);
        printf("\nBook    : %s",b[i].name);
        printf("\nAuthor  : %s\n",b[i].author);
    }

    return 0;
}