//write a program to implement doubly linked list and perform insert at start, insert at end, insert at position, delete at start, delete at end, delete at position, search, display operations.

#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *start;
void insert_at_start();
void insert_at_end();
void insert_at_position();
void delete_at_start();
void delete_at_end();
void delete_at_position();
void display();
void search();
void main()
{
    int choice = 0;
    while (choice != 9)
    {

        printf("\nDoubly Linked list Operations ...\n");
        printf("\n===============================================\n");
        printf("\n1.Insert at start\n2.Insert at end\n3.Insert at any position\n4.Delete at start\n  
        5.Delete at end\n6.Delete at specified position\n7.Search\n8.Display\n9.Exit\n");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {
        case 1:
            insert_at_start();
            break;
        case 2:
            insert_at_end();
            break;
        case 3:
            insert_at_position();
            break;
        case 4:
            delete_at_start();
            break;
        case 5:
            delete_at_end();
            break;
        case 6:
            delete_at_position();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");  
        }
    }
}
void insert_at_start()
{
    struct node *temp;
    int item;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter Item value");
        scanf("%d", &item);

        if (start == NULL)
        {
            temp->next = NULL;
            temp->prev = NULL;
            temp->data = item;
            start = temp;
        }
        else
        {
            temp->data = item;
            temp->prev = NULL;
            temp->next = start;
            start->prev = temp;
            start = temp;
        }
        printf("\nNode inserted\n");
    }
}
void insert_at_end()
{
    struct node *temp, *q;
    int item;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value");
        scanf("%d", &item);
        temp->data = item;
        if (start == NULL)
        {
            temp->next = NULL;
            temp->prev = NULL;
            start = temp;
        }
        else
        {
            q = start;
            while (q->next != NULL)
            {
                q = q->next;
            }
            q->next = temp;
            temp->prev = q;
            temp->next = NULL;
        }
    }
    printf("\nnode inserted\n");
}
void insert_at_position()
{
    struct node *temp, *q;
    int item, pos, i;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        q = start;
        printf("Enter the position");
        scanf("%d", &pos);
        for (i = 0; i < pos; i++)
        {
            q = q->next;
            if (q == NULL)
            {
                printf("\n There are less than %d elements", loc);
                return;
            }
        }
        printf("Enter value");
        scanf("%d", &item);
        temp->data = item;
        temp->next = q->next;
        temp->prev = q;
        q->next = temp;
        q->next->prev = temp;
        printf("\nnode inserted\n");
    }
}
void delete_at_start()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if (start->next == NULL)
    {
        start = NULL;
        free(start);
        printf("\nnode deleted\n");
    }
    else
    {
        temp = start;
        start = start->next;
        start->prev = NULL;
        free(temp);
        printf("\nnode deleted\n");
    }
}
void delete_at_end()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if (start->next == NULL)
    {
        start = NULL;
        free(start);
        printf("\nnode deleted\n");
    }
    else
    {
        temp = start;
        if (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
        printf("\nnode deleted\n");
    }
}
void delete_at_position()
{
    struct node *temp, *q;
    int val;
    printf("\n Enter the data after which the node is to be deleted : ");
    scanf("%d", &val);
    temp = start;
    while (temp->data != val)
        temp = temp->next;
    if (temp->next == NULL)
    {
        printf("\nCan't delete\n");
    }
    else if (temp->next->next == NULL)
    {
        temp->next = NULL;
    }
    else
    {
        q = temp->next;
        temp->next = q->next;
        q->next->prev = temp;
        free(q);
        printf("\nnode deleted\n");
    }
}
void display()
{
    struct node *temp;
    printf("\n printing values...\n");
    temp = start;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
void search()
{
    struct node *temp;
    int item, i = 0, flag;
    temp = start;
    if (temp == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d", &item);
        while (temp != NULL)
        {
            if (temp->data == item)
            {
                printf("\nitem found at location %d ", i + 1);
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
            i++;
            temp = temp->next;
        }
        if (flag == 1)
        {
            printf("\nItem not found\n");
        }
    }
}