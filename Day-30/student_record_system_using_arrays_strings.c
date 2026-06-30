#include <stdio.h>
int main()
{
int n, i;

printf("Enter number of students: ");
scanf("%d", &n);

int roll[n];
char name[n][50];
float marks[n];

for(i = 0; i < n; i++)
    {
printf("Enter details of Student %d\n", i + 1);

printf("Enter Roll Number: ");
scanf("%d", &roll[i]);

printf("Enter Name: ");
scanf("%s", name[i]);

printf("Enter Marks: ");
scanf("%f", &marks[i]);
    }

printf("----- Student Records -----\n");

for(i = 0; i < n; i++)
    {
printf("Student %d\n", i + 1);
printf("Roll Number : %d\n", roll[i]);
printf("Name        : %s\n", name[i]);
printf("Marks       : %.2f\n", marks[i]);
    }
return 0;
}