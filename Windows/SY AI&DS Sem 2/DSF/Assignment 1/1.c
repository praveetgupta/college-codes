// write a program to find the factorial of a number using pointer
#include <stdio.h>
int main()
{
    int n, i, fact = 1;
    int *ptr;
    printf("Enter the number: ");
    scanf("%d", &n);
    ptr = &n;
    for (i = 1; i <= *ptr; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is: %d", *ptr, fact);
    return 0;
}
