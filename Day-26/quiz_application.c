#include <stdio.h>
int main() {
int answer, score = 0;

printf("Q1. Who has most centuries in odi cricket?\n");
printf("1. Sachin Tendulkar\n2. Virat Kohli\n3. Rohit Sharma\n4. Ricky Ponting\n");
scanf("%d", &answer);

switch(answer) {
case 2:
score++;
printf("Correct!\n");
break;
default:
printf("Wrong!\n");
    }

printf("Score = %d\n", score);
return 0;
}