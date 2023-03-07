// Insertion, Deleteion, Search, Count, and Display operations on a Single Linked List

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void delete (int data)
{
    struct node *temp = head;
    struct node *prev = NULL;
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            if (prev == NULL)
            {
                head = temp->next;
                free(temp);
                return;
            }
            else
            {
                prev->next = temp->next;
                free(temp);
                return;
            }
        }
        prev = temp;
        temp = temp->next;
    }
}

void search(int data)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            printf("\nElement found");
            return;
        }
        temp = temp->next;
    }
    printf("\nElement not found");
}

void count()
{
    struct node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("\nNumber of elements: %d", count);
}

void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int choice = 0, data = 0;
    while (choice != 6)
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Search");
        printf("\n4. Count");
        printf("\n5. Display");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter element: ");
            scanf("%d", &data);
            insert(data);
            break;
        case 2:
            printf("\nEnter element: ");
            scanf("%d", &data);
            delete (data);
            break;
        case 3:
            printf("\nEnter element: ");
            scanf("%d", &data);
            search(data);
            break;
        case 4:
            count();
            break;
        case 5:
            display();
            break;
        case 6:
            break;
        default:
            printf("\nInvalid choice");
        }
    }
    return 0;
}
