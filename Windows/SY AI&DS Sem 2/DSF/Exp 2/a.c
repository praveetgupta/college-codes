/*Write a menu driven C program that implements singly linked list for the
following operations: Create ,Insert node at beginning of a ,Insert node at
middle ,Insert node at end(attach screen shots of program n output)*/

#include <stdio.h>
#include <stdlib.h>
// Define the structure of a node in the singly linked list
struct Node
{
    int data;
    struct Node *next;
};
// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// Function to insert a node at the beginning of the list
void insertAtBeginning(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}
// Function to insert a node at the middle of the list
void insertAtMiddle(struct Node *head, int data, int position)
{
    struct Node *newNode = createNode(data);
    struct Node *current = head;
    int i;
    for (i = 1; i < position - 1 && current != NULL; i++)
    {
        current = current->next;
    }
    if (current == NULL)
    {
        printf("Invalid position\n");
        return;
    }
    newNode->next = current->next;
    current->next = newNode;
}
// Function to insert a node at the end of the list
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {

        *head = newNode;
        return;
    }
    struct Node *current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
}
// Function to print the list
void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
// Main function to implement the menu-driven program
int main()
{
    struct Node *head = NULL;
    int choice, data, position;
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at middle\n");
        printf("3. Insert at end\n");
        printf("4. Print list\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            insertAtBeginning(&head, data);
            break;
        case 2:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            printf("Enter position to insert: ");
            scanf("%d", &position);
            insertAtMiddle(head, data, position);
            break;
        case 3:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            insertAtEnd(&head, data);
            break;
        case 4:
            printList(head);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
