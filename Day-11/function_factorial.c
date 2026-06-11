#include <stdio.h>
long long findFactorial(int n) {
long long fact = 1;
for (int i = 1; i <= n; i++) {
fact *= i;
}
return fact;
}
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
printf("Factorial of %d is %lld\n", num, findFactorial(num));
return 0;
}