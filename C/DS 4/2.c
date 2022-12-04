// Find factorial of positive integer N
#include <stdio.h>
int main()
{
     int N, ans = 1;
     printf("Enter value of positive integer \n");
     scanf("%d", &N);
     for (int i = 1; i <= N; i++)
     {
          ans *= i;
     }
     printf("Factorial of %d is %d \n", N, ans);
}