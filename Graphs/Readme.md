# Graphs in C++

Graphs are a fundamental data structure used to represent a collection of objects where some pairs of the objects are connected by edges. They are widely used in modeling real-world problems such as social networks, transportation systems, and computer networks.

---

## **Table of Contents**

- [Introduction](#introduction)
- [Types of Graphs](#types-of-graphs)
- [Graph Representations](#graph-representations)
- [Graph Traversal Algorithms](#graph-traversal-algorithms)
  - [Breadth-First Search (BFS)](#breadth-first-search-bfs)
  - [Depth-First Search (DFS)](#depth-first-search-dfs)
- [Shortest Path Algorithms](#shortest-path-algorithms)
  - [Dijkstra's Algorithm](#dijkstras-algorithm)
  - [Bellman-Ford Algorithm](#bellman-ford-algorithm)
- [Applications of Graphs](#applications-of-graphs)
- [Advantages and Limitations](#advantages-and-limitations)

---

## **Introduction**

A graph consists of two components:

- **Vertices (or nodes)**: The individual elements or points in the graph.
- **Edges**: The connections between the vertices.

Graphs can be used to represent various structures like social networks, web pages, transportation systems, etc. A graph can be directed or undirected, weighted or unweighted, and can contain cycles or be acyclic.

---

## **Types of Graphs**

1. **Directed Graph (Digraph)**:
   - A graph in which edges have a direction. Each edge is represented as a directed pair (u, v), meaning the edge points from vertex u to vertex v.
   - Example: Social media followers (one-way relationship).

2. **Undirected Graph**:
   - A graph in which edges have no direction. The edge (u, v) is the same as (v, u).
   - Example: Facebook friends (mutual relationship).

3. **Weighted Graph**:
   - A graph in which each edge has a weight or cost associated with it.
   - Example: Road networks where edges represent roads and weights represent distances.

4. **Unweighted Graph**:
   - A graph in which edges do not have any associated weights.
   - Example: A network of computers where edges represent direct connections.

5. **Acyclic Graph**:
   - A graph that has no cycles, i.e., no path that starts and ends at the same vertex.
   - Example: A tree is an acyclic graph.

6. **Cyclic Graph**:
   - A graph that contains at least one cycle, i.e., a path that starts and ends at the same vertex.
   - Example: A graph representing a circular road network.

---

## **Graph Representations**

Graphs can be represented in two primary ways:

1. **Adjacency Matrix**:
   - A 2D array where the element at row i and column j represents an edge between vertices i and j.
   - Suitable for dense graphs but not space-efficient for sparse graphs.

   Example (adjacency matrix for an undirected graph):

   ``` cpp
   int graph[5][5] = {
       {0, 1, 0, 0, 1},
       {1, 0, 1, 0, 0},
       {0, 1, 0, 1, 0},
       {0, 0, 1, 0, 1},
       {1, 0, 0, 1, 0}
   }; 
   ```

2.**Adjacency List Representation:**

An adjacency list is a space-efficient way to represent graphs, especially for sparse graphs (where most vertices have few connections). It uses an array or vector of lists, where each list represents a vertex and stores the indices of its adjacent vertices.

**Example (Adjacency List for an Undirected Graph in C++):**

```cpp
vector<int> graph[5]; // Array of lists to represent vertices

// Adding edges
graph[0].push_back(1);
graph[0].push_back(4);
graph[1].push_back(0);
graph[1].push_back(2);
graph[2].push_back(1);
graph[2].push_back(3);
graph[3].push_back(2);
graph[3].push_back(4);
graph[4].push_back(0);
graph[4].push_back(3);
```
