#include <stdio.h>
int main() {
int rows = 5;
for (int i = 1; i <= rows; i++) {
for (int j = 1; j <= rows - i; j++) {
printf(" ");
 }
// Counting up
for (int k = 1; k <= i; k++) {
printf("%d", k);
}
// Counting down
for (int l = i - 1; l >= 1; l--) {
printf("%d", l);
 }
printf("\n");
 }
 return 0;
}