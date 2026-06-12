#include <stdio.h>
// Function declaration
void printFibonacci(int terms);
int main() {
int terms;
printf("Enter the number of terms: ");
scanf("%d", &terms);
if (terms <= 0) {
printf("Please enter a positive integer greater than 0.\n");
} else {
printf("Fibonacci Sequence up to %d terms:\n", terms);
printFibonacci(terms);
}
return 0;
}
// Function to calculate and print Fibonacci sequence
void printFibonacci(int terms) {
long long t1 = 0, t2 = 1, nextTerm;
for (int i = 1; i <= terms; ++i) {
printf("%lld ", t1);
// Calculate the next term
nextTerm = t1 + t2;
// Update values for the next iteration
t1 = t2;
t2 = nextTerm;
}
printf("\n");
}