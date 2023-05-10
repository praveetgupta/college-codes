//Write a menu driven C program that implements singly linked list for the following operations:Create,Search a nodes ,Display.

#include <stdio.h>
#include <stdlib.h>

// Define a node struct with data and a pointer to the next node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the list
struct Node* insertNode(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

// Function to search for a node with the given data
void searchNode(struct Node* head, int data) {
    int pos = 0;
    while (head != NULL) {
        pos++;
        if (head->data == data) {
            printf("Node with data %d found at position %d\n", data, pos);
            return;
        }
        head = head->next;
    }
    printf("Node with data %d not found\n", data);
}

// Function to display the list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("List elements: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Main function with menu options for creating a list, searching for a node, and displaying the list
int main() {
    struct Node* head = NULL;
    int choice, data;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Create list\n");
        printf("2. Search for a node\n");
        printf("3. Display list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nEnter data to insert: ");
                scanf("%d", &data);
                if (head == NULL) {
                    head = createNode(data);
                } else {
                    struct Node* temp = head;
                    while (temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = createNode(data);
                }
                printf("\nNode inserted at end successfully.\n");
                break;
            case 2:
                printf("Enter data to search: ");
                scanf("%d", &data);
                searchNode(head, data);
                break;
            case 3:
                displayList(head);
                break;
            case 4:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
