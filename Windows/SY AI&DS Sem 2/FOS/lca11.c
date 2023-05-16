#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, f_size, f_start;
    printf("Enter the number of blocks in the disk: ");
    scanf("%d", &n);
    int disk[n]; // 1D array to represent disk
    for (i = 0; i < n; i++)
    {
        disk[i] = 0;
    }
    printf("Enter the size of the file: ");
    scanf("%d", &f_size);
    // Allocate contiguous blocks to the file
    for (i = 0; i < n - f_size + 1; i++)
    {
        if (!disk[i])
        {
            int flag = 1;
            for (j = i; j < i + f_size; j++)
            {
                if (disk[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                f_start = i;
                break;
            }
        }
    }
    if (i == n - f_size + 1)
    {
        printf("File cannot be allocated.\n");
        exit(0);
    }
    for (i = f_start; i < f_start + f_size; i++)
    {
        disk[i] = 1;
    }
    // Print the state of the disk after allocation
    printf("\nDisk allocation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", disk[i]);
    }
    printf("\nFile starts at block %d and ends at block %d.\n", f_start, f_start + f_size - 1);
    return 0;
}
