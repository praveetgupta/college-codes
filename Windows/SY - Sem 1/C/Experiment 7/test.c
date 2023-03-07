// Reverse a stack using recursion
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
        printf("stack is full");
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop()
{
    struct node *t;
    int x = -1;
    if (top == NULL)
        printf("stack is empty");
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}
void Display()
{
    struct node *p;
    p = top;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("");
}
void Reverse()
{
    int x;
    if (top != NULL)
    {
        x = pop();
        Reverse();
        push(x);
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    Reverse();
    Display();
    return 0;
}