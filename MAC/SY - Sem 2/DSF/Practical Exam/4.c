//Write a menu driven C program that implements singly linked list for the following operations: Create , Insert ,Delete First Node ,display

#include <stdio.h>
#include <stdlib.h>

// Define the linked list node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
void insertNode(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *headRef;
    *headRef = newNode;
}

// Function to delete the first node of the linked list
void deleteFirstNode(struct Node** headRef) {
    if (*headRef == NULL) {
        printf("Error: Linked list is empty.\n");
    } else {
        struct Node* temp = *headRef;
        *headRef = temp->next;
        free(temp);
        printf("First node deleted.\n");
    }
}

// Function to display the linked list
void displayList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Main function to drive the program
int main() {
    struct Node* head = NULL; // Initialize the linked list as empty
    int choice, data;

    do {
        // Display menu options
        printf("1. Create\n");
        printf("2. Insert node\n");
        printf("3. Delete first node\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Create a new linked list
                printf("Enter the data: ");
                scanf("%d", &data);
                head = createNode(data);
                break;
            case 2:
                // Insert a node at the beginning of the linked list
                printf("Enter the data: ");
                scanf("%d", &data);
                insertNode(&head, data);
                break;
            case 3:
                // Delete the first node of the linked list
                deleteFirstNode(&head);
                break;
            case 4:
                // Display the linked list
                displayList(head);
                break;
            case 5:
                // Exit the program
                printf("Exiting...\n");
                break;
            default:
                // Handle invalid menu choices
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}
