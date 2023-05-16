#include <stdio.h>
#include <stdlib.h>
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
void inorderTraversal(struct TreeNode *root)
{
    struct TreeNode *stack[1000];
    int top = -1;
    while (top >= 0 || root != NULL)
    {
        if (root != NULL)
        {
            stack[++top] = root;
            root = root->left;
        }
        else
        {
            root = stack[top--];
            printf("%d ", root->val);
            root = root->right;
        }
    }
}
void preorderTraversal(struct TreeNode *root)
{
    if (root == NULL)
        return;
    struct TreeNode *stack[1000];
    int top = -1;
    stack[++top] = root;
    while (top >= 0)
    {
        root = stack[top--];
        printf("%d ", root->val);
        if (root->right != NULL)
            stack[++top] = root->right;
        if (root->left != NULL)
            stack[++top] = root->left;
    }
}
void postorderTraversal(struct TreeNode *root)
{
    if (root == NULL)
        return;
    struct TreeNode *stack[1000];
    int top = -1;
    do
    {
        while (root != NULL)
        {
            if (root->right != NULL)
                stack[++top] = root->right;
            stack[++top] = root;
            root = root->left;
        }
        root = stack[top--];
        if (root->right != NULL && stack[top] == root->right)
        {
            stack[top--] = root;
            root = root->right;
        }
        else
        {
            printf("%d ", root->val);
            root = NULL;
        }
    } while (top >= 0);
}
int main()
{
    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->val = 1;
    root->left = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->left->val = 2;
    root->left->left = NULL;
    root->left->right = NULL;
    root->right = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->right->val = 3;
    root->right->left = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->right->left->val = 4;
    root->right->left->left = NULL;
    root->right->left->right = NULL;
    root->right->right = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->right->right->val = 5;
    root->right->right->left = NULL;
    root->right->right->right = NULL;
    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");
    printf("Preorder Traversal: ");
    preorderTraversal(root);
    printf("\n");
    printf("Postorder Traversal: ");
    postorderTraversal(root);
    printf("\n");
}