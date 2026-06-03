#include <stdio.h>
int main()
{
int a, b, max;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
max = (a > b) ? a : b;
while(1)
{
//if number is divisible by both a and b
if (max % a == 0 && max % b == 0)
{
    //it is lcm
printf("LCM = %d", max);
break;
}
//otherwise add 1
max++;
}
return 0;
}