/*Write a menu driven C program that implements singly linked list for the following
operations: Create , Insert ,Delete First Node ,display*/

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
struct Node *insertNode(struct Node *head);
struct Node *deleteFirstNode(struct Node *head);
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
        printf("2. Insert node at end\n");
        printf("3. Delete first node\n");
        printf("4. Display list\n");
        printf("5. Exit\n");
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
        case 2: // Insert node at end
            head = insertNode(head);
            break;
        case 3: // Delete first node
            head = deleteFirstNode(head);
            break;
        case 4: // Display list
            displayList(head);
            break;
        case 5: // Exit program
            exit(0);
        default: // Invalid choice
            printf("Invalid choice\n");
        }
    }
}

// Create a new linked list by prompting the user to enter data for each node
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

        // If the user enters -1, stop creating nodes
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

// Insert a new node at the end of the linked list
struct Node *insertNode(struct Node *head)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data for new node: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    // If the list is empty, the new node becomes the head
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        // Traverse the list until the end is reached, then insert the new node
        struct Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newNode;
    }

    return head;
}

// Delete the first node of the linked list
struct Node *deleteFirstNode(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        printf("First node deleted\n");
    }

    return head;
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
