#include<stdio.h>
int main(){
// n is the user input, sum stores the total , i is for the loop
  int n, sum = 0, i;
  // for value of the number
  printf("Enter n:");
  scanf("%d",&n);
  // loop from 1 to n , to keep adding the numbers
  for (i=1;i<=n;i++){
    sum += i; // for adding current number to the total
  }
  //output the final result
printf("sum =%d",sum);
return 0;
}
