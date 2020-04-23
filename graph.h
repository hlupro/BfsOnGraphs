#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <map>
#include <vector>
#include <queue>

class Graph{
private:
  /* will map an int to a list of its neighbors */
  std::map<int, std::vector<int>> vertices; //adjacency list using vector class

public:
  void populate(); //Creates a graph predetermined graph
  void addVertex(int x); // add a vertex to the graph
  void addEdge(int x, int y); // add an undirected edge to the graph
  void print(); // prints the adjacency list of each vertex, to show the structure
  void printBfs(int); // prints the vertices discovered by a BFS, starting at a given vertex
};

#endif
