//write a program in c to compute the sum of all elements in an array using pointers
#include<stdio.h>
int main()
{
    int a[100], i, n, sum = 0;
    int *ptr;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    ptr = a;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("Sum of all elements is %d", sum);
    return 0;
}