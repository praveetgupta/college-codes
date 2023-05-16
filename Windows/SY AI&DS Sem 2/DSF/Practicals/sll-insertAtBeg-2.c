/*Write a menu driven C program that implements singly linked list for the following
operations: Create ,Insert node at beginning ,display.*/

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
typedef struct Node
{
    int data;          // Data stored in the node
    struct Node *next; // Pointer to the next node in the list
} Node;

// Function prototypes
Node *createList();
Node *insertNode(Node *head, int data);
void displayList(Node *head);

int main()
{
    Node *head = NULL; // Initialize the head of the list to NULL
    int choice, data;

    do
    {
        // Display the menu options
        printf("Menu:\n");
        printf("1. Create List\n");
        printf("2. Insert Node at Beginning\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Create a new list
            head = createList();
            break;
        case 2:
            // Insert a node at the beginning of the list
            printf("Enter the data: ");
            scanf("%d", &data);
            head = insertNode(head, data);
            break;
        case 3:
            // Display the list
            displayList(head);
            break;
        case 4:
            // Exit the program
            printf("Exiting program...\n");
            break;
        default:
            // Invalid choice
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 4);

    return 0;
}

// Function to create a new linked list
Node *createList()
{
    int n, data;
    Node *head = NULL, *tail = NULL;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the data for node %d: ", i + 1);
        scanf("%d", &data);

        // Allocate memory for a new node and set its data
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL)
        {
            // If the list is empty, set the head and tail to the new node
            head = newNode;
            tail = newNode;
        }
        else
        {
            // Otherwise, append the new node to the end of the list
            tail->next = newNode;
            tail = newNode;
        }
    }

    printf("List created successfully.\n");
    return head;
}

// Function to insert a node at the beginning of the list
Node *insertNode(Node *head, int data)
{
    // Allocate memory for a new node and set its data
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        // If the list is empty, set the head to the new node
        head = newNode;
    }
    else
    {
        // Otherwise, insert the new node at the beginning of the list
        newNode->next = head;
        head = newNode;
    }

    printf("Node inserted successfully.\n");
    return head;
}

// Function to display the linked list
void displayList(Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        printf("List: ");
        Node *curr = head;
        while (curr != NULL)
        {
            printf("%d ", curr->data);
            curr = curr->next;
        }
        printf("\n");
    }
}

/*
The `main()` function implements a menu-driven interface that repeatedly prompts the user for a choice of operation to perform on the linked list. The available choices are:
- Create List: Prompts the user for the number of nodes to create and the data for each node, and returns a pointer to the head of the newly created list.
- Insert Node at Beginning: Prompts the user for the data for a new node, inserts it at the beginning of the list, and returns a pointer to the new head of the list.
- Display List: Displays the data stored in each node of the linked list.
- Exit: Exits the program.

The `createList()` function creates a new linked list by prompting the user for the number of nodes to create and the data for each node. It returns a pointer to the head of the newly created list.

The `insertNode()` function inserts a new node with the given data at the beginning of the linked list. It returns a pointer to the new head of the list.

The `displayList()` function displays the data stored in each node of the linked list, starting from the head node.

Note that this implementation assumes that the user always inputs valid data and that the linked list contains only integer data. Error handling and data validation could be added as needed for a more robust implementation.
*/