## **Stack**

A stack is a linear data structure that follows the **Last In, First Out (LIFO)** principle. It means that the last element added to the stack is the first one to be removed. Think of a stack of plates where you add new plates to the top and remove the plate from the top.

### **Basic Operations**
1. **Push**: Adds an element to the top of the stack.
2. **Pop**: Removes the element from the top of the stack.
3. **Peek** or **Top**: Returns the top element without removing it.
4. **IsEmpty**: Checks if the stack is empty.
5. **Size**: Returns the number of elements in the stack.

### **Time Complexity**
- **Push**: O(1)
- **Pop**: O(1)
- **Peek**: O(1)
- **IsEmpty**: O(1)
- **Size**: O(1)

### **Applications of Stack**
- **Expression Evaluation**: Stacks are used in evaluating expressions, such as postfix and infix notation.
- **Backtracking Algorithms**: Used in problems like maze solving, depth-first search (DFS), etc.
- **Undo Mechanisms**: Many software applications use stacks to store the history of operations for undo functionality.
- **Recursive Function Calls**: The call stack in programming is implemented using stacks, where each function call is pushed onto the stack and popped when the function finishes execution.
- **Depth-First Search (DFS)**: In graph algorithms like DFS, a stack is used to explore nodes.

### **Example: Implementing a Stack**

```cpp
#include <iostream>
using namespace std;

class Stack {
private:
    int arr[5];
    int top;

public:
    Stack() { top = -1; }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 4;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed to stack" << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        cout << arr[top--] << " popped from stack" << endl;
    }

    void peek() {
        if (!isEmpty()) {
            cout << "Top element is: " << arr[top] << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.pop();
    s.pop();  // Attempt to pop from an empty stack

    return 0;
}

### Output:  
``` cpp 
10 pushed to stack
20 pushed to stack
30 pushed to stack
Top element is: 30
30 popped from stack
Top element is: 20
20 popped from stack
10 popped from stack
Stack Underflow!

```
## **Advantages of Stack**

1. **Efficient Memory Usage**: 
   - Stacks operate in constant time, O(1), for each operation, which makes them highly efficient for tasks that require adding or removing elements.

2. **Simple and Easy to Implement**: 
   - Stacks are ideal for problems that follow a **Last In, First Out (LIFO)** order, such as undo functionality in text editors, expression parsing, and more.

3. **Supports Backtracking**: 
   - Stacks are naturally suited for problems like maze-solving or graph traversal, where you need to go back and forth, as they keep track of previous states.

---

## **Limitations of Stack**

1. **Fixed Size**: 
   - In static stacks, the size is fixed, which may cause overflow if you exceed the stack’s capacity or underflow when attempting to pop from an empty stack.

2. **Limited Operations**: 
   - Stacks allow access only to the top element, which makes it impossible to randomly access or modify other elements in the stack.
