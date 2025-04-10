# Queues in C++

A **queue** is a linear data structure that follows the **First In, First Out (FIFO)** principle. The element added first is the first one to be removed. This is similar to a queue of people at a ticket counter, where the first person to stand in line gets served first.

---

## **Concept of Queues**


Queues are used in situations where order and timing are important. In a queue, elements are inserted at the rear (enqueue) and removed from the front (dequeue).

### Basic Queue Operations:

1. **Enqueue**: Insert an element at the rear of the queue.
   ```cpp
   void enqueue(int value);
   ```
2. **Dequeue**: Remove an element from the front of the queue.
   ```cpp
   void dequeue();
   ```
3. **Front**: Insert an element at the rear of the queue.
   ```cpp
   int front();
   ```
4. **isEmpty**: Insert an element at the rear of the queue.
   ```cpp
   bool isEmpty();
   ```
5. **size**: Insert an element at the rear of the queue.
   ```cpp
   int size();
   ```

## **Types of Queues**
### **Simple Queue**:
- A basic queue where elements are inserted at the rear and removed from the front.
Operations: **enqueue()**, **dequeue()**, **front()**, **isEmpty()**, **size()**.

### **Circular Queue**:
- A circular queue connects the rear of the queue back to the front, making efficient use of the available space.
Helps avoid overflow in a fixed-size array implementation.

### **Priority Queue**:
- A type of queue where each element is assigned a priority. Elements with higher priority are dequeued before those with lower priority.
Commonly used in scheduling algorithms, like CPU task scheduling.

### **Double-Ended Queue (Deque)**:
- A queue where elements can be added or removed from both ends (front and rear).
Operations: **enqueueFront()**, **enqueueRear()**, **dequeueFront()**, **dequeueRear()**.

