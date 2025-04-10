## **STL (Standard Template Library)**

The **Standard Template Library (STL)** is a powerful library in C++ that provides a set of template classes to handle data structures and algorithms efficiently. It is a part of the C++ Standard Library and contains several useful components, such as containers, iterators, algorithms, and function objects.

### **Key Components of STL**

1. **Containers**: 
   - Containers are data structures that hold collections of objects. Some common containers in STL are:
     - **Vector**: Dynamic array that can grow in size.
     - **List**: Doubly linked list.
     - **Deque**: Double-ended queue.
     - **Set**: A collection of unique elements.
     - **Map**: A collection of key-value pairs (associative array).
     - **Stack**: A container that follows LIFO (Last In First Out) principle.
     - **Queue**: A container that follows FIFO (First In First Out) principle.

2. **Iterators**: 
   - Iterators are used to traverse through the elements of a container. They work like pointers and can be used to access elements sequentially. Types of iterators include:
     - **Input Iterators**
     - **Output Iterators**
     - **Forward Iterators**
     - **Bidirectional Iterators**
     - **Random Access Iterators**

3. **Algorithms**: 
   - STL provides a wide range of algorithms that can be applied to containers. These algorithms include sorting, searching, modifying, and more. Examples include:
     - `sort()`: Sorts elements in a container.
     - `find()`: Searches for an element in a container.
     - `reverse()`: Reverses the order of elements.
     - `accumulate()`: Computes the sum of elements in a container.

4. **Function Objects**: 
   - Function objects (or functors) are objects that can be called as if they were functions. These objects are used to customize algorithm behavior. For example, you can define a custom comparison function to be used with STL algorithms.

### **Advantages of STL**
- **Efficiency**: STL is highly optimized for performance and reduces the need to implement basic data structures and algorithms.
- **Flexibility**: STL allows you to use various containers and algorithms for different use cases, providing a high degree of flexibility.
- **Code Reusability**: STL promotes code reusability as it provides generic templates that can be reused for various data types and containers.

### **Example: Using STL Vector**

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    
    // Adding an element
    vec.push_back(60);
    
    // Sorting the vector
    sort(vec.begin(), vec.end());

    // Displaying elements
    for (int i : vec) {
        cout << i << " ";
    }

    return 0;
}
```

### Output:  
``` cpp 
10 20 30 40 50 60

```