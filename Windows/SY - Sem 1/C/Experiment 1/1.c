#include <stdio.h>

int main()
{
    int n;
    float avg, sum = 0.0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = sum / n;
    printf("\nThe average is: %.1f", avg);

    return 0;
}
