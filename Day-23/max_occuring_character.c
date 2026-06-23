#include <stdio.h>
#include <string.h>
int main() {
char str[100];
int count[256] = {0};
int i, max = 0;
char maxChar;

printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
// Count frequency of each character
for (i = 0; str[i] != '\0'; i++) {
// Ignore newline character
if (str[i] == '\n')
continue;

count[(unsigned char)str[i]]++;
// Update maximum frequency
if (count[(unsigned char)str[i]] > max) {
max = count[(unsigned char)str[i]];
maxChar = str[i];
    }
    }
printf("Maximum occurring character: %c\n", maxChar);
printf("Number of occurrences: %d\n", max);
return 0;
}