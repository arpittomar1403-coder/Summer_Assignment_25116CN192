#include <stdio.h>
int main() {
int decimal, remainder;
long long binary = 0, place = 1;
printf("Enter a decimal number: ");
scanf("%d", &decimal);
int temp = decimal;
while (temp > 0) {
remainder = temp % 2;
binary += remainder * place;
temp /= 2;
place *= 10;
    }
printf("Binary of %d is: %lld\n", decimal, binary);
return 0;
}