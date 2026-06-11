#include <stdio.h>
int main() {
int i,j,k;
int rows = 5;
for (int i = rows; i >= 1; i--) {
for (int j = 1; j <= rows - i; j++) {
printf(" ");
}
 // Print stars
for (int k = 1; k <= (2 * i - 1); k++) {
printf("*");
 }
printf("\n");
}
return 0;
}