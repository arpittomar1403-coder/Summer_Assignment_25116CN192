#include <stdio.h>
struct Bank
{
int accNo;
char name[50];
float balance;
};

int main()
{
struct Bank b;
int choice;
float amount;

printf("Enter Account Number: ");
scanf("%d", &b.accNo);

printf("Enter Account Holder Name: ");
scanf(" %[^\n]", b.name);

printf("Enter Initial Balance: ");
scanf("%f", &b.balance);

do
{
printf("\n===== Bank Account System =====\n");
printf("1. Deposit Money\n");
printf("2. Withdraw Money\n");
printf("3. Display Account Details\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice)
{
            case 1:
                printf("Enter Amount to Deposit: ");
                scanf("%f", &amount);
                b.balance = b.balance + amount;
                printf("Deposit Successful!\n");
                break;

            case 2:
                printf("Enter Amount to Withdraw: ");
                scanf("%f", &amount);

                if(amount <= b.balance)
                {
                    b.balance = b.balance - amount;
                    printf("Withdrawal Successful!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("\n--- Account Details ---\n");
                printf("Account Number : %d\n", b.accNo);
                printf("Account Holder : %s\n", b.name);
                printf("Balance        : %.2f\n", b.balance);
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