/*Write ‘C’ program to represent a graph using following ways: Adjacency Matrix*/

#include <stdio.h>

#define MAX_VERTICES 10

// Function to create the adjacency matrix
void createAdjMatrix(int adjMatrix[][MAX_VERTICES], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the edge weight between vertices %d and %d: ", i+1, j+1);
            scanf("%d", &adjMatrix[i][j]);
        }
    }
}

// Function to display the adjacency matrix
void displayAdjMatrix(int adjMatrix[][MAX_VERTICES], int n)
{
    int i, j;
    printf("\nThe adjacency matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }
}

// Main function
int main()
{
    int n, adjMatrix[MAX_VERTICES][MAX_VERTICES];

    printf("Enter the number of vertices in the graph (max %d): ", MAX_VERTICES);
    scanf("%d", &n);

    createAdjMatrix(adjMatrix, n);

    displayAdjMatrix(adjMatrix, n);

    return 0;
}

/*This program uses a 2D array to store the adjacency matrix of the graph.
The createAdjMatrix() function takes the adjacency matrix as input and prompts the user to enter the weight of each edge between vertices.
The displayAdjMatrix() function simply prints out the contents of the adjacency matrix.
The main function prompts the user for the number of vertices in the graph, creates the adjacency matrix using createAdjMatrix(),
and then displays the adjacency matrix using displayAdjMatrix().*/