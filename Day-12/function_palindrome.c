#include <stdio.h>
int isPalindrome(int n) {
int original = n, reversed = 0, remainder;
while (n > 0) {
remainder = n % 10;
reversed = reversed * 10 + remainder;
n /= 10;
}
return (original == reversed);
}
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (isPalindrome(num)){
 printf("%d is a Palindrome.\n", num);
} else { 
 printf("%d is not a Palindrome.\n", num);
}
return 0;
}