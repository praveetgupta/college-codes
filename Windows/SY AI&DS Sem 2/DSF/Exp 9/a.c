#include <stdio.h>
#include <stdlib.h>

struct node
{
    int vertex;
    struct node *next;
};

struct node *create_node(int v)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->vertex = v;
    new_node->next = NULL;
    return new_node;
}

void add_edge(struct node **adj_list, int src, int dest)
{
    struct node *new_node = create_node(dest);
    new_node->next = adj_list[src];
    adj_list[src] = new_node;
    new_node = create_node(src);
    new_node->next = adj_list[dest];
    adj_list[dest] = new_node;
}

void display(struct node **adj_list, int num_vertices)
{
    int i;
    for (i = 0; i < num_vertices; i++)
    {
        struct node *temp = adj_list[i];
        printf("Adjacency list of vertex %d: ", i);
        while (temp)
        {
            printf("%d ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int i, j, num_vertices, num_edges, src, dest;
    printf("Enter the number of vertices: ");
    scanf("%d", &num_vertices);
    struct node *adj_list[num_vertices];
    for (i = 0; i < num_vertices; i++)
    {
        adj_list[i] = NULL;
    }
    printf("Enter the number of edges: ");
    scanf("%d", &num_edges);
    for (i = 0; i < num_edges; i++)
    {
        printf("Enter edge %d (source, destination): ", i + 1);
        scanf("%d %d", &src, &dest);
        add_edge(adj_list, src, dest);
    }
    display(adj_list, num_vertices);
    return 0;
}