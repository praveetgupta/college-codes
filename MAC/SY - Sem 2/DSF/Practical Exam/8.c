//Write a menu driven  ‘C’ program to implement Tree Traversal on Binary Tree.(Recursive way)

#include <stdio.h>
#include <stdlib.h>

// Structure of a binary tree node
struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Function to create a new binary tree node
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the binary tree
struct node* insertNode(struct node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    else if (data < root->data) {
        root->left = insertNode(root->left, data);
    }
    else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Function to traverse the binary tree in preorder (root-left-right) fashion
void preorderTraversal(struct node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Function to traverse the binary tree in inorder (left-root-right) fashion
void inorderTraversal(struct node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

// Function to traverse the binary tree in postorder (left-right-root) fashion
void postorderTraversal(struct node* root) {
    if (root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
}

// Main function to drive the program
int main() {
    struct node* root = NULL;
    int choice, data;

    do {
        printf("\n1. Insert Node");
        printf("\n2. Preorder Traversal");
        printf("\n3. Inorder Traversal");
        printf("\n4. Postorder Traversal");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter data to be inserted: ");
                scanf("%d", &data);
                root = insertNode(root, data);
                break;
            case 2:
                printf("\nPreorder Traversal: ");
                preorderTraversal(root);
                printf("\n");
                break;
            case 3:
                printf("\nInorder Traversal: ");
                inorderTraversal(root);
                printf("\n");
                break;
            case 4:
                printf("\nPostorder Traversal: ");
                postorderTraversal(root);
                printf("\n");
                break;
            case 5:
                printf("\nExiting Program...");
                break;
            default:
                printf("\nInvalid Choice! Try Again...");
        }
    } while (choice != 5);

    return 0;
}
