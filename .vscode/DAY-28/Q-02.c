//write a program to create bank account statement
#include <stdio.h>
#include <string.h>

struct Transaction
{
    int date;
    char description[50];
    float amount;
    char type[10];  // "Credit" or "Debit"
};

struct Transaction statements[100];
int count = 0;

// Function to add a transaction
void addTransaction()
{
    printf("\nEnter Date (YYYYMMDD): ");
    scanf("%d", &statements[count].date);

    printf("Enter Description: ");
    scanf(" %[^\n]", statements[count].description);

    printf("Enter Amount: ");
    scanf("%f", &statements[count].amount);

    printf("Enter Type (Credit/Debit): ");
    scanf(" %[^\n]", statements[count].type);

    count++;

    printf("\nTransaction Added Successfully!\n");
}

// Function to display account statement
void displayStatement()
{
    if(count == 0)
    {
        printf("\nNo transactions available.\n");
        return;
    }

    printf("\n----- Bank Account Statement -----\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nTransaction %d\n", i + 1);
        printf("Date       : %d\n", statements[i].date);
        printf("Description: %s\n", statements[i].description);
        printf("Amount     : %.2f\n", statements[i].amount);
        printf("Type       : %s\n", statements[i].type);
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n==============================");
        printf("\n BANK ACCOUNT STATEMENT");
        printf("\n==============================");
        printf("\n1. Add Transaction");
        printf("\n2. Display Statement");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addTransaction();
                break;

            case 2:
                displayStatement();
                break;

            case 3:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}
