#include <stdio.h>
#include <string.h>
int main() {
char str[200], longest[100];
int i, start = 0;
int maxLen = 0, currentLen = 0;

printf("Enter a sentence: ");
fgets(str, sizeof(str), stdin);

for (i = 0; ; i++) {

if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
if (currentLen > maxLen) {
maxLen = currentLen;
strncpy(longest, &str[start], maxLen);
longest[maxLen] = '\0';
  }
start = i + 1;
currentLen = 0;

if (str[i] == '\0' || str[i] == '\n')
break;
    }
else {
currentLen++;
    }
    }

printf("Longest word: %s\n", longest);
printf("Length: %d\n", maxLen);
return 0;
}