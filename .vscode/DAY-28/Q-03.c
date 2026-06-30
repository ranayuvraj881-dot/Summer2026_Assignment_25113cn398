//wriite a program to create ticket booking system
#include <stdio.h>
#include <string.h>

struct Ticket
{
    int ticketID;
    char name[50];
    char destination[50];
    int seatNo;
    int booked;   // 1 = Booked, 0 = Cancelled
};

struct Ticket ticket[100];
int count = 0;

// Function to book a ticket
void bookTicket()
{
    printf("\nEnter Ticket ID: ");
    scanf("%d", &ticket[count].ticketID);

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", ticket[count].name);

    printf("Enter Destination: ");
    scanf(" %[^\n]", ticket[count].destination);

    printf("Enter Seat Number: ");
    scanf("%d", &ticket[count].seatNo);

    ticket[count].booked = 1;
    count++;

    printf("\nTicket Booked Successfully!\n");
}

// Function to display all booked tickets
void displayTickets()
{
    if(count == 0)
    {
        printf("\nNo Tickets Booked.\n");
        return;
    }

    printf("\n------ Booked Tickets ------\n");

    for(int i = 0; i < count; i++)
    {
        if(ticket[i].booked == 1)
        {
            printf("\nTicket ID   : %d", ticket[i].ticketID);
            printf("\nPassenger   : %s", ticket[i].name);
            printf("\nDestination : %s", ticket[i].destination);
            printf("\nSeat Number : %d\n", ticket[i].seatNo);
        }
    }
}

// Function to search a ticket
void searchTicket()
{
    int id, found = 0;

    printf("\nEnter Ticket ID to Search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(ticket[i].ticketID == id && ticket[i].booked == 1)
        {
            printf("\nTicket Found!\n");
            printf("Passenger   : %s\n", ticket[i].name);
            printf("Destination : %s\n", ticket[i].destination);
            printf("Seat Number : %d\n", ticket[i].seatNo);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nTicket Not Found!\n");
}

// Function to cancel ticket
void cancelTicket()
{
    int id, found = 0;

    printf("\nEnter Ticket ID to Cancel: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(ticket[i].ticketID == id && ticket[i].booked == 1)
        {
            ticket[i].booked = 0;
            printf("\nTicket Cancelled Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nTicket Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n==============================");
        printf("\n   TICKET BOOKING SYSTEM");
        printf("\n==============================");
        printf("\n1. Book Ticket");
        printf("\n2. View Booked Tickets");
        printf("\n3. Search Ticket");
        printf("\n4. Cancel Ticket");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                bookTicket();
                break;

            case 2:
                displayTickets();
                break;

            case 3:
                searchTicket();
                break;

            case 4:
                cancelTicket();
                break;

            case 5:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}