#include <stdio.h>
int factorial(int n) {
if (n <= 1) // Base Case
return 1;
return n * factorial(n - 1); // Recursive Call
}
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
printf("Factorial of %d is %d\n", num, factorial(num));
return 0;
}