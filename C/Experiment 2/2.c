// Search data using Binary search.

#include <stdio.h>
int main()
{
    int a[10], n, i, key, low, high, mid;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            printf("The key is found at %d position", mid + 1);
            break;
        }
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (low > high)
        printf("The key is not found");
    return 0;
}