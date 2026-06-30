//write a program to create mini  library system
#include <stdio.h>
#include <string.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
    int issued;   // 0 = Available, 1 = Issued
};

struct Book library[100];
int count = 0;

// Function to add a book
void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &library[count].bookId);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", library[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", library[count].author);

    library[count].issued = 0;

    count++;

    printf("\nBook Added Successfully!\n");
}

// Function to display all books
void displayBooks()
{
    if(count == 0)
    {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\n========== LIBRARY BOOKS ==========\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", library[i].bookId);
        printf("Title   : %s\n", library[i].title);
        printf("Author  : %s\n", library[i].author);

        if(library[i].issued == 0)
            printf("Status  : Available\n");
        else
            printf("Status  : Issued\n");
    }
}

// Function to search a book
void searchBook()
{
    int id, found = 0;

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(library[i].bookId == id)
        {
            printf("\nBook Found!\n");
            printf("Book ID : %d\n", library[i].bookId);
            printf("Title   : %s\n", library[i].title);
            printf("Author  : %s\n", library[i].author);

            if(library[i].issued == 0)
                printf("Status  : Available\n");
            else
                printf("Status  : Issued\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found!\n");
}

// Function to issue a book
void issueBook()
{
    int id, found = 0;

    printf("\nEnter Book ID to Issue: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(library[i].bookId == id)
        {
            found = 1;

            if(library[i].issued == 0)
            {
                library[i].issued = 1;
                printf("\nBook Issued Successfully!\n");
            }
            else
            {
                printf("\nBook is Already Issued!\n");
            }

            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found!\n");
}

// Function to return a book
void returnBook()
{
    int id, found = 0;

    printf("\nEnter Book ID to Return: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(library[i].bookId == id)
        {
            found = 1;

            if(library[i].issued == 1)
            {
                library[i].issued = 0;
                printf("\nBook Returned Successfully!\n");
            }
            else
            {
                printf("\nBook is Already Available!\n");
            }

            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n=================================");
        printf("\n    MINI LIBRARY SYSTEM");
        printf("\n=================================");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue Book");
        printf("\n5. Return Book");
        printf("\n6. Exit");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}
