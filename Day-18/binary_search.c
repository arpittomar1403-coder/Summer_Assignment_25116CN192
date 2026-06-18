#include <stdio.h>
int main() {
int arr[100], n, i, key;
int low, high, mid;
int found = 0;
// Input number of elements
printf("Enter number of elements: ");
scanf("%d", &n);
// Input sorted array elements
printf("Enter %d elements in ascending order:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
// Input element to search
printf("Enter element to search: ");
scanf("%d", &key);
low = 0;
high = n - 1;
while(low <= high) {
mid = (low + high) / 2;
if(arr[mid] == key) {
found = 1;
break;
}
else if(key < arr[mid]) {
high = mid - 1;
}
else {
low = mid + 1;
}
}
if(found == 1)
printf("Element found at position %d", mid + 1);
else
printf("Element not found");
return 0;
}