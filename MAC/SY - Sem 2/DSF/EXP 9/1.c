#include <stdio.h>
#include <stdlib.h>

struct node {
    int vertex;
    struct node* next;
};

struct graph {
    int numVertices;
    struct node** adjLists;
};

// function to create a new node in the adjacency list
struct node* createNode(int v) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// function to create a graph with the given number of vertices
struct graph* createGraph(int numVertices) {
    struct graph* newGraph = (struct graph*)malloc(sizeof(struct graph));
    newGraph->numVertices = numVertices;

    newGraph->adjLists = (struct node**)malloc(numVertices * sizeof(struct node*));

    int i;
    for (i = 0; i < numVertices; i++) {
        newGraph->adjLists[i] = NULL;
    }

    return newGraph;
}

// function to add an edge to the graph
void addEdge(struct graph* graph, int u, int v) {
    struct node* newNode = createNode(v);
    newNode->next = graph->adjLists[u];
    graph->adjLists[u] = newNode;

    newNode = createNode(u);
    newNode->next = graph->adjLists[v];
    graph->adjLists[v] = newNode;
}

// function to print the adjacency list
void printGraph(struct graph* graph) {
    int i;
    for (i = 0; i < graph->numVertices; i++) {
        struct node* temp = graph->adjLists[i];
        printf("Adjacency list of vertex %d: ", i);
        while (temp) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int i, numVertices, numEdges, u, v;
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &numVertices);
    printf("Enter the number of edges in the graph: ");
    scanf("%d", &numEdges);

    // create the graph
    struct graph* graph = createGraph(numVertices);

    // add the edges to the graph
    for (i = 0; i < numEdges; i++) {
        printf("Enter edge %d (u v): ", i+1);
        scanf("%d %d", &u, &v);
        addEdge(graph, u, v);
    }

    // print the adjacency list
    printf("Adjacency list of the graph:\n");
    printGraph(graph);

    return 0;
}
