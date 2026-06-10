#include <stdio.h>
int main() {
int i,j;
int rows = 5;
for (int i = rows; i >= 1; i--) { // use of decrement operator
for (int j = 1; j <= i; j++) {
printf("*");
     }
printf("\n");
    }
return 0;
}