/*Write a ‘C’ program to demonstrate various file operations.
a. Open/create a file(Write mode)
b. Close a file
c. Append contents in a file*/

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *filePointer;
    // Open a file in append mode
    filePointer = fopen("sammed.txt", "a");

    if (filePointer == NULL)
    {
        printf("sammed.txt file failed to open.");
    }
    else
    {
        // Append some text to the file
        fprintf(filePointer, "Hola whats up\n");

        // Close the file  fclose(filePointer);

        printf("\nData successfully appended to file sammed.txt\n");
        printf("The file is now closed.\n\n");
    }
    return 0;
}
