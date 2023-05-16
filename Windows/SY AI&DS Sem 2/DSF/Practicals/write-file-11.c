/*Write a ‘C’ program to demonstrate various file operations.

a. Open/create a file(Write mode)
b. Close a file
c. Write a file*/

#include <stdio.h>

int main()
{
    FILE *filePointer;
    char text[100];
    int i;

    // open/create file in write mode
    filePointer = fopen("sammed.txt", "w");

    if (filePointer == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    // write text to file
    printf("Enter text to write to file:\n");
    fgets(text, 100, stdin);

    fprintf(filePointer, "%s", text);
    printf("Data written to file successfully!\n");

    // close file
    fclose(filePointer);

    return 0;
}

/*In this program, we first create a file named "sammed.txt" in write mode using fopen() function.
If the file is not found, an error message is displayed and the program exits.
The user is then prompted to enter text to write to the file using fgets() function.
The entered text is then written to the file using fprintf() function.
Finally, the file is closed using fclose() function.*/