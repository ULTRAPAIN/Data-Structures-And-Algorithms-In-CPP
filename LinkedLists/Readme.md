# Linked Lists in C++

A **Linked List** is a linear data structure in which elements are stored in nodes. Each node contains two parts: a **data** part that stores the value, and a **next** part that stores the address/reference to the next node in the sequence. Linked lists are dynamic in size and allow for efficient insertion and deletion of elements.

---

## **Concept of Linked Lists**

In a linked list, elements are stored in nodes, and each node points to the next node in the list. This creates a chain-like structure, hence the name "linked list." Unlike arrays, linked lists do not require a contiguous block of memory, allowing them to grow and shrink dynamically.

### Types of Linked Lists:
1. **Singly Linked List**: Each node contains a reference to the next node, and the last node points to `NULL`.
   - **Structure**: `Node -> Node -> Node -> NULL`
   
2. **Doubly Linked List**: Each node contains two references: one pointing to the next node and another pointing to the previous node. This allows traversal in both directions.
   - **Structure**: `NULL <- Node <-> Node <-> Node -> NULL`
   
3. **Circular Linked List**: The last node of the list points back to the first node, creating a circular structure.
   - **Singly Circular Linked List**: The last node points to the first node.
   - **Doubly Circular Linked List**: The last node points to the first node, and the first node points back to the last node.

---

## **Operations on Linked Lists**

1. **Insertion**:
   - At the beginning (head).
   - At the end (tail).
   - After a given node.
   
2. **Deletion**:
   - Remove the first node (head).
   - Remove the last node (tail).
   - Remove a specific node by value or position.
   
3. **Traversal**: Visiting each node in the list, usually for displaying or accessing the data.

4. **Searching**: Finding a node in the list based on a given value or condition.

5. **Reversing**: Changing the order of nodes in the list, so the first node becomes the last and vice versa.

---

## **Advantages of Linked Lists**

- **Dynamic Size**: Linked lists can grow or shrink in size, making them more flexible than arrays, which have a fixed size.
- **Efficient Insertions/Deletions**: Insertions and deletions are faster in linked lists compared to arrays, especially when performed at the beginning or middle of the list, since they don't require shifting elements.
- **No Wasted Space**: As linked lists allocate memory as needed, they avoid the unused space problem that can occur in arrays when memory is pre-allocated.

---

## **Disadvantages of Linked Lists**

- **Memory Overhead**: Each node requires extra memory to store the reference (or pointers) to the next (and possibly previous) node, which results in higher memory usage.
- **Sequential Access**: Unlike arrays, linked lists do not support direct access to elements. To access an element, you must traverse the list from the head to the desired node, which can be time-consuming (O(n) time complexity).
- **Complexity**: Linked lists are more complex to implement and manage compared to arrays, particularly with operations such as insertion, deletion, and traversal.

---

## **Applications of Linked Lists**

- **Dynamic Memory Allocation**: Linked lists are used in situations where memory allocation is dynamic and unpredictable, such as memory management in operating systems.
- **Implementing Data Structures**: Linked lists are used as the foundation for other data structures such as stacks, queues, and graphs.
- **Efficient Insertions and Deletions**: Linked lists are useful in applications where frequent insertions and deletions occur, such as in real-time systems and certain databases.
- **Hash Table Implementation**: Linked lists are often used in hash tables to handle collisions via chaining.

