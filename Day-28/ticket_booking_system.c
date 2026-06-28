#include <stdio.h>
struct Ticket
{
char name[50];
int totalTickets;
int bookedTickets;
};

int main()
{
struct Ticket t;
int choice, num;

printf("Enter Customer Name: ");
scanf(" %[^\n]", t.name);

printf("Enter Total Tickets Available: ");
scanf("%d", &t.totalTickets);

t.bookedTickets = 0;

do
{
    printf("\n===== Ticket Booking System =====\n");
    printf("1. Book Ticket\n");
    printf("2. Cancel Ticket\n");
    printf("3. Display Details\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number of Tickets to Book: ");
                scanf("%d", &num);

                if(num <= (t.totalTickets - t.bookedTickets))
                {
                    t.bookedTickets += num;
                    printf("Ticket Booked Successfully!\n");
                }
                else
                {
                    printf("Not Enough Tickets Available!\n");
                }
                break;

            case 2:
                printf("Enter Number of Tickets to Cancel: ");
                scanf("%d", &num);

                if(num <= t.bookedTickets)
                {
                    t.bookedTickets -= num;
                    printf("Ticket Cancelled Successfully!\n");
                }
                else
                {
                    printf("Invalid Number of Tickets!\n");
                }
                break;

            case 3:
                printf("\n--- Booking Details ---\n");
                printf("Customer Name      : %s\n", t.name);
                printf("Total Tickets      : %d\n", t.totalTickets);
                printf("Booked Tickets     : %d\n", t.bookedTickets);
                printf("Available Tickets  : %d\n",
                       t.totalTickets - t.bookedTickets);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}