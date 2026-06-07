#include <stdio.h>
int main() {
double base;
int exponent;
double result = 1.0;
printf("Enter base (x): ");
scanf("%lf", &base);
printf("Enter exponent (n): ");
scanf("%d", &exponent);
for (int i = 1; i <= exponent; i++) {
result *= base;
    }
printf("%.2f^%d = %.2f\n", base, exponent, result);
return 0;
}