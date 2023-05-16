#include <stdio.h>

int main()
{
    int i, j, np, nm, part_size;
    printf("Enter the number of memory partitions: ");
    scanf("%d", &nm);
    printf("Enter the size of each partition: ");
    scanf("%d", &part_size);
    int memory[nm][part_size]; // 2D array to represent memory
    for (i = 0; i < nm; i++)
    {
        for (j = 0; j < part_size; j++)
        {
            memory[i][j] = 0;
        }
    }
    printf("Enter the number of processes: ");
    scanf("%d", &np);
    int process[np][2]; // 2D array to store process ID and size
    for (i = 0; i < np; i++)
    {
        printf("Enter the size of process %d: ", i);
        scanf("%d", &process[i][1]);
        process[i][0] = i;
    }
    // Allocate memory to each process
    int allocated[np], external_frag = 0;
    for (i = 0; i < np; i++)
    {
        allocated[i] = 0;
        for (j = 0; j < nm; j++)
        {
            if (!allocated[i] && process[i][1] <= part_size)
            {
                int k;
                for (k = 0; k < part_size; k++)
                {
                    if (!memory[j][k])
                    {
                        memory[j][k] = process[i][0] + 1;
                        process[i][1] = 0;
                        allocated[i] = 1;
                        break;
                    }
                }
            }
        }
        if (process[i][1])
        {
            external_frag += process[i][1];
        }
    }
    // Print the state of memory after allocation
    printf("\nMemory allocation:\n");
    for (i = 0; i < nm; i++)
    {
        printf("Partition %d: ", i + 1);
        for (j = 0; j < part_size; j++)
        {
            if (memory[i][j])
            {
                printf("%d ", memory[i][j]);
            }
            else
            {
                printf("- ");
            }
        }
        printf("\n");
    }
    printf("Total external fragmentation: %d\n", external_frag);
    return 0;
}
