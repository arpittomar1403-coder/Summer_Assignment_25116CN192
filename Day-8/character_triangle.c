#include <stdio.h>
int main() {
int i,j;
int rows = 5;
for (int i = 1; i <= rows; i++) {
char ch = 'A';
for (int j = 1; j <= i; j++) {
printf("%c", ch);
ch++; // Move to the next letter 
    }
printf("\n");
 }
return 0;
}