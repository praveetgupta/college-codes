#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, f_size, f_start;

    // Get the number of blocks in the disk from the user
    printf("Enter the number of blocks in the disk: ");
    scanf("%d", &n);

    int disk[n]; // Array to represent disk

    // Initialize all blocks in the disk to 0 (unallocated)
    for (i = 0; i < n; i++)
    {
        disk[i] = 0;
    }

    // Get the size of the file from the user
    printf("Enter the size of the file: ");
    scanf("%d", &f_size);

    // Allocate contiguous blocks to the file
    for (i = 0; i < n - f_size + 1; i++)
    {
        int flag = 1;

        // Check if the consecutive blocks are unallocated
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

    if (i == n - f_size + 1)
    {
        printf("File cannot be allocated.\n");
        exit(0);
    }

    // Mark the allocated blocks as 1 (allocated)
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
    printf("\n");

    return 0;
}
