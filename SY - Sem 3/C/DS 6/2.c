// Elements in ascending order using Radix Sort
#include <stdio.h>
int main()
{
     int a[100], n, temp;
     printf("Enter number of values in array \n");
     scanf("%d", &n);
     printf("Enter %d elements \n", n);
     for (int i = 0; i < n; i++)
          scanf("%d", &a[i]);
     int mat[10][10], mat_n[10];
     int i, j, k, r, nop = 0, div = 1, lar, pass;
     int max = a[0];
     for (int i = 1; i < n; i++)
          if (a[i] > max)
               max = a[i];
     lar = max;
     while (lar > 0)
     {
          nop++;
          lar /= 10;
     }
     for (pass = 0; pass < nop; pass++)
     {
          for (i = 0; i < 10; i++)
          {
               mat_n[i] = 0;
          }
     }
     for (i = 0; i < n; i++)
     {
          r = (a[i] / div) % 10;
          mat[r][mat_n[r]] = a[i];
          mat_n[r] += 1;
     }
     i = 0;
     for (k = 0; k < 10; k++)
     {
          for (j = 0; j < mat_n[k]; j++)
          {
               a[i] = mat[k][j];
               i++;
          }
     }
     printf("Sorted array is \n");
     for (int i = 0; i < n; i++)
          printf("%d \n", a[i]);
}