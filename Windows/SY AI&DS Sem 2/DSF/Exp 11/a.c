#include <stdio.h>  
#include <string.h>

int main()
{
    FILE *filePointer;
    char dataToBeWritten[50] = "Sammed Sagare";

    // Open a file in write mode
    filePointer = fopen("sammed.txt", "w");

    if (filePointer == NULL)
    {
        printf("File failed to open.");
    }
    else
    {
        printf("\nThe file is now open.\n");
        // Write data to file
        if (strlen(dataToBeWritten) > 0)
        {
            fputs(dataToBeWritten, filePointer);
            fputs("\n", filePointer);
        }
        // Close the file
        fclose(filePointer);

        printf("Data successfully written in file.\n");
        printf("The file is now closed.\n");
    }
}
