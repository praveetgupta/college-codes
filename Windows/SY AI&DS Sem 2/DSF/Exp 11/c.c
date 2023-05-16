#include <stdio.h>
#include <string.h>
int main()
{
    FILE *filePointer;
    // Open a file in read mode
    filePointer = fopen("sammed.txt", "r");

    if (filePointer == NULL)
    {
        printf("sammed.txt file failed to open.");
    }
    else
    {
        printf("\nThe file is now open.\n");

        // Read data from file
        char data[50];
        while (fgets(data, 50, filePointer) != NULL)
        {
            printf("%s", data);
        }

        // Close the file
        fclose(filePointer);

        printf("\nData successfully read from file sammed.txt\n");
        printf("The file is now closed.\n\n");
    }
    return 0;
}
