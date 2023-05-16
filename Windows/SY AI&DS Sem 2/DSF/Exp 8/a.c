#include <stdio.h>

#define MAX_VERTICES 100

int adj_matrix[MAX_VERTICES][MAX_VERTICES];
int num_vertices;

void init_matrix()
{
    int i, j;
    for (i = 0; i < num_vertices; i++)
    {
        for (j = 0; j < num_vertices; j++)
        {
            adj_matrix[i][j] = 0;
        }
    }
}

void add_edge(int i, int j)
{
    adj_matrix[i][j] = 1;
    adj_matrix[j][i] = 1;
}

void display()
{
    int i, j;
    for (i = 0; i < num_vertices; i++)
    {
        for (j = 0; j < num_vertices; j++)
        {
            printf("%d ", adj_matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i, j, num_edges, source, dest;
    printf("Enter the number of vertices: ");
    scanf("%d", &num_vertices);
    init_matrix();
    printf("Enter the number of edges: ");
    scanf("%d", &num_edges);
    for (i = 0; i < num_edges; i++)
    {
        printf("Enter edge %d (source, destination): ", i + 1);
        scanf("%d %d", &source, &dest);
        add_edge(source, dest);
    }
    printf("Adjacency matrix:\n");
    display();
    return 0;
}
