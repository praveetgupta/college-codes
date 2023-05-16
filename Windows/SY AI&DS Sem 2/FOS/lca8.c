#include <stdio.h>

int main()
{
    int n, m, i, j, page_faults = 0;
    printf("Enter the number of page frames: ");
    scanf("%d", &m);
    printf("Enter the number of pages: ");
    scanf("%d", &n);
    int pages[n], frames[m], in_frame[m];
    for (i = 0; i < m; i++)
    {
        frames[i] = -1;
        in_frame[i] = 0;
    }
    printf("Enter the page reference string:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &pages[i]);
    }
    // Perform the page replacement algorithm
    int ptr = 0; // Pointer to the next frame to be replaced
    for (i = 0; i < n; i++)
    {
        int page = pages[i];
        int found = 0;
        for (j = 0; j < m; j++)
        {
            if (frames[j] == page)
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            page_faults++;
            frames[ptr] = page;
            ptr = (ptr + 1) % m;
        }
        // Print the current state of the page frames
        printf("Page frames: ");
        for (j = 0; j < m; j++)
        {
            if (frames[j] == -1)
            {
                printf("X ");
            }
            else
            {
                printf("%d ", frames[j]);
            }
        }
        printf("\n");
    }
    printf("Total page faults: %d\n", page_faults);
    return 0;
}
