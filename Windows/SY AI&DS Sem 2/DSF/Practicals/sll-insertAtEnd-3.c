/*Write a menu driven C program that implements singly linked list for the following
operations: Create ,Insert node at end , display.*/

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
typedef struct Node
{
    int data;          // Data stored in the node
    struct Node *next; // Pointer to the next node in the list
} Node;

// Function prototypes
Node *createList(int numNodes);
Node *insertNode(Node *head);
void displayList(Node *head);

int main()
{
    int choice;
    Node *head = NULL;

    // Loop until the user chooses to exit
    while (1)
    {
        // Print the menu of available choices
        printf("\n---MENU---\n");
        printf("1. Create List\n");
        printf("2. Insert Node at End\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Create a new list and set head to point to it
            head = createList();
            printf("List created.\n");
            break;
        case 2:
            // Insert a new node at the end of the list
            head = insertNode(head);
            printf("Node inserted.\n");
            break;
        case 3:
            // Display the contents of the list
            displayList(head);
            break;
        case 4:
            // Exit the program
            printf("Exiting program.\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Function to create a new linked list with a given number of nodes
Node *createList(int numNodes)
{
    Node *head = NULL, *tail = NULL;

    // Prompt the user for data for each node and create a new node
    // with that data, adding it to the end of the list
    for (int i = 0; i < numNodes; i++)
    {
        int data;
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);

        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = NULL;

        if (tail == NULL)
        {
            head = newNode;
        }
        else
        {
            tail->next = newNode;
        }

        tail = newNode;
    }

    return head;
}

// Function to insert a new node with given data at the end of the list
Node *insertNode(Node *head)
{
    int data;
    printf("Enter data for new node: ");
    scanf("%d", &data);

    // Create the new node and add it to the end of the list
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newNode;
    }

    return head;
}

// Function to display the data stored in each node of the list
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
            printf("%d ", curr->data
        curr = curr->next;
        }
        printf("\n");
    }
}

/*
The program first defines a `Node` struct that represents a node in the linked list, with a data field and a pointer to the next node. 
It then defines function prototypes for the `createList`, `insertNode`, and `displayList` functions.
In the main function, it loops indefinitely and prompts the user to choose from a menu of available operations.
If the user chooses to create a new list, the program calls the `createList` function and sets the `head` pointer to the first node of the new list.
If the user chooses to insert a new node at the end of the list, the program calls the `insertNode` function and updates the `head` pointer as necessary.
If the user chooses to display the contents of the list, the program calls the `displayList` function.
If the user chooses to exit the program, the program exits with a status of 0.
The `createList` function prompts the user to enter data for each node in the list and creates a new node with that data, adding it to the end of the list.
It returns a pointer to the head of the list.
The `insertNode` function prompts the user to enter data for the new node and creates a new node with that data, adding it to the end of the list.
It returns a pointer to the head of the list.
The `displayList` function displays the data stored in each node of the list, or a message indicating that the list is empty if the head pointer is NULL.
*/