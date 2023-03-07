// Convert Celsius to Farenheit
#include <stdio.h>
int main()
{
     int c,f;
     printf("Enter temperature in celsius \n");
     scanf("%d",&c);
     f=(c*1.8)+32;
     printf("Temperature in farenheit is %d \n",f);
}