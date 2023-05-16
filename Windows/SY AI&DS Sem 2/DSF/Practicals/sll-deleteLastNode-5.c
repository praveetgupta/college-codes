/*Write a menu driven C program that implements singly linked list for the following
operations: Create , Insert ,Delete Last Node ,display*/

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
struct Node *deleteLastNode(struct Node *head);
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
        printf("3. Delete last node\n");
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
        case 3: // Delete last node
            head = deleteLastNode(head);
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

// Insert a new node at the end of the linked list
struct Node *insertNode(struct Node *head)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data for new node: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newNode;
    }

    return head;
}

// Delete the last node of the linked list
struct Node *deleteLastNode(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("Last node deleted\n");
    }
    else
    {
        struct Node *curr = head;
        while (curr->next->next != NULL)
        {
            curr = curr->next;
        }
        free(curr->next);
        curr->next = NULL;
        printf("Last node deleted\n");
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

/*In the above code, we define the deleteLastNode function to delete the last node of the linked list.
We start by checking if the list is empty or not, and print an appropriate message if it is.
If the list is not empty, we check if there is only one node in the list.
If there is only one node, we simply free it and set the head pointer to NULL.
Otherwise, we traverse the list until we reach the second to last node, and free the last node.
We also set the next pointer of the second to last node to NULL to ensure that the list is properly terminated.
Finally, we print a message indicating that the last node has been deleted.
We also modify the displayList function to print a message indicating that the list is empty if the head pointer is NULL, and to print the contents of the list otherwise.*/