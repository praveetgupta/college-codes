//Write a menu driven C program that implements singly linked list for the following operations: Create , Insert ,Delete Last Node ,display

#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
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

// Function to delete the last node in the list
struct Node* deleteLastNode(struct Node* head) {
    if (head == NULL) {
        printf("\nList is already empty.\n");
    } else if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("\nLast node deleted successfully.\n");
    } else {
        struct Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
        printf("\nLast node deleted successfully.\n");
    }
    return head;
}

// Function to display the contents of the list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("\nList is empty.\n");
    } else {
        printf("\nList contents:\n");
        struct Node* temp = head;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    struct Node* head = NULL;
    int choice, data;

    while (1) {
        printf("\n1. Insert at end\n");
        printf("2. Delete last node\n");
        printf("3. Display list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
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
                head = deleteLastNode(head);
                break;
            case 3:
                displayList(head);
                break;
            case 4:
                printf("\nExiting...\n");
                exit(0);
            default:
                printf("\nInvalid choice.\n");
        }
    }

    return 0;
}
