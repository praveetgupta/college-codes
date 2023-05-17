#include <stdio.h>
#include <stdlib.h>

#define HASH_SIZE 10 // Define the hash table size using a preprocessor directive

int main() {
    int arr[] = { 2, 5, 9, 13, 26, 37 }; // Input array
    int arrSize = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the input array
    int hashTable[HASH_SIZE] = { 0 }; // Initialize the hash table with all elements set to 0

    // Iterate over the input array
    for (int i = 0; i < arrSize; i++) {
        int index = arr[i] % HASH_SIZE; // Calculate the index in the hash table using the modulo operation
        while (hashTable[index] != 0) { // Search for an empty slot in the hash table by probing successive indices
            index = (index + 1) % HASH_SIZE;
        }
        hashTable[index] = arr[i]; // Insert the element into the hash table
    }

    // Print the contents of the hash table to the console
    for (int i = 0; i < HASH_SIZE; i++) {
        printf("%d: %d\n", i, hashTable[i]);
    }

    return 0;
}