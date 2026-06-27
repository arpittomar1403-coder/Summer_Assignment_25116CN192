#include <stdio.h>
struct Employee
{
int id;
char name[50];
float basicSalary, hra, da, grossSalary;
};

int main()
{
struct Employee emp[100];
int choice, n, count = 0, i;

while (1)
    {
printf("\n===== Salary Management System =====\n");
printf("1. Add Employee Salary Details\n");
printf("2. Display Salary Details\n");
printf("3. Exit\n");

printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice)
        {
            case 1:
                printf("How many employees do you want to add? ");
                scanf("%d", &n);

                for (i = 0; i < n; i++)
                {
                    printf("\nEnter Employee ID: ");
                    scanf("%d", &emp[count].id);

                    printf("Enter Employee Name: ");
                    scanf("%s", emp[count].name);

                    printf("Enter Basic Salary: ");
                    scanf("%f", &emp[count].basicSalary);

                    // Calculate HRA and DA
                    emp[count].hra = emp[count].basicSalary * 0.20;
                    emp[count].da = emp[count].basicSalary * 0.10;

                    // Calculate Gross Salary
                    emp[count].grossSalary = emp[count].basicSalary + emp[count].hra + emp[count].da;

                    count++;
                }
                break;

            case 2:
                if (count == 0)
                {
                    printf("No salary records found!\n");
                }
                else
                {
                    printf("\n===== Salary Details =====\n");

                    for (i = 0; i < count; i++)
                    {
                        printf("\nEmployee ID   : %d", emp[i].id);
                        printf("\nName          : %s", emp[i].name);
                        printf("\nBasic Salary  : %.2f", emp[i].basicSalary);
                        printf("\nHRA (20%%)     : %.2f", emp[i].hra);
                        printf("\nDA (10%%)      : %.2f", emp[i].da);
                        printf("\nGross Salary  : %.2f\n", emp[i].grossSalary);
                    }
                }
                break;

            case 3:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
return 0;
}