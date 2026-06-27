#include <stdio.h>
struct Student
{
int roll;
char name[50];
float m1, m2, m3, m4, m5;
float total, percentage;
};

int main()
{
struct Student s;

printf("===== Marksheet Generation System =====\n");

printf("Enter Roll Number: ");
scanf("%d", &s.roll);

printf("Enter Student Name: ");
scanf("%s", s.name);

printf("Enter Marks of 5 Subjects:\n");
printf("Subject 1: ");
scanf("%f", &s.m1);

printf("Subject 2: ");
scanf("%f", &s.m2);

printf("Subject 3: ");
scanf("%f", &s.m3);

printf("Subject 4: ");
scanf("%f", &s.m4);

printf("Subject 5: ");
scanf("%f", &s.m5);

// Calculate Total
s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;

// Calculate Percentage
s.percentage = s.total / 5;

printf("\n========== MARKSHEET ==========\n");
printf("Roll Number : %d\n", s.roll);
printf("Name        : %s\n", s.name);

printf("\nMarks\n");
printf("Subject 1 : %.2f\n", s.m1);
printf("Subject 2 : %.2f\n", s.m2);
printf("Subject 3 : %.2f\n", s.m3);
printf("Subject 4 : %.2f\n", s.m4);
printf("Subject 5 : %.2f\n", s.m5);

printf("\nTotal      : %.2f", s.total);
printf("\nPercentage : %.2f%%", s.percentage);

// Grade
if (s.percentage >= 90)
        printf("\nGrade : A+");
    else if (s.percentage >= 80)
        printf("\nGrade : A");
    else if (s.percentage >= 70)
        printf("\nGrade : B");
    else if (s.percentage >= 60)
        printf("\nGrade : C");
    else if (s.percentage >= 40)
        printf("\nGrade : D");
    else
        printf("\nGrade : F (Fail)");

    return 0;
}