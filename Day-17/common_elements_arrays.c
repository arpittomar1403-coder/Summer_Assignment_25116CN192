#include <stdio.h>
int main() {
int a[50], b[50];
int n1, n2, i, j, found = 0;

// Input first array
printf("Enter number of elements in first array: ");
scanf("%d", &n1);
printf("Enter elements of first array:\n");
for(i = 0; i < n1; i++) {
scanf("%d", &a[i]);
}

// Input second array
printf("Enter number of elements in second array: ");
scanf("%d", &n2);
printf("Enter elements of second array:\n");
for(i = 0; i < n2; i++) {
scanf("%d", &b[i]);
}

// Find common elements
printf("Common elements are: ");
for(i = 0; i < n1; i++) {
for(j = 0; j < n2; j++) {
if(a[i] == b[j]) {
printf("%d ", a[i]);
found = 1;
break;
}
}
}
if(found == 0) {
printf("No common elements");
}
return 0;
}