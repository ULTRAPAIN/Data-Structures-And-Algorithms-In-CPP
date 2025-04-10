# Binary Search in C++

This repository contains a detailed exploration of binary search, its implementation, and usage in C++. Binary search is an efficient algorithm for finding an element in a sorted array or list, significantly reducing the time complexity from O(n) to O(log n).

---

## **Table of Contents**

- [Binary Search in C++](#binary-search-in-c)
  - [**Table of Contents**](#table-of-contents)
  - [**Introduction**](#introduction)
  - [**Binary Search Overview**](#binary-search-overview)
  - [**Applications of Binary Search**](#applications-of-binary-search)
  - [**Examples and Usage**](#examples-and-usage)
    - [Example 1: Basic Binary Search](#example-1-basic-binary-search)

---

## **Introduction**

Binary search is an efficient algorithm for searching in a sorted array or list. The basic idea is to repeatedly divide the search interval in half, narrowing down the possible location of the target element. It works by comparing the middle element with the target, adjusting the search bounds accordingly.

---

## **Binary Search Overview**

Here’s a summary of the binary search algorithm:

| Operation            | Description                                                                  |
| -------------------- | ---------------------------------------------------------------------------- |
| Time Complexity      | O(log n)                                                                     |
| Space Complexity     | O(1) (Iterative version) or O(log n) (Recursive version)                     |
| Applicability        | Works only on sorted arrays or lists                                          |
| Search Type          | Can be used to find exact matches, insert positions, or check for existence |

---

## **Applications of Binary Search**

1. **Searching for an Element in a Sorted Array**:
   - Find the index of a given element in a sorted array.

2. **Finding the Insertion Point**:
   - Find the position where an element should be inserted to maintain sorted order.

3. **Finding the First/Last Occurrence**:
   - Locate the first or last occurrence of an element in a sorted array with duplicates.

4. **Binary Search on a Rotated Array**:
   - Search in a rotated sorted array (commonly used in questions involving circular rotation).

5. **Finding the Square Root of a Number**:
   - Use binary search to efficiently find square roots of large numbers.

---

## **Examples and Usage**

### Example 1: Basic Binary Search

```cpp
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    
    int result = binarySearch(arr, n, target);
    if (result != -1) 
        cout << "Element found at index " << result;
    else
        cout << "Element not found";
    return 0;
}
```