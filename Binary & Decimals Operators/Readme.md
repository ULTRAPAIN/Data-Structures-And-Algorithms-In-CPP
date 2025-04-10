# Binary & Decimal Operators in C++

This repository explores the binary and decimal operators in C++ and how they can be used to manipulate numbers at the bit level. These operators are crucial for low-level programming, performance optimization, and many competitive programming scenarios.

---

## **Table of Contents**

- [Binary \& Decimal Operators in C++](#binary--decimal-operators-in-c)
  - [**Table of Contents**](#table-of-contents)
  - [**Introduction**](#introduction)
  - [**Binary Operators Overview**](#binary-operators-overview)
  - [**Decimal Operators Overview**](#decimal-operators-overview)
  - [**Examples and Usage**](#examples-and-usage)
    - [Example 1: Binary AND Operator](#example-1-binary-and-operator)

---

## **Introduction**

In C++, binary and decimal operators are used to perform operations on integers, with binary operators focusing on bitwise manipulation (operating on individual bits of the number) and decimal operators working with numbers in base 10.

- **Binary operators** include `AND`, `OR`, `XOR`, and more, which work on the individual bits of the numbers.
- **Decimal operators** are the traditional arithmetic operators like `+`, `-`, `*`, `/`, which operate on numbers in decimal form.

---

## **Binary Operators Overview**

Here is a summary of the commonly used binary operators in C++:

| Operator    | Symbol | Description                                                              |
| ----------- | ------ | ------------------------------------------------------------------------ |
| AND         | `&`    | Sets each bit to 1 if both corresponding bits are 1                      |
| OR          | `|`    | Sets each bit to 1 if at least one of the corresponding bits is 1        |
| XOR         | `^`    | Sets each bit to 1 if only one of the corresponding bits is 1            |
| NOT         | `~`    | Inverts all the bits                                                     |
| Left Shift  | `<<`   | Shifts bits to the left, filling 0 from the right                        |
| Right Shift | `>>`   | Shifts bits to the right, filling 0 from the left (for unsigned numbers) |

---

## **Decimal Operators Overview**

Here is a summary of the decimal operators in C++:

| Operator    | Symbol | Description                                                              |
| ----------- | ------ | ------------------------------------------------------------------------ |
| Addition    | `+`    | Adds two numbers                                                         |
| Subtraction | `-`    | Subtracts the second number from the first                               |
| Multiplication | `*` | Multiplies two numbers                                                   |
| Division    | `/`    | Divides the first number by the second                                   |
| Modulus     | `%`    | Returns the remainder of the division of the two numbers                 |

---

## **Examples and Usage**

### Example 1: Binary AND Operator

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011
    int result = a & b; // Binary AND: 0001
    cout << "Binary AND: " << result << endl;
    return 0;
}
```
