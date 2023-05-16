/*Write a menu driven C program that implements doubly linked list for the following operations: Search a node, Count No. of nodes, Reverse a node node*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
struct node *tail = NULL;
void create()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}
void display()
{
    struct node *temp;
    temp = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
void search()
{
    struct node *temp;
    int item, i = 0, flag;
    temp = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        printf("Enter the item which you want to search: ");
        scanf("%d", &item);
        while (temp != NULL)
        {
            if (temp->data == item)
            {
                printf("Item found at location %d", i + 1);
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
            printf("Item not found");
        }
    }
}
void count()
{
    struct node *temp;
    int count = 0;
    temp = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        printf("No. of nodes in the list are: %d", count);
    }
}
void reverse()
{
    struct node *temp;
    temp = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->prev;
        }
    }
}
int main()
{
    int choice = 0;
    while (choice != 5)
    {
        printf("\n1. Create\n2. Display\n3. Search\n4. Count\n5. Reverse\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3: 
            search();
            break;
        case 4:
            count();
            break;
        case 5:
            reverse();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Please enter valid choice");
        }
    }
    return 0;
}

