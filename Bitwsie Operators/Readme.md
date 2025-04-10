# Bitwise Operators in C++

This repository contains a detailed exploration of bitwise operators in C++, their usage, and examples to help you master these low-level yet powerful tools. Bitwise operators are often used in competitive programming, low-level programming, and performance-critical applications.

---

## **Table of Contents**

- [Bitwise Operators in C++](#bitwise-operators-in-c)
  - [**Table of Contents**](#table-of-contents)
  - [**Introduction**](#introduction)
  - [**Bitwise Operators Overview**](#bitwise-operators-overview)
  - [**Applications of Bitwise Operators**](#applications-of-bitwise-operators)
  - [**Examples and Usage**](#examples-and-usage)
    - [Example 1: Checking Odd/Even](#example-1-checking-oddeven)
    - [Example 2: Swapping Two Numbers](#example-2-swapping-two-numbers)
    - [Example 3: Counting Set Bits](#example-3-counting-set-bits)

---

## **Introduction**

Bitwise operators operate on binary representations of integers and perform bit-level manipulations. These operators are highly efficient for operations such as toggling, setting, or clearing specific bits of a number.

---

## **Bitwise Operators Overview**

Here is a summary of the commonly used bitwise operators in C++:

| Operator    | Symbol | Description                                                              |
| ----------- | ------ | ------------------------------------------------------------------------ |
| AND         | `&`    | Sets each bit to 1 if both corresponding bits are 1                      |
| OR          | `|`    | Sets each bit to 1 if at least one of the corresponding bits is 1        |
| XOR         | `^`    | Sets each bit to 1 if only one of the corresponding bits is 1            |
| NOT         | `~`    | Inverts all the bits                                                     |
| Left Shift  | `<<`   | Shifts bits to the left, filling 0 from the right                        |
| Right Shift | `>>`   | Shifts bits to the right, filling 0 from the left (for unsigned numbers) |

---

## **Applications of Bitwise Operators**

1. **Checking Odd/Even**:
   - Use `n & 1` to check if a number is odd or even.

2. **Swapping Two Numbers**:
   - Swap numbers without a temporary variable using XOR.

3. **Setting, Clearing, or Toggling Bits**:
   - Manipulate individual bits efficiently.

4. **Masking**:
   - Extract specific bits using AND and masks.

5. **Bit Counting**:
   - Count the number of 1s in a binary representation.

6. **Optimizing Mathematical Operations**:
   - Multiply or divide by powers of 2 using bit shifts.

---

## **Examples and Usage**

### Example 1: Checking Odd/Even

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    if (n & 1)
        cout << n << " is odd";
    else
        cout << n << " is even";
    return 0;
}
```

### Example 2: Swapping Two Numbers

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 7;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swapping: a = " << a << ", b = " << b;
    return 0;
}
```
### Example 3: Counting Set Bits

```cpp
#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int n = 29; // Binary: 11101
    cout << "Number of set bits: " << countSetBits(n);
    return 0;
}
```
