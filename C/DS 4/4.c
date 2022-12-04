// Number of digits in factorial
#include <stdio.h>
int main()
{
     int N, ans = 1, nd = 0;
     printf("Enter value of positive integer \n");
     scanf("%d", &N);
     for (int i = 1; i <= N; i++)
     {
          ans *= i;
     }
     printf("Factorial of %d is %d \n", N, ans);
     while (ans != 0)
     {
          ans /= 10;
          nd++;
     }
     printf("Number of digits in factorial of %d is %d \n", N, nd);
}