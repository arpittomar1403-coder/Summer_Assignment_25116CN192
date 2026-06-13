#include <stdio.h>
int main() {
int n, i;
//to get size of the array from the user
printf("Enter the number of elements: ");
scanf("%d", &n);
//declare an array of size n 
    int arr[n];
//input elements into the array
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
printf("Element %d: ", i + 1);
scanf("%d", &arr[i]);
    }
//display the elements of the array
printf("The elements in the array are:\n");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
