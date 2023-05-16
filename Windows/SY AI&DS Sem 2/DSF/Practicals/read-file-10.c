/*Write a ‘C’ program to demonstrate various file operations.
a. Open/create a file(Read mode)
b. Close a file
c. Read a file*/

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

/*The program first asks the user to enter the name of the file to be opened/created in read mode.
It then tries to open/create the file using the fopen() function. If the file is not found or cannot be created, the program exits with an error message.
If the file is opened/created successfully, the program reads and prints the contents of the file using the getc() function.
The getc() function reads a single character from the file, and returns EOF when the end of the file is reached.
Finally, the program closes the file using the fclose() function.*/