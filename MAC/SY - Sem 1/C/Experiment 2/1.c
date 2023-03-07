// Search data using Linear search: Consider the following list to perform Linear
// search (56, 36, 89, 57, 01, 00, 67, 59) 1. Search the item 01 from the above list
// and write the item is found or not with procedure. 2. Search the item 55 from
// the above list and write the item is found or not with procedure.

#include <stdio.h>

int main()
{
    int a[8];
    int i, n, item;
    printf("Enter the items: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the item to be searched: ");
    scanf("%d", &item);
    for (i = 0; i < 8; i++)
    {
        if (a[i] == item)
        {
            printf("Item found at index %d\n", i);
            break;
        }
    }
    if (i == 8)
    {
        printf("Item not found\n");
    }
    return 0;
}