#include <stdio.h>
int main() {
int i,j;
int rows = 5;
for (int i = 1; i <= rows; i++) {
for (int j = 1; j <= i; j++) {
printf("%d", i); // to print current number
     }
printf("\n");
    }
return 0;
}