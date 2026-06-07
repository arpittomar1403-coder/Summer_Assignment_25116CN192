#include <stdio.h>
int main() {
long long binary;
int decimal = 0, rem, base = 1;
printf("Enter a binary number: ");
scanf("%lld", &binary);
long long temp = binary;
while (temp > 0) {
rem = temp % 10;
decimal += rem * base;
temp /= 10;
base *= 2;
    }
printf("Decimal of %lld is: %d\n", binary, decimal);
return 0;
}