//Write a menu driven C program that implements singly linked list for the following operations: Create ,Insert node at beginning ,display.

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
        printf("2. Insert node at beginning\n");
        printf("3. Display\n");
        printf("4. Exit\n");
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
                // Display the linked list
                displayList(head);
                break;
            case 4:
                // Exit the program
                printf("Exiting...\n");
                break;
            default:
                // Handle invalid menu choices
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
