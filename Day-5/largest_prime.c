#include <stdio.h>
int main() {
int num, maxPrime = -1;
printf("Enter a number: ");
scanf("%d", &num);
int temp = num;
// Divide by 2 to remove all even factors
while (temp % 2 == 0) {
maxPrime = 2;
temp /= 2;
}
// Check odd numbers up to sqrt(temp)
for (int i = 3; i * i <= temp; i += 2) {
while (temp % i == 0) {
maxPrime = i;
temp /= i;
}
 }
// If temp is still greater than 2, it must be prime
if (temp > 2) {
 maxPrime = temp;
    }
printf("Largest prime factor of %d is: %d\n", num, maxPrime);
return 0;
}