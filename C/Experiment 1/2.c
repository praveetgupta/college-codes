#include <stdio.h>

int main()
{

    printf("The pattern is: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;
}