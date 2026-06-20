#include <stdio.h>
int main() {
int a[10][10];
int rows, columns, i, j, sum;
// Input rows and columns
printf("Enter number of rows and columns: ");
scanf("%d %d", &rows, &columns);
// Input matrix elements
printf("Enter the matrix elements:\n");
for (i = 0; i < rows; i++) {
for (j = 0; j < columns; j++) {
scanf("%d", &a[i][j]);
    }
    }
// Find column-wise sum
for (j = 0; j < columns; j++) {
sum = 0;
for (i = 0; i < rows; i++) {
sum = sum + a[i][j];
    }
printf("Sum of column %d = %d\n", j + 1, sum);
    }
return 0;
}