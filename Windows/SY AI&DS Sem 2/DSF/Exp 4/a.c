/*Write a menu driven C program that implements doubly linked list for the following operations: Create, Display ,Insert a node ,Delete a node*/

#include <stdio.h>
#include <stdlib.h>
// Linked List Node
struct node
{
    int info;
    struct node *prev, *next;
};
struct node *start = NULL;
// Function to traverse the linked list
void traverse()
{
    // List is empty
    if (start == NULL)
    {
        printf("\nList is empty\n");
        return;
    }
    // Else print the Data
    struct node *temp;
    temp = start;
    while (temp != NULL)
    {
        printf("Data = %d\n", temp->info);
        temp = temp->next;
    }
}
// Function to insert at the front
// of the linked list
void insertAtFront()
{
    int data;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    temp->info = data;
    temp->prev = NULL;
    // Pointer of temp will be
    // assigned to start
    temp->next = start;
    start = temp;
}

// Function to insert at the end
// of the linked list
void insertAtEnd()
{
    int data;
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    temp->info = data;
    temp->next = NULL;
    // If list is empty
    if (start == NULL)
    {
        temp->prev = NULL;
        start = temp;
        return;
    }
    p = start;
    while (p->next != NULL)
        p = p->next;
    p->next = temp;
    temp->prev = p;
}
// Function to insert at the given position
void insertAtPos()
{
    int data, pos, i;
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    temp->info = data;
    printf("\nEnter position to be inserted: ");
    scanf("%d", &pos);
    p = start;
    for (i = 1; i < pos - 1 && p != NULL; i++)
        p = p->next;
    if (p == NULL)
        printf("\nPosition not found");
    else
    {
        temp->next = p->next;
        temp->prev = p;
        if (p->next != NULL)
            p->next->prev = temp;
        p->next = temp;
    }
}
// Function to delete at the front
// of the linked list
void deleteAtFront()
{
    struct node *temp;
    // If list is empty
    if (start == NULL)
    {
        printf("\nList is empty");
        return;
    }
    temp = start;
    start = start->next;
    start->prev = NULL;
    free(temp);
}
// Function to delete at the end
// of the linked list
void deleteAtEnd()
{
    struct node *temp;
    // If list is empty
    if (start == NULL)
    {
        printf("\nList is empty");
        return;
    }
    temp = start;
    while (temp->next != NULL)
        temp = temp->next;
    temp->prev->next = NULL;
    free(temp);
}
// Function to delete at the given position
void deleteAtPos()
{
    int pos, i;
    struct node *temp;
    // If list is empty
    if (start == NULL)
    {
        printf("\nList is empty");
        return;
    }
    printf("\nEnter position to be deleted: ");
    scanf("%d", &pos);
    temp = start;
    for (i = 1; i < pos && temp != NULL; i++)
        temp = temp->next;
    if (temp == NULL)
        printf("\nPosition not found");
    else
    {
        temp->prev->next = temp->next;
        if (temp->next != NULL)
            temp->next->prev = temp->prev;
        free(temp);
    }
}
// Function to display the list
void display()
{
    struct node *p;
    if (start == NULL)
    {
        printf("List is empty");
        return;
    }
    p = start;
    printf("List is :\n");
    while (p != NULL)
    {
        printf("%d ", p->info);
        p = p->next;
    }
    printf("\n");
}
// Driver Code
int main()
{
    int choice;
    while (1)
    {
        printf("\n1. Insert at front");
        printf("\n2. Insert at end");
        printf("\n3. Insert at position");
        printf("\n4. Delete at front");
        printf("\n5. Delete at end");
        printf("\n6. Delete at position");
        printf("\n7. Display");
        printf("\n8. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertAtFront();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAtPos();
            break;
        case 4:
            deleteAtFront();
            break;
        case 5:
            deleteAtEnd();
            break;
        case 6:
            deleteAtPos();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
        default:
            printf("\nInvalid choice");
        }
    }
    return 0;
}

        