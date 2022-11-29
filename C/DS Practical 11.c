// Linear queue
#include <stdio.h>
#define MAX 5
int queue[MAX], front = -1, rear = -1, choice;
int main()
{
     do
     {
          printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
          printf("\n\nEnter your choice: ");
          scanf("%d", &choice);
          switch (choice)
          {
          case 1:
               insert();
               break;
          case 2:
               delete ();
               break;
          case 3:
               display();
               break;
          case 4:
               exit(0);
               break;
          }
     } while (choice != 4);

     return 0;
}
void insert()
{
     int num;
     if (rear == MAX - 1)
     {
          printf("\nQueue is full");
     }
     else
     {
          if (front == -1)
               front = 0;
          printf("\nEnter element to be inserted: ");
          scanf("%d", &num);
          rear = rear + 1;
          queue[rear] = num;
     }
}
void delete ()
{
     if (front == -1 || front > rear)
     {
          printf("\nQueue is empty");
     }
     else
     {
          int n;
          n = queue[front];
          printf("\nDeleted element is %d ", n);

          front = front + 1;
     }
}
void display()
{
     int i;
     if (front == -1)
     {
          printf("\nQueue is empty");
     }
     else
     {
          printf("Queue is: ");
          for (i = front; i <= rear; i++)
               printf("\t %d", queue[i]);
          printf("\n");
     }
}
