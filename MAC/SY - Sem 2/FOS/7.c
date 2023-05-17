//write a program to implement FIFO page replacement algorithm
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k,page[50],frame[10],avail,count=0;
    printf("Enter the number of pages:");
    scanf("%d",&n);
    printf("Enter the page numbers:");
    for(i=0;i<n;i++)
        scanf("%d",&page[i]);
    printf("Enter the number of frames:");
    scanf("%d",&k);
    for(i=0;i<k;i++)
        frame[i]=-1;
    j=0;
    printf("Page\tFrame\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",page[i]);
        avail=0;
        for(int l=0;l<k;l++)
        {
            if(frame[l]==page[i])
                avail=1;
        }
        if(avail==0)
        {
            frame[j]=page[i];
            j=(j+1)%k;
            count++;
            for(int l=0;l<k;l++)
                printf("%d\t",frame[l]);
        }
        printf("\n");
    }
    printf("Page Faults=%d\n",count);
    return 0;
}