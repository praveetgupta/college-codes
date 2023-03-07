#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("\nEnter %d elements: ", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Selection Sort
    for(int i=0; i<size-1; i++)
    {
        int max_index = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] > arr[max_index])
            {
                max_index = j;
            }
        }
        // Swap
        int temp = arr[max_index];
        arr[max_index] = arr[i];
        arr[i] = temp;
    }
    
    printf("\nSorted array in descending order: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}