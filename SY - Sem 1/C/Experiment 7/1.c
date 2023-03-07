// Write a C program to perform primitive operations on Stack-PUSH, POP, Is Empty, Is full.

#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX], top = -1;
void push(int);
int pop();
int isempty();
int isfull();
void display();
int main()
{
    int ch, item;
    while (1)
    {
        printf(" 1.Push 2.Pop 3.Display 4.Exit ");
        printf(" Enter your choice ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf(" Enter the item to be pushed ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            item = pop();
            if (item == 0)
                printf(" Stack is empty ");
            else
                printf(" The popped item is %d ", item);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf(" Invalid choice ");
        }
    }
    return 0;
}
void push(int item)
{
    if (isfull())
    {
        printf(" Stack is full ");
        return;
    }
    top = top + 1;
    stack[top] = item;
}
int pop()
{
    int item;
    if (isempty())
    {
        return 0;
    }
    item = stack[top];
    top = top - 1;
    return item;
}
int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}
void display()
{
    int i;
    if (isempty())
    {
        printf(" Stack is empty ");
        return;
    }
    printf(" The stack elements are ");
    for (i = top; i >= 0; i--)
        printf(" %d ", stack[i]);
}
