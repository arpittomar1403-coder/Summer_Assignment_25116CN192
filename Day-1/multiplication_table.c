#include<stdio.h>
int main(){
  int number, i;
  printf("Enter an integer:");
  scanf("%d",&number);
  printf("multiplication table of %d:\n",number);
  for(i=1;i<=12;i++){
    printf("%d*%d=%d\n",number,i,number*i);
  }
  return 0;
}