/*Write a ‘C’ program to demonstrate various file operations.
a. Open/create a file(Write mode)
b. Close a file
c. Write a file*/

#include <stdio.h>

int main() {
    FILE *filePointer;
    char dataToWrite[50] = "Hello, World!";
  
    // Open the file in write mode
    filePointer = fopen("sample.txt", "w");

    // Check if filePointer is NULL or not
    if (filePointer == NULL) {
        printf("File failed to open.");
        return 0;
    }

    // Write the data to the file
    fprintf(filePointer, "%s", dataToWrite);

    // Close the file
    fclose(filePointer);
    
    printf("Data written successfully!");

    return 0;
}
