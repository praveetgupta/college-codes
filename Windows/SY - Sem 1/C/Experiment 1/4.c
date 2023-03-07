#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int min, max;
    min = arr[0];
    max = arr[0];

    for(int i=0; i<5; i++) {
        if(arr[i]<min){
            min = arr[i];
        } else if(arr[i]>max){
            max = arr[i];
        }

    }
    printf("The greatest number is: %d\n", max);
    printf("The smallest number is: %d\n", min);

    return 0;
}