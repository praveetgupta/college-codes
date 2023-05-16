/*Write a menu driven C program that implements singly linked list for the following
operations:Create,Search a nodes ,Display.*/

#include <stdio.h>
#include <stdlib.h>

// define a structure for each node in the list
struct Node
{
    int data;
    struct Node *next;
};

// function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// function to insert a new node at the end of the list
void insertNode(struct Node **headRef, int data)
{
    struct Node *newNode = createNode(data);
    if (*headRef == NULL)
    {
        *headRef = newNode;
        return;
    }
    struct Node *temp = *headRef;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// function to search for a node in the list
int searchNode(struct Node *head, int key)
{
    struct Node *temp = head;
    int index = 0;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}

// function to display the list
void displayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = head;
    printf("List: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// main function to display the menu and call the appropriate functions
int main()
{
    struct Node *head = NULL;
    int choice, data, key, index;

    while (1)
    {
        printf("\n\n---- Singly Linked List Menu ----\n");
        printf("1. Create a list\n");
        printf("2. Search for a node\n");
        printf("3. Display the list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data for the node: ");
            scanf("%d", &data);
            insertNode(&head, data);
            printf("Node inserted successfully\n");
            break;

        case 2:
            printf("Enter the key to be searched: ");
            scanf("%d", &key);
            index = searchNode(head, key);
            if (index == -1)
            {
                printf("Key not found in the list\n");
            }
            else
            {
                printf("Key found at index %d in the list\n", index);
            }
            break;

        case 3:
            displayList(head);
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}

/*This is a menu-driven C program that implements a singly linked list with three operations: creating a list, searching for a node in the list, and displaying the list.
The program uses a structure to define each node in the list, and it includes functions to create a new node, insert a node at the end of the list, search for a node in the list, and display the list.
The main function displays a menu and calls the appropriate function based on the user's choice.
The program continues to display the menu until the user chooses to exit.*/