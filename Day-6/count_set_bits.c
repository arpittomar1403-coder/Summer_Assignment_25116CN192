#include <stdio.h>
int main() {
int num, count = 0;
printf("Enter an integer: ");
scanf("%d", &num);
int temp = num;
while (temp > 0) {
count += (temp & 1);
temp >>= 1;
    }
printf("Number of set bits in %d is: %d\n", num, count);
return 0;
}