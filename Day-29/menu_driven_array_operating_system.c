#include <stdio.h>
int main()
{
int arr[100], n, i, choice, sum = 0;

printf("Enter the number of elements: ");
scanf("%d", &n);

printf("Enter %d elements: ", n);
for(i = 0; i < n; i++)
    {
scanf("%d", &arr[i]);
    }

printf("===== MENU =====\n");
printf("1. Display Array\n");
printf("2. Find Sum\n");
printf("3. Find Largest Element\n");
printf("4. Find Smallest Element\n");

printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice)
    {
case 1:
printf("Array Elements: ");
for(i = 0; i < n; i++)
    {
printf("%d ", arr[i]);
    }
printf("\n");
    break;

case 2:
sum = 0;
for(i = 0; i < n; i++)
    {
sum = sum + arr[i];
    }
printf("Sum = %d\n", sum);
    break;

case 3:
    {
int largest = arr[0];
for(i = 1; i < n; i++)
    {
if(arr[i] > largest)
    {
largest = arr[i];
    }
    }
printf("Largest Element = %d\n", largest);
    break;
    }

case 4:
    {
int smallest = arr[0];
for(i = 1; i < n; i++)
    {
if(arr[i] < smallest)
    {
smallest = arr[i];
    }
    }
printf("Smallest Element = %d\n", smallest);
        break;
    }

default:
printf("Invalid Choice!\n");
    }
return 0;
}