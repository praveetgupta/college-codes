//Write a menu driven C program that implements singly linked list for the following operations:Create,Count No. of nodes  ,Display.

#include <stdio.h>
#include <stdlib.h>

// define the node structure
struct Node {
    int data;
    struct Node* next;
};

// function to create a new node with given data
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

// function to count the number of nodes in the list
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// function to display the list
void displayList(struct Node* head) {
    printf("List: ");
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data, count;

    do {
        printf("\nMenu:\n");
        printf("1. Create List\n");
        printf("2. Count No. of Nodes\n");
        printf("3. Display List\n");
        printf("0. Exit\n");
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
                // count the number of nodes in the list
                count = countNodes(head);
                printf("No. of nodes: %d\n", count);
                break;
            case 3:
                // display the list
                displayList(head);
                break;
            case 0:
                // exit the program
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 0);

    return 0;
}
