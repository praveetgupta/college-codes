// Sort elements in descending order using Selection Sort

#include <stdio.h>
int main()
{
    int i, j, t, a[50], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("Sorted elements: ");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", a[i]);
    }
    return 0;
}