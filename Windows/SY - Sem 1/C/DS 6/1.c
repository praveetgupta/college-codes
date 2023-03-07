// Elements in ascending order using Insertion Sort
#include <stdio.h>
int main()
{
     int a[100], n, temp;
     printf("Enter number of values in array \n");
     scanf("%d", &n);
     printf("Enter %d elements \n", n);
     for (int i = 0; i < n; i++)
          scanf("%d", &a[i]);
     int key;
     for (int i = 1; i < n; i++)
     {
          key = a[i];
          int j = i - 1;
          while (j >= 0 && a[j] > key)
          {
               a[j + 1] = a[j];
               j -= 1;
          }
          a[j + 1] = key;
     }
     printf("Sorted array is \n");
     for (int i = 0; i < n; i++)
          printf("%d \n", a[i]);
}