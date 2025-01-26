## **Switch Statement in C++**

The `switch` statement is a control flow mechanism that allows the program to execute different blocks of code based on the value of an expression. It is particularly useful when you need to evaluate a single variable or expression against multiple potential values (cases).

### **Concept**:
- The expression in the `switch` statement is evaluated once.
- Based on the value of the expression, the program jumps to the matching `case`.
- Each `case` contains a set of statements, and if the value of the expression matches a `case`, the corresponding block of code is executed.
- The `break` keyword is used to terminate the `switch` statement and prevent it from continuing to check other cases.
- The `default` case is optional and provides a block of code to execute if no other case matches.

---

## **Functions in C++**

Functions in C++ are used to organize code into modular blocks that can be executed multiple times. They allow you to break down complex problems into smaller, manageable tasks and promote code reuse.

### **Concept**:
- A function is defined by its return type, name, and parameters (if any).
- **Return Type**: Specifies the type of value the function will return. If no value is returned, the return type is `void`.
- **Function Name**: A unique identifier used to call the function.
- **Parameters**: Variables passed into the function that can be used within the function body to perform tasks.
- **Return Statement**: The statement that sends a result back to the caller of the function (if applicable).

Functions can be classified as:
- **Void Functions**: Functions that do not return any value.
- **Non-Void Functions**: Functions that return a value.

C++ also supports **function overloading**, where multiple functions can have the same name but differ in the type or number of their parameters.

Functions are crucial for breaking large tasks into smaller sub-tasks, making programs easier to read, maintain, and debug.


## **Syntax of Switch Statement in C++**

The syntax of a `switch` statement consists of the `switch` keyword, followed by an expression in parentheses, and then a series of `case` labels followed by the code block that should execute for each case. You can also include a `default` case.

### **Syntax**:

```cpp
switch (expression) {
    case value1:
        // Code to execute if expression == value1
        break;
    case value2:
        // Code to execute if expression == value2
        break;
    // Additional cases can be added
    default:
        // Code to execute if no case matches
}
```

```cpp
// Function Declaration (Prototype)
return_type function_name(parameter1_type parameter1, parameter2_type parameter2, ...) {
    // Code to execute
    return value; // Only if return_type is not void
}
```
