#include <stdio.h>
int main() {
int choice;
float balance = 5000, amount;

printf("===== ATM Simulation =====\n");
printf("1. Check Balance\n");
printf("2. Deposit Money\n");
printf("3. Withdraw Money\n");
printf("Enter your choice: ");
scanf("%d", &choice);

if (choice == 1) {
printf("Your balance is: %.2f\n", balance);
    }
else if (choice == 2) {
printf("Enter amount to deposit: ");
scanf("%f", &amount);

balance = balance + amount;

printf("Deposit successful.\n");
printf("New balance: %.2f\n", balance);
    }
else if (choice == 3) {
printf("Enter amount to withdraw: ");
scanf("%f", &amount);

if (amount <= balance) {
balance = balance - amount;
printf("Withdrawal successful.\n");
printf("Remaining balance: %.2f\n", balance);
} else {
printf("Insufficient balance.\n");
    }
    }
else {
printf("Invalid choice.\n");
    }
return 0;
}