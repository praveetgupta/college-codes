#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("The square of odd positioned numbers is: \n");
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] = arr[i] * arr[i];
        }
        printf("%d ", arr[i]);
    }

    return 0;
}