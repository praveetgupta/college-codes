#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

int adjMatrix[MAX_VERTICES][MAX_VERTICES];  // adjacency matrix
int numVertices;  // number of vertices in the graph

// function to add an edge to the graph
void addEdge(int u, int v) {
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;  // assuming an undirected graph
}

// function to print the adjacency matrix
void printMatrix() {
    int i, j;
    for (i = 0; i < numVertices; i++) {
        for (j = 0; j < numVertices; j++) {
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int i, j, numEdges, u, v;
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &numVertices);
    printf("Enter the number of edges in the graph: ");
    scanf("%d", &numEdges);

    // initialize the adjacency matrix to all 0's
    for (i = 0; i < numVertices; i++) {
        for (j = 0; j < numVertices; j++) {
            adjMatrix[i][j] = 0;
        }
    }

    // add the edges to the graph
    for (i = 0; i < numEdges; i++) {
        printf("Enter edge %d (u v): ", i+1);
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }

    // print the adjacency matrix
    printf("Adjacency matrix:\n");
    printMatrix();

    return 0;
}
