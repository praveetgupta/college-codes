//Write a ‘C’ program to demonstrate various file operations.
//a. Open/create a file(Read mode)
//b. Close a file
//c. Read a file

#include <stdio.h>

int main() {
    FILE *fp; // Declare a pointer to FILE structure
    char c;

    // Open the "sample.txt" file in read mode
    fp = fopen("sample.txt", "r");

    // Check if the file exists and can be opened
    if (fp == NULL) {
        printf("Cannot open file sample.txt\n");
        return 1;
    }

    // Read the file character by character and display it on console
    printf("\nContents of file sample.txt are:\n");
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

    // Close the file
    fclose(fp);
    printf("\n\nFile sample.txt closed successfully.\n");

    return 0;
}
