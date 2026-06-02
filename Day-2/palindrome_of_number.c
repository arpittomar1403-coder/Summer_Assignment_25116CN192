#include<stdio.h>
int main() {
int n, temp, rev = 0, remainder ;
printf("Enter number: ");
scanf("%d", &n);
temp = n;
while(n != 0) {
remainder = n % 10;
rev = rev * 10 + remainder ;
n = n/10;
 }
if(temp == rev)
printf("Palindrome");
 else
printf("Not Palindrome");
return 0;
}