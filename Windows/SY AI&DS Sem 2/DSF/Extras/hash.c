#include <stdio.h>

int main()
{
    int arr[5] = {-1, -1, -1, -1, -1};
    int num = 0, ele = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter element: ");
        scanf("%d", &num);
        ele = num % 5;
        if (arr[ele] == -1)
            arr[ele] = num;
        else
        {
            printf("\nCollision Found");
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}
