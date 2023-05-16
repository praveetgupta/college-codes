/*Write a menu driven ‘C’ program to implement Tree Traversal on Binary
Tree.(Recursive way)*/

#include <stdio.h>
#include <stdlib.h>

// define a structure for each node in the binary tree
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// function for inorder traversal of the binary tree
void inorderTraversal(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

// function for preorder traversal of the binary tree
void preorderTraversal(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// function for postorder traversal of the binary tree
void postorderTraversal(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
}

// main function to display the menu and call the appropriate functions
int main()
{
    // create a binary tree
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    int choice;

    while (1)
    {
        printf("\n\n---- Binary Tree Traversal Menu ----\n");
        printf("1. Inorder traversal\n");
        printf("2. Preorder traversal\n");
        printf("3. Postorder traversal\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Inorder traversal: ");
            inorderTraversal(root);
            printf("\n");
            break;

        case 2:
            printf("Preorder traversal: ");
            preorderTraversal(root);
            printf("\n");
            break;

        case 3:
            printf("Postorder traversal: ");
            postorderTraversal(root);
            printf("\n");
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}

/*This program implements tree traversal on a binary tree, using recursive functions for the inorder, preorder, and postorder traversal.
The user is presented with a menu to choose the type of traversal they want to perform, and the program displays the corresponding traversal of the binary tree.
The binary tree used in this program is created manually, but it could also be created dynamically through user input or other means.*/