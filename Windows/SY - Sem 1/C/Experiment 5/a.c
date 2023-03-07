// Sort elements in ascending order using Bubble Sort.

#include <stdio.h>
int main()
{
    int array[50], num, a, b, t;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    printf("enter the elements: ");
    for (a = 0; a < num; a++)
        scanf("%d", &array[a]);
    for (a = 0; a < num - 1; a++)
    {
        for (b = 0; b < num - a - 1; b++)
        {
            if (array[b] > array[b + 1])
            {
                t = array[b];
                array[b] = array[b + 1];
                array[b + 1] = t;
            }
        }
    }
    printf("Array after implementing bubble sort:");
    for (a = 0; a < num; a++)
    {
        printf("%d  ", array[a]);
    }
    return 0;
}