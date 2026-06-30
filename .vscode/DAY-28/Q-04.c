//write a program to ceate contact management system
#include <stdio.h>
#include <string.h>

struct Contact
{
    int id;
    char name[50];
    char phone[20];
    char email[100];
};

struct Contact contacts[100];
int count = 0;

// Function to add a new contact
void addContact()
{
    printf("\nEnter Contact ID: ");
    scanf("%d", &contacts[count].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", contacts[count].name);

    printf("Enter Phone Number: ");
    scanf(" %[^\n]", contacts[count].phone);

    printf("Enter Email: ");
    scanf(" %[^\n]", contacts[count].email);

    count++;
    printf("\nContact Added Successfully!\n");
}

// Function to display all contacts
void displayContacts()
{
    if(count == 0)
    {
        printf("\nNo Contacts Available.\n");
        return;
    }

    printf("\n------ Contacts ------\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nID          : %d", contacts[i].id);
        printf("\nName        : %s", contacts[i].name);
        printf("\nPhone       : %s", contacts[i].phone);
        printf("\nEmail       : %s\n", contacts[i].email);
    }
}

// Function to search for a contact
void searchContact()
{
    int id, found = 0;

    printf("\nEnter Contact ID to Search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(contacts[i].id == id)
        {
            printf("\nContact Found!\n");
            printf("Name        : %s\n", contacts[i].name);
            printf("Phone       : %s\n", contacts[i].phone);
            printf("Email       : %s\n", contacts[i].email);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nContact Not Found!\n");
}

// Function to delete a contact
void deleteContact()
{
    int id, found = 0;

    printf("\nEnter Contact ID to Delete: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(contacts[i].id == id)
        {
            for(int j = i; j < count - 1; j++)
            {
                contacts[j] = contacts[j + 1];
            }
            count--;
            printf("\nContact Deleted Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nContact Not Found!\n");
}

int main()
{
    int choice;

    do
=======
