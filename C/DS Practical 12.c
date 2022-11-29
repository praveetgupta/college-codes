// Circular queue
#include <stdio.h>
#define SIZE 5
int items[SIZE];
int front = -1, rear = -1, element;
int isFull()
{
     if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
          return 1;
     return 0;
}
int isEmpty()
{
     if (front == -1)
          return 1;
     return 0;
}
int insert()
{
     if (isFull())
          printf("\n Queue is full!! \n");
     else
     {
          if (front == -1)
               front = 0;
          rear = (rear + 1) % SIZE;
          printf("Enter the element you want to add: ");
          scanf("%d", &element);
          items[rear] = element;
          printf("\n Inserted = %d\n", element);
     }
}
int delete ()
{
     if (isEmpty())
     {
          printf("\n Queue is empty !! \n");
     }
     else
     {
          element = items[front];
          if (front == rear)
          {
               front = -1;
               rear = -1;
          }
          else
          {
               front = (front + 1) % SIZE;
          }
          printf("\n Deleted element = %d \n", element);
     }
}
void display()
{
     int i;
     if (isEmpty())
          printf(" \n Empty Queue\n");
     else
     {
          printf("\n Elements in queue are:  ");
          for (i = front; i != rear; i = (i + 1) % SIZE)
          {
               printf("%d ", items[i]);
          }
          printf("%d ", items[i]);
     }
}
int main()
{
     int choice;
     while (1)
     {
          printf("\n");
          printf("1 to insert element \n2 to remove element \n3 to display \n4 to end");
          printf("\nEnter your choice: ");
          scanf("%d", &choice);
          printf("\n");
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
               return 0;
               break;
          }
     }
     return 0;
}