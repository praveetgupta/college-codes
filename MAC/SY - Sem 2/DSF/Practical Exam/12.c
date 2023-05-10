/*Write a ‘C’ program to demonstrate various file operations.
a. Open/create a file(Write mode)
b. Close a file
c. Append contents in a file*/

#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open file in write mode
    filePointer = fopen("sample.txt", "w");

    // Write contents to the file
    fprintf(filePointer, "Hello World!\n");

    // Close the file
    fclose(filePointer);

    // Open file in append mode
    filePointer = fopen("sample.txt", "a");

    // Append more contents to the file
    fprintf(filePointer, "This is an appended line.\n");

    // Close the file
    fclose(filePointer);

    return 0;
}



