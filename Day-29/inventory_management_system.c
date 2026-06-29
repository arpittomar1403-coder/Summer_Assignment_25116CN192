#include <stdio.h>
int main()
{
int id, quantity, choice;
float price;

printf("===== INVENTORY MANAGEMENT SYSTEM =====\n");
printf("1. Add Product\n");
printf("2. Display Product\n");
printf("3. Update Quantity\n");

printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice)
    {
case 1:
printf("Enter Product ID: ");
scanf("%d", &id);

printf("Enter Product Price: ");
scanf("%f", &price);

printf("Enter Product Quantity: ");
scanf("%d", &quantity);

printf("Product Added Successfully.\n");
   break;

case 2:
printf("Product ID = %d\n", id);
printf("Product Price = %.2f\n", price);
printf("Product Quantity = %d\n", quantity);
    break;

case 3:
printf("Enter New Quantity: ");
scanf("%d", &quantity);

printf("Quantity Updated Successfully.\n");
printf("Updated Quantity = %d\n", quantity);
    break;

default:
printf("Invalid Choice!\n");
    }
return 0;
}