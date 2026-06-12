#include <stdio.h>
// Function declaration
int isPerfect(int num);
int main() {
int number;
printf("Enter a positive integer: ");
scanf("%d", &number);
// Validate input
if (number <= 0) {
printf("Please enter a positive integer greater than 0.\n");
} else {
// Call the function and check the result
if (isPerfect(number)) {
printf("%d is a Perfect Number.\n", number);
} else {
printf("%d is not a Perfect Number.\n", number);
 }
 }
return 0;
}
// Function to check if a number is a perfect number
int isPerfect(int num) {
int sum = 0;

for (int i = 1; i <= num / 2; i++) {
if (num % i == 0) {
sum += i; // i is a divisor, add it to sum
 }
    }
// If sum of divisors equals the original number, it's perfect
if (sum == num) {
return 1; // True
} else {
return 0; // False
    }
}