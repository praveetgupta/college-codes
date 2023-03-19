#include <stdio.h>
#include <stdlib.h>
#define SIZE 10 // hash table size
int hash(int key)
{
    return key % SIZE; // simple hash function
}
int probe(int h)
{
    return (h + 1) % SIZE; // linear probing
}
void insert(int ht[], int key)
{
    int h = hash(key); // get hash value
    int i = h;
    do
    {
        if (ht[i] == -1)
        { // empty slot found
            ht[i] = key;
            printf("%d inserted at index %d\n", key, i);
            return;
        }
        i = probe(i); // move to next slot
    } while (i != h); // back to starting point
    printf("Hash table is full!\n");
}
int search(int ht[], int key)
{
    int h = hash(key); // get hash value
    int i = h;
    do
    {
        if (ht[i] == key)
        { // key found
            return i;
        }
        i = probe(i);                // move to next slot
    } while (ht[i] != -1 && i != h); // until empty slot or back to starting point
    return -1;                       // key not found
}
void display(int ht[])
{
    printf("Hash Table:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\t", ht[i]);
    }
    printf("\n");
}
int main()
{
    int ht[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        ht[i] = -1; // initialize hash table
    }
    insert(ht, 5);
    insert(ht, 25);
    insert(ht, 15);
    insert(ht, 35);
    display(ht);
    int key = 25;
    int index = search(ht, key);
    if (index == -1)
    {
        printf("%d not found in hash table\n", key);
    }
    else
    {
        printf("%d found at index %d\n", key, index);
    }
    key = 10;
    index = search(ht, key);
    if (index == -1)
    {
        printf("%d not found in hash table\n", key);
    }
    else
    {
        printf("%d found at index %d\n", key, index);
    }
    return 0;
}
