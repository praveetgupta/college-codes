//write a program in c to find the maximum number between two numbers using pointers
#include<stdio.h>
int main()
{
    int a, b, *ptr1, *ptr2;
    printf("Enter the two numbers:");
    scanf("%d%d", &a, &b);
    ptr1 = &a;
    ptr2 = &b;
    if (*ptr1 > *ptr2)
    {
        printf("Maximum number is %d", *ptr1);
    }
    else
    {
        printf("Maximum number is %d", *ptr2);
    }
    return 0;
}