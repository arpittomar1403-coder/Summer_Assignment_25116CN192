#include <stdio.h>
int main()
{
int a[10][10], b[10][10], c[10][10];
int rows, columns;
int i, j;
printf("Enter number of rows: ");
scanf("%d", &rows);
printf("Enter number of columns: ");
scanf("%d", &columns);
printf("Enter elements of first matrix:\n");
for(i = 0; i < rows; i++)
{
for(j = 0; j < columns; j++)
{
scanf("%d", &a[i][j]);
    }
    }
printf("Enter elements of second matrix:\n");
for(i = 0; i < rows; i++)
{
for(j = 0; j < columns; j++)
{
scanf("%d", &b[i][j]);
    }
    }
for(i = 0; i < rows; i++)
{
for(j = 0; j < columns; j++)
{
c[i][j] = a[i][j] + b[i][j];
    }
    }
printf("Resultant Matrix:\n");
for(i = 0; i < rows; i++)
{
for(j = 0; j < columns; j++)
{
printf("%d ", c[i][j]);
    }
printf("\n");
    }
return 0;
}