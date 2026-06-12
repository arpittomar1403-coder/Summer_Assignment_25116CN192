#include <stdio.h>
#include <math.h>
// Function declaration
int isArmstrong(int num);
int main() {
int number;
printf("Enter an integer: ");
scanf("%d", &number);
// Call the function and check the result
if (isArmstrong(number)) {
printf("%d is an Armstrong number.\n", number);
} else {
printf("%d is not an Armstrong number.\n", number);
}
return 0;
}
// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
int originalNum, remainder, result = 0, n = 0;
originalNum = num;
while (originalNum != 0) {
originalNum /= 10;
++n;
}
originalNum = num;
while (originalNum != 0) {
remainder = originalNum % 10;
result += (int)pow(remainder, n); 
originalNum /= 10;
}
if (result == num) {
return 1; // It is an Armstrong number
} else {
return 0; // It is not an Armstrong number
    }
}