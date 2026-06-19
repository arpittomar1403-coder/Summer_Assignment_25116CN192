#include <stdio.h>
int main()
{
int a[10][10];
int rows, columns;
int i, j;
int sum = 0;
printf("Enter number of rows: ");
scanf("%d", &rows);
printf("Enter number of columns: ");
scanf("%d", &columns);
if(rows != columns)
    {
printf("Diagonal sum can only be found for a square matrix.");
return 0;
    }
printf("Enter elements of matrix:\n");
for(i = 0; i < rows; i++)
    {
for(j = 0; j < columns; j++)
    {
scanf("%d", &a[i][j]);
    }
    }
// Find diagonal sum
for(i = 0; i < rows; i++)
    {
sum = sum + a[i][i];
    }
printf("Diagonal Sum = %d", sum);
return 0;
}