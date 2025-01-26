# Sorting Algorithms in C++

Sorting is the process of arranging the elements of a collection in a specific order (ascending or descending). It is a fundamental concept in computer science and is widely used in various applications like searching, optimizing algorithms, and more.

---

## **Types of Sorting Algorithms**

There are many sorting algorithms, each with its own advantages and disadvantages depending on the problem. Here, we will discuss a few common sorting algorithms.

---

# Comparison of Sorting Algorithms

The following table summarizes the time complexity and space complexity of common sorting algorithms:

| **Algorithm**     | **Time Complexity (Best)** | **Time Complexity (Average)** | **Time Complexity (Worst)** | **Space Complexity** |
| ----------------- | -------------------------- | ----------------------------- | --------------------------- | -------------------- |
| **Bubble Sort**    | O(n)                       | O(n²)                         | O(n²)                       | O(1)                 |
| **Selection Sort**  | O(n²)                      | O(n²)                         | O(n²)                       | O(1)                 |
| **Insertion Sort**  | O(n)                       | O(n²)                         | O(n²)                       | O(1)                 |
| **Merge Sort**      | O(n log n)                 | O(n log n)                    | O(n log n)                  | O(n)                 |
| **Quick Sort**      | O(n log n)                 | O(n log n)                    | O(n²)                       | O(log n)             |

### Notes:
- **Bubble Sort**: Simple but inefficient for large datasets. Best-case performance occurs when the array is already sorted.
- **Selection Sort**: Also inefficient for large datasets, with no best-case improvement.
- **Insertion Sort**: Efficient for small datasets or nearly sorted data. Best-case performance occurs when the array is already sorted.
- **Merge Sort**: More efficient than bubble, selection, and insertion sorts for large datasets, with a stable O(n log n) time complexity. Requires extra space for merging.
- **Quick Sort**: Efficient for large datasets with an average-case time complexity of O(n log n), but has a worst-case of O(n²) if the pivot is not chosen well. It performs in-place sorting, which saves space compared to merge sort.



## **1. Bubble Sort**

Bubble Sort is a simple comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

**Time Complexity**: 
- Worst-case: O(n²)
- Best-case: O(n)
- Average-case: O(n²)

### Example:

```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap the elements
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
```
### Output:  
``` cpp 
Sorted array:
11 12 22 25 34 64 90
```
## **2. Insertion Sort**

Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted array one element at a time. It assumes that the first element is already sorted, then iterates through the rest of the array and places each element at its correct position.

**Time Complexity**: 
- Worst-case: O(n²)
- Best-case: O(n)
- Average-case: O(n²)

### Example:

```cpp
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
```
### Output:  
``` cpp 
Sorted array:
5 6 11 12 13
```

## **3. Selection Sort**

Selection Sort is a simple comparison-based sorting algorithm that repeatedly finds the minimum element from the unsorted part of the array and swaps it with the first unsorted element. This process is repeated for each element of the array.

**Time Complexity**: 
- Worst-case: O(n²)
- Best-case: O(n²)
- Average-case: O(n²)

### Example:

```cpp
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        
        // Find the minimum element in unsorted part of the array
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap the found minimum element with the first element of unsorted part
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
```
### Output:  
``` cpp 
Sorted array:
11 12 22 25 64
```

## **4. Quick Sort**

Quick Sort is a divide-and-conquer algorithm that divides the array into two smaller sub-arrays, one containing elements smaller than the pivot element, and the other containing elements larger than the pivot. The process is then repeated for the sub-arrays.

**Time Complexity**: 
- Worst-case: O(n²)
- Best-case: O(n log n)
- Average-case: O(n log n)

### Example:

```cpp
#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Pivot element is chosen as the last element
    int i = low - 1;

    // Re-arrange elements around the pivot
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);  // Place the pivot in its correct position
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Find the pivot element such that elements smaller than pivot are on the left
        // and elements greater than pivot are on the right
        int pi = partition(arr, low, high);
        
        // Recursively sort the two sub-arrays
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
```
### Output:  
``` cpp 
Sorted array:
10 30 40 50 70 80 90
```
