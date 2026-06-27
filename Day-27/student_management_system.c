#include <stdio.h>
struct Student
{
int roll;
char name[50];
float marks;
};
int main()
{
struct Student s[100];
int n, i, choice, searchRoll;
int count = 0;

while (1)
    {
printf("\n===== Student Record Management System =====\n");
printf("1. Add Student\n");
printf("2. Display Students\n");
printf("3. Search Student\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice)
    {
case 1:
printf("How many students do you want to add? ");
scanf("%d", &n);

for(i = 0; i < n; i++)
    {
printf("\nEnter Roll Number: ");
scanf("%d", &s[count].roll);

printf("Enter Name: ");
scanf("%s", s[count].name);

printf("Enter Marks: ");
scanf("%f", &s[count].marks);

count++;
    }
break;

case 2:
if(count == 0)
    {
printf("No records found!\n");
    }
else
    {
printf("\nStudent Records\n");

for(i = 0; i < count; i++)
    {
printf("\nRoll Number : %d", s[i].roll);
printf("\nName        : %s", s[i].name);
printf("\nMarks       : %.2f\n", s[i].marks);
        }
        }
    break;

case 3:
printf("Enter Roll Number to Search: ");
scanf("%d", &searchRoll);

for(i = 0; i < count; i++)
    {
    if(s[i].roll == searchRoll)
    {
printf("\nRecord Found\n");
printf("Roll Number : %d\n", s[i].roll);
printf("Name        : %s\n", s[i].name);
printf("Marks       : %.2f\n", s[i].marks);
break;
    }
    }

if(i == count)
printf("Student not found!\n");

break;

case 4:
return 0;

default:
printf("Invalid Choice!\n");
    }
    }
return 0;
}