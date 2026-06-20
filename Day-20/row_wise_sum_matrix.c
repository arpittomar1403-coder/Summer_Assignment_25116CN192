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
// Find row-wise sum
for (i = 0; i < rows; i++) {
sum = 0;
for (j = 0; j < columns; j++) {
sum = sum + a[i][j];
    }
printf("Sum of row %d = %d\n", i + 1, sum);
    }
return 0;
}