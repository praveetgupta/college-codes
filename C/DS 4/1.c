// Absolute value of integer
#include <stdio.h>
int main()
{
     int n;
     printf("Enter value of integer \n");
     scanf("%d",&n);
     if(n<0)
          printf("Absolute value of %d is %d \n",n,-n);
     else
        printf("Absolute value of %d is %d \n",n,n);
}