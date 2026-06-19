#include <stdio.h>
int main()
{
int a[10][10], b[10][10];
int rows, columns;
int i, j;
printf("Enter number of rows: ");
scanf("%d", &rows);
printf("Enter number of columns: ");
scanf("%d", &columns);
printf("Enter elements of matrix:\n");
for(i = 0; i < rows; i++)
    {
for(j = 0; j < columns; j++)
    {
scanf("%d", &a[i][j]);
    }
    }
// Find transpose
for(i = 0; i < rows; i++)
    {
for(j = 0; j < columns; j++)
    {
b[j][i] = a[i][j];
    }
    }
printf("Transpose Matrix:\n");
for(i = 0; i < columns; i++)
    {
for(j = 0; j < rows; j++)
    {
printf("%d ", b[i][j]);
    }
printf("\n");
    }
    return 0;
}