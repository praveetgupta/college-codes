/*Given an array (consisting of distinct integers)  and a hashtable size, you have to fill the
elements of the array into a hash table of given size. 
Input: arr[] = {2, 5, 9, 13, 26, 37}, hashSize = 10, sizeOfArray = 6*/

#include <stdio.h>
#include <stdlib.h>

#define EMPTY -1  // A value to represent an empty slot in the hash table

// Hash function: returns the index in the hash table for a given key
int hash(int key, int hashSize) {
    return key % hashSize;  // Calculate the index using modulo operator
}

// Inserts a key into the hash table
void insert(int *hashTable, int key, int hashSize) {
    int index = hash(key, hashSize);  // Calculate the index for the key
    while (hashTable[index] != EMPTY) {  // Loop until an empty slot is found
        index = (index + 1) % hashSize;  // Use linear probing to find the next available slot
    }
    hashTable[index] = key;  // Insert the key into the hash table
}

// Prints the contents of the hash table
void printHashTable(int *hashTable, int hashSize) {
    for (int i = 0; i < hashSize; i++) {
        if (hashTable[i] != EMPTY) {  // If a key is present at this index
            printf("%d ", hashTable[i]);  // Print the key
        } else {  // Otherwise
            printf("_ ");  // Print an underscore to represent an empty slot
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 5, 9, 13, 26, 37};
    int hashSize = 10;
    int sizeOfArray = 6;

    // Initialize the hash table to empty
    int *hashTable = malloc(hashSize * sizeof(int));  // Allocate memory for the hash table
    for (int i = 0; i < hashSize; i++) {
        hashTable[i] = EMPTY;  // Set each slot to EMPTY value
    }

    // Insert each element of the array into the hash table
    for (int i = 0; i < sizeOfArray; i++) {
        insert(hashTable, arr[i], hashSize);  // Insert the key into the hash table
    }

    // Print the contents of the hash table
    printHashTable(hashTable, hashSize);

    // Free the memory used by the hash table
    free(hashTable);

    return 0;
}


/*The hash function calculates the index in the hash table for a given key using the modulo operator.
The insert function uses linear probing to find the next available slot in the hash table to insert the key.
The printHashTable function simply prints the contents of the hash table, with empty slots represented by underscores.
In the main function, we initialize the hash table to empty, insert each element of the array into the hash table, print the contents of the hash table,
and then free the memory used by the hash table.*/