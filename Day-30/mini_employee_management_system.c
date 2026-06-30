#include <stdio.h>
int main()
{
int n, i;

printf("Enter number of employees: ");
scanf("%d", &n);

int empId[n];
char empName[n][50];
float salary[n];

for(i = 0; i < n; i++)
    {
printf("Enter details of Employee %d\n", i + 1);

printf("Enter Employee ID: ");
scanf("%d", &empId[i]);

printf("Enter Employee Name: ");
scanf("%s", empName[i]);

printf("Enter Salary: ");
scanf("%f", &salary[i]);
    }

printf("----- Employee Records -----\n");
for(i = 0; i < n; i++)
    {
printf("Employee %d\n", i + 1);
printf("Employee ID   : %d\n", empId[i]);
printf("Employee Name : %s\n", empName[i]);
printf("Salary        : %.2f\n", salary[i]);
    }
return 0;
}