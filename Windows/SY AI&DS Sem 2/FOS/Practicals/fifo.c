#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k, page[50], frame[10], avail, count = 0;

    // Get the number of pages from the user
    printf("Enter the number of pages:");
    scanf("%d", &n);

    // Get the page numbers from the user
    printf("Enter the page numbers:");
    for (i = 0; i < n; i++)
        scanf("%d", &page[i]);

    // Get the number of frames from the user
    printf("Enter the number of frames:");
    scanf("%d", &k);

    // Initialize all frame entries to -1 to indicate empty frame
    for (i = 0; i < k; i++)
        frame[i] = -1;

    j = 0;
    printf("Page\tFrame\n");

    // Iterate through each page
    for (i = 0; i < n; i++)
    {
        printf("%d\t", page[i]);
        avail = 0;

        // Check if the page is already present in any frame
        for (int l = 0; l < k; l++)
        {
            if (frame[l] == page[i])
                avail = 1;
        }

        if (avail == 0)
        {
            // If the page is not present in any frame, replace the oldest page with the current page
            frame[j] = page[i];
            j = (j + 1) % k;
            count++;

            // Print the current state of frames
            for (int l = 0; l < k; l++)
                printf("%d\t", frame[l]);
        }

        printf("\n");
    }

    printf("Page Faults=%d\n", count);
    return 0;
}
