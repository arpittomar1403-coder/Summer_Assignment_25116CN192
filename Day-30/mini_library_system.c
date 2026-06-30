#include <stdio.h>
int main()
{
int n, i;

printf("Enter number of books: ");
scanf("%d", &n);

int bookId[n];
char bookName[n][50];
char author[n][50];

for(i = 0; i < n; i++)
    {
printf("Enter details of Book %d\n", i + 1);

printf("Enter Book ID: ");
scanf("%d", &bookId[i]);

printf("Enter Book Name: ");
scanf("%s", bookName[i]);

printf("Enter Author Name: ");
scanf("%s", author[i]);
    }

printf("----- Library Records -----\n");

for(i = 0; i < n; i++)
    {
printf("Book %d\n", i + 1);
printf("Book ID     : %d\n", bookId[i]);
printf("Book Name   : %s\n", bookName[i]);
printf("Author Name : %s\n", author[i]);
    }
}