#include "graph.h"

int main() {

  Graph map; //empty graph with no vertices
  map.populate();
  std::cout << "Printing the adjacency list of each vertex in the graph."  << "\n"<< std::endl;
  map.print();

  std::cout << "-----------------Insertion Tests----------------" <<std::endl;
  std::cout << "Inserting a new vertex, 44, into the graph." <<std::endl;
  map.addVertex(44);
  std::cout << "Inserting an edge between 44 and 38" << std::endl;
  map.addEdge(44,38);
  map.print();
  std::cout << "Attempting to insert 44 again in the graph." << std::endl;
  map.addVertex(44);
  map.print();
  std::cout << "Attempting to insert an edge already in the graph. Between 44 and 38." << std::endl;
  map.addEdge(44,38);
  std::cout << "Attempting to insert an edge when the one of the vertices is not in the graph. Between 204 and 32054" << std::endl;
  map.addEdge(204, 32054);
  map.print();
  std::cout << "-------------------BFS Tests------------------" << std::endl;
  map.printBfs(12);
  map.printBfs(54);
  map.printBfs(44);
  std::cout << "Attempting a BFS with an invalid starting vertex." << std::endl;
  map.printBfs(2134);

}
