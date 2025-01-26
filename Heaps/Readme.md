# Heaps in C++

A **Heap** is a specialized binary tree-based data structure that satisfies the **heap property**. It is commonly used to implement priority queues and is also used in various algorithms, like heap sort. A heap is typically represented as a complete binary tree, meaning every level of the tree is fully filled except possibly for the last level, which is filled from left to right.

---

## **Concept of Heaps**

A heap is a binary tree with two key properties:
1. **Heap Property**: 
   - **Max-Heap**: In a max-heap, for every node, the value of the parent node is greater than or equal to the values of its children.
   - **Min-Heap**: In a min-heap, for every node, the value of the parent node is less than or equal to the values of its children.

2. **Complete Binary Tree**: A heap is always a complete binary tree. This ensures that all nodes are as far left as possible, which allows heaps to be efficiently implemented using arrays.

### Types of Heaps:
- **Max-Heap**: The root node contains the largest value. This property must be satisfied for every node in the tree. Max-heaps are often used in priority queues where the highest priority element is always at the root.
  
- **Min-Heap**: The root node contains the smallest value. This property is satisfied for every node in the tree. Min-heaps are often used in priority queues where the lowest priority element is always at the root.

### Key Operations on Heaps:
1. **Insertion**: Adding a new element to the heap while maintaining the heap property.
   - Insert the element at the end of the tree (maintaining the complete binary tree property) and then "heapify up" to restore the heap property.
   
2. **Deletion (Extract Root)**: Removing the root element (max or min) from the heap and restructuring the heap.
   - Replace the root with the last element in the heap and then "heapify down" to restore the heap property.

3. **Peek (Top)**: Accessing the root of the heap without removing it. This operation is typically O(1) because the root is always the highest (or lowest) value.

4. **Heapify**: Converting an unsorted array into a valid heap. This can be done in O(n) time using a bottom-up approach.

---

## **Applications of Heaps**

- **Priority Queue**: Heaps are often used to implement priority queues, where elements are dequeued based on priority. In a max-heap, the element with the highest priority is dequeued first, while in a min-heap, the element with the lowest priority is dequeued first.
- **Heap Sort**: A sorting algorithm that uses the heap data structure. It involves building a heap from the input data, then extracting the root (max or min) repeatedly to get a sorted array.
- **Dijkstra's Algorithm**: A shortest-path algorithm that uses a min-heap to efficiently find the shortest path in a graph.
- **Median Maintenance**: Heaps can be used to keep track of the median in a dynamic stream of numbers by using two heaps (a max-heap and a min-heap).

---

## **Advantages of Heaps**

- **Efficient Operations**: Inserting an element and extracting the maximum or minimum element can be done in O(log n) time, making heaps more efficient than unsorted lists or arrays for certain applications.
- **Space Efficiency**: Heaps use arrays to store elements, so they have a space complexity of O(n), which is optimal for complete binary trees.
- **Priority Queue Support**: Heaps are the natural choice for implementing priority queues, which are widely used in algorithms like Dijkstra's and A*.

---

## **Disadvantages of Heaps**

- **Limited Access**: Unlike arrays or balanced trees, heaps do not allow for efficient searching for arbitrary elements (i.e., finding an element other than the root).
- **Unordered**: Heaps do not maintain a fully ordered structure (like a sorted list), making them unsuitable for certain types of ordered data operations.
- **Heapify Cost**: Converting an unsorted array into a heap (heapifying) takes O(n) time, which can be slower than other sorting techniques like quicksort or mergesort in some cases.

