//linear queue
#include<stdio.h>
#include<stdlib.h>
int queue[10],front=-1,rear=-1;
void insert()
{
    int num;
    if(rear==10-1)
    {
        printf("overflow");
    }
    else
    {
        printf("enter the number you want to add:");
        scanf("%d",&num);
        if(front==-1)
        {
            front=0;
        }
        rear=rear+1;
        queue[rear]=num;
    }
}
void delete()
{
    if(front==-1||front>rear)
    {
        printf("underflow");
    }
    else
    {
        printf("deleted element:%d",queue[front]);
        front=front+1;
    }
}
void show()
{
    int i;
    if(front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("element present in the queue:");
        for(i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    int choice;
    while(1)
    {
          printf("1.insert 2.delete 3.show 4.exit\n");
            printf("enter your choice:\n");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:insert();
                break;
                case 2:delete();
                break;
                case 3:show();
                break;
                case 4:exit(0);
                break;
                default:printf("invalid choice");
            }
    }
    return 0;
}
