// Reverse a stack using recursion
#include <stdio.h>
int stack[10], top = -1, rev[10], y = -1;
void reverse()
{
     if (y >= 0)
     {
          rev[y] = stack[top];
          printf("%d", rev[y]);
          top = top - 1;
          y = y - 1;
          reverse();
     }
}
int pop()
{
     if (top == -1)
     {
          printf("\nUnderflow!!");
     }
     else
     {
          printf("\n popped element:%d", stack[top]);
          top = top - 1;
          y = y - 1;
     }
}
void push()
{
     if (top == 10 - 1)
     {
          printf("\nOverflow!!");
     }
     else
     {
          y = y + 1;
          int num;
          printf("enter the number you want to add:");
          scanf("%d", &num);
          stack[top] = num;
     }
}
void show()
{
     int i;
     if (top == -1)
     {
          printf("\nstack is empty");
     }
     else
     {
          printf("element present in the stack:");
          for (i = 0; i <= top; i++)
          {
               printf("%d", stack[i]);
          }
          printf("\n");
     }
}
int main()
{
     int i = 0, choice;

     while (1)
     {
          printf("\n");
          printf("1. to push element\n2.to pop element\n3.to reverse\n4.to display element\n5.to end");
          printf("\nEnter your choice:");
          scanf("%d", &choice);
          printf("\n");

          switch (choice)
          {
          case 1:
               top = top + 1;
               push();
               break;
          case 2:
               pop();
               break;
          case 3:
               printf("reversed stack is:");
               reverse();
               top = 0;
               break;
          case 4:
               show();
               break;
          case 5:
               exit(0);
          }
     }
}