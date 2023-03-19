/*Write a menu driven C program that implements singly linked list for the following
operations : Create ,Display ,search ,Count No. of nodes in ,Reverse an list (attach screen
shots of program and output)*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;
void create()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOut of Memory Space: ");
        exit(0);
    }
    printf("Enter the data value for the node: ");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void countNodes()
{
    int count = 0;
    struct node *temp = start;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    printf("Total nodes: %d\n", count);
}
void searchNode()
{
    int key, pos = 0;
    printf("Enter the key to search: ");
    scanf("%d", &key);
    struct node *temp = start;
    while (temp != NULL)
    {
        pos++;
        if (temp->info == key)
        {
            printf("Node found at position %d\n", pos);
            return;
        }
        temp = temp->next;
    }
    printf("Node not found.\n");
}
void reverseList()
{
    struct node *reverse()
    {
        struct node *prev, *ptr, *next;
        prev = NULL;
        ptr = start;
        while (ptr != NULL)
        {
            next = ptr->next;
            ptr->next = prev;
            prev = ptr;
            ptr = next;
        }
        start = prev;
        return start;
    } /*End of reverse()*/
}
void display()
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("\nList is empty: ");
        return;
    }
    else
    {
        ptr = start;
        printf("\nThe List elements are: ");
        while (ptr != NULL)
        {
            printf("%d\t", ptr->info);
            ptr = ptr->next;
        }
    }
}
// struct node *start = NULL;
int main()
{
    int ch;
    while (1)
    {
        printf("\n1. Create \n2. Search \n3. Count \n4. Reverse \n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            searchNode();
            break;
        case 3:
            countNodes();
            break;
        case 4:
            reverseList();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice!");
        }
    }
    return 0;
}