/*Write a menu driven C program that implements singly linked list for the following
operations:Create,Count No. of nodes ,Display.*/

#include <stdio.h>
#include <stdlib.h>

// Define a Node struct with a data field and a pointer to the next node
struct Node
{
    int data;
    struct Node *next;
};

// Declare function prototypes
struct Node *createList();
int countNodes(struct Node *head);
void displayList(struct Node *head);

// Main function
int main()
{
    struct Node *head = NULL; // Initialize head pointer to NULL

    // Loop indefinitely until user chooses to exit
    while (1)
    {
        // Display menu of available operations
        printf("\nMenu:\n");
        printf("1. Create list\n");
        printf("2. Count number of nodes\n");
        printf("3. Display list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        // Read user's choice from standard input
        int choice;
        scanf("%d", &choice);

        // Perform the selected operation
        switch (choice)
        {
        case 1: // Create list
            head = createList();
            break;
        case 2: // Count number of nodes
            printf("Number of nodes: %d\n", countNodes(head));
            break;
        case 3: // Display list
            displayList(head);
            break;
        case 4: // Exit program
            exit(0);
        default: // Invalid choice
            printf("Invalid choice\n");
        }
    }
}

// Create a new linked list by prompting the user to enter data for each node
struct Node *createList()
{
    struct Node *head, *curr, *newNode;

    // Prompt the user to enter data for the first node
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data for node 1: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    head = newNode;
    curr = newNode;

    // Prompt the user to enter data for each subsequent node
    int i = 2;
    while (1)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data for node %d (enter -1 to stop): ", i);
        scanf("%d", &newNode->data);
        if (newNode->data == -1)
        {
            free(newNode);
            break;
        }
        newNode->next = NULL;
        curr->next = newNode;
        curr = newNode;
        i++;
    }

    return head;
}

// Count the number of nodes in the linked list
int countNodes(struct Node *head)
{
    int count = 0;
    struct Node *curr = head;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}

// Display the contents of the linked list
void displayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct Node *curr = head;
        printf("List contents: ");
        while (curr != NULL)
        {
            printf("%d ", curr->data);
            curr = curr->next;
        }
        printf("\n");
    }
}

/*The code is a menu-driven C program that implements a singly linked list with three operations:
creating a new list, counting the number of nodes in the list, and displaying the list.
The user is prompted to select an operation from a menu, and the program performs the selected operation using functions that are defined in the code.
The code uses a struct to define a Node with a data field and a pointer to the next node, and dynamically allocates memory for new nodes using the malloc() function.
The program runs until the user chooses to exit.*/