#include <stdio.h>
void input(int roll[], char name[][50], float marks[], int n);
void display(int roll[], char name[][50], float marks[], int n);

int main()
{
int n;

printf("Enter number of students: ");
scanf("%d", &n);

int roll[n];
char name[n][50];
float marks[n];

input(roll, name, marks, n);
display(roll, name, marks, n);
return 0;
}

void input(int roll[], char name[][50], float marks[], int n)
{
int i;
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
}
void display(int roll[], char name[][50], float marks[], int n)
{
int i;
printf("----- Student Records -----\n");
for(i = 0; i < n; i++)
    {
printf("Student %d\n", i + 1);
printf("Roll Number : %d\n", roll[i]);
printf("Name        : %s\n", name[i]);
printf("Marks       : %.2f\n", marks[i]);
    }
}