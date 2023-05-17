//Write ‘C’ program to represent a graph using following ways: Adjacency Matrix

#include <stdio.h>

#define MAX_NODES 50

int adjacencyMatrix[MAX_NODES][MAX_NODES]; // global 2D array to store adjacency matrix
int numNodes; // number of nodes in the graph

// function to initialize adjacency matrix with 0's
void initAdjacencyMatrix() {
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            adjacencyMatrix[i][j] = 0;
        }
    }
}

// function to add an edge between two nodes
void addEdge(int node1, int node2) {
    adjacencyMatrix[node1][node2] = 1;
    adjacencyMatrix[node2][node1] = 1;
}

// function to display adjacency matrix
void displayAdjacencyMatrix() {
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            printf("%d ", adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int numEdges;
    int node1, node2;

    printf("Enter the number of nodes in the graph (max %d): ", MAX_NODES);
    scanf("%d", &numNodes);

    initAdjacencyMatrix();

    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);

    printf("Enter the edges (node1 node2):\n");
    for (int i = 0; i < numEdges; i++) {
        scanf("%d %d", &node1, &node2);
        addEdge(node1, node2);
    }

    displayAdjacencyMatrix();

    return 0;
}
