#include <stdio.h>

int main()
{

    int arr[] = {1, 2, 3, 4, 4, 5};
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] == arr[j])
                printf("The first repeating element is: %d", arr[i]);
        }
    }
    return 0;
}