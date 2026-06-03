#include <stdio.h>
#include <math.h>
int main() {
    int lower, upper, i, j, isPrime;
    printf("Enter lower bound: ");
    scanf("%d", &lower);
    printf("Enter upper bound: ");
    scanf("%d", &upper);
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (i = lower; i <= upper; i++) {
    // Skip numbers less than 2 as they are not prime
    if (i < 2) continue;
    isPrime = 1; // Assume the number is prime
    // Check divisibility from 2 up to the square root of i for efficiency
     for (j = 2; j <= sqrt(i); j++) {
     if (i % j == 0) {
     isPrime = 0; // Found a divisor, not prime
      break;
         }
        }
     // If isPrime is still 1, the number is prime
    if (isPrime == 1) {
        printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
