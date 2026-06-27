#include <stdio.h>
struct Employee
{
int id;
char name[50];
float salary;
};

int main()
{
struct Employee emp[100];
int choice, n, count = 0, i, searchId;

while (1)
    {
printf("\n===== Employee Management System =====\n");
printf("1. Add Employee\n");
printf("2. Display Employees\n");
printf("3. Search Employee\n");
printf("4. Exit\n");

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

                    printf("Enter Employee Salary: ");
                    scanf("%f", &emp[count].salary);

                    count++;
                }
                break;

            case 2:
                if (count == 0)
                {
                    printf("No employee records found!\n");
                }
                else
                {
                    printf("\nEmployee Records\n");

                    for (i = 0; i < count; i++)
                    {
                        printf("\nEmployee ID : %d", emp[i].id);
                        printf("\nName        : %s", emp[i].name);
                        printf("\nSalary      : %.2f\n", emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &searchId);

                for (i = 0; i < count; i++)
                {
                    if (emp[i].id == searchId)
                    {
                        printf("\nEmployee Found\n");
                        printf("Employee ID : %d\n", emp[i].id);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Salary      : %.2f\n", emp[i].salary);
                        break;
                    }
                }

                if (i == count)
                {
                    printf("Employee not found!\n");
                }

                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}