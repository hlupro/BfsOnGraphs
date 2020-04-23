# Lab10

(a) Summarize your approach to the problem, and how your code addresses the abstractions needed.

      For this lab, the use of the standard library was required and extremely beneficial.
    The main idea of this lab is to create a class that will represent an undirected graph.
    To do this, I used the std::map container to create an adjacency list for each vertex
    to keep track of all the nodes within one distance of itself and this was labeled vertices.
    Three more map containers were also used to pair each vertex to a color, a parent, and a distance value.
    These are used later in printBfs.
      Each instance of the graph class starts as an empty graph with no nodes and vertices. By creating and using a function
    called populate, I add in a predetermined set of vertices and edges to create a graph.
    To add a new vertex, the addVertex(int) function is used which checks to see if the vertex is already inside
    the graph and if it isn't creates a vector<int>  and then, using the std::map.insert({int, vector}) function,
    inserts the pair into the graph as a new vertex.
      To add a new edge, addEdge(int,int) is used which checks if both vertices are inside the graph and then checks if
      an edge already exists between the two vertices. If there isn't one it adds an edge by use of the push_back function
      in the vector object and does this for the vectors paired with both x and y because the graph is undirected.
    PrintBfs(int) works by using the other three map containers described above. If the starting vertex is in the graph,
    the function iterates through the vertices map and inserts each node into the color map and colors them white.
    Then the starting node is colored gray, and it's distance is kept track of using the distance map where it pairs the starting
    vertex with 0 before inserting the starting node into a queue.
      While the queue isn't empty, U is dequeued and data about U is printed. A for loop then iterates through U's neighboring
    vertices and if any are white, it colors them gray and sets its distance to be U+1, and parent to be U all using map containers. Then they are inserted into the queue and U is colored black signally it ha been fully explored.
    This repeats until the queue is empty and creates the shortest path from starting node S to any node Q.
      I declared the enum color_t inside the PrintBfs function because that is the only time, that kind of meta data is used.

(b) What is the theoretical time complexity of your algorithms (best and worst case), in terms of the
    size of the tree? Be sure to vary the parameters enough to use the observations to answer the
    next questions!

    addVertex takes O(n) time at the worst case if the vertex isn't found because it has to search through all the vertices in the graph. Best case is O(1) if it finds it immediately and doesn't add the vertex.

    addEdge is similar but takes twice the amount of time because two search functions are being used. + the time it takes to
    iterate through the adjacency list which is dependent on how many neighboring nodes vertex x has. So if no edge is found between vertex x and y the worst case will be O(2n + m) where m is the size of x's adjacency list. At best case, it would be
    O(3 + m), if the first two vertices in the graph are x and y and m is the size of x's adjacency list.

    printBfs takes O(V+E) time and runs in time linear in the size of the adjacency list representation of the graph.

    ptint also takes O(V+E).


(c) How could the code be improved in terms of usability, efficiency, and robustness?

    I could have been more efficient by setting iterators earlier by using the std::map.find function to set an iterator
    to its return value and then set up my if statements around the iterator. As opposed to using the return value of the find function in the if statement then creating an iterator for later. Another feature that would make it more robust is to create a function that allows for the user to enter in the vertices and edges they want in order to create a graph structure tailored to them. A function that creates a randomly generated graph would also be a useful feature to add.
