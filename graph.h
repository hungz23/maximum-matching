#ifndef GRAPH_H
#define GRAPH_H

typedef struct {
  int vertex_count;
  int** arcs; // 0 represents the lack of adjacency
} Graph;

void empty_graph(Graph* g);
void init_graph(Graph* g, int v);
void free_graph(Graph* g);
Graph* transpose_graph(Graph* g);
int insert_arc(Graph* g, int a1, int a2, int weight);
int remove_arc(Graph* g, int a1, int a2);
int exists_arc(Graph* g, int a1, int a2);
int* get_adjacency(Graph* g, int v);
void insert_vertex(Graph* g, int v);
int remove_vertex(Graph* g, int v);
void print_graph(Graph* g);
void print_adjacency(int* a);
#endif

