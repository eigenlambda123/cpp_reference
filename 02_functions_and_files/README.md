# Chapter 2 — C++ Basics: Functions and Files

This chapter introduces **functions**, **scope**, and how to split C++ programs into multiple files for better organization. It also tackle namespaces, the preprocessor, and best practices for structuring code.

---

### 2.1 Introduction to Functions

* A **function** is a reusable block of code that performs a task.
* Functions help break programs into smaller, manageable parts.

```cpp
int add(int a, int b) {
    return a + b;
}
```

---

### 2.2 Function Return Values (Value-returning Functions)

* Functions can return a value using the `return` statement.
* The return type must match the function’s declared type.

```cpp
int square(int x) {
    return x * x;
}
```

---

### 2.3 Void Functions (Non-value Returning Functions)

* Use `void` for functions that don’t return a value.
* Useful for actions like printing or modifying data.

```cpp
void greet() {
    std::cout << "Hello!\n";
}
```

---

### 2.4 Introduction to Function Parameters and Arguments

* **Parameters** are variables listed in the function definition.
* **Arguments** are the values passed when calling the function.

```cpp
void printSum(int a, int b) {
    std::cout << a + b << '\n';
}

printSum(3, 5); // arguments: 3 and 5
```

---

### 2.5 Introduction to Local Scope

* Variables declared inside a function exist only within that function.
* These are called **local variables**.

```cpp
void example() {
    int x = 10;  // local to this function
}
```

---

### 2.6 Why Functions are Useful, and How to Use Them Effectively

* Functions:

  * Reduce code duplication
  * Improve readability
  * Make testing easier
* Keep functions **short** and **single-purpose**.

---

### 2.7 Forward Declarations and Definitions

* A **forward declaration** tells the compiler a function exists before it’s defined.
* Useful when functions call each other.

```cpp
int multiply(int a, int b); // forward declaration

int main() {
    std::cout << multiply(2, 3);
}

int multiply(int a, int b) { // definition
    return a * b;
}
```

---

### 2.8 Programs with Multiple Code Files

* Large programs are split across multiple `.cpp` and `.h` files.
* Each file handles a logical part of the program.

---

### 2.9 Naming Collisions and an Introduction to Namespaces

* **Namespaces** prevent naming conflicts in large projects.
* Standard C++ library is in `std`.

```cpp
namespace Math {
    int add(int x, int y) { return x + y; }
}
```

---

### 2.10 Introduction to the Preprocessor

* Preprocessor handles **directives** before compilation.
* Common directives:

  * `#include` (add libraries/files)
  * `#define` (macros)

---

### 2.11 Header Files

* Header files (`.h`) store **function declarations** and constants.
* They are included in `.cpp` files with `#include`.

---

### 2.12 Header Guards

* Prevent multiple inclusions of the same header file.

```cpp
#ifndef HEADER_FILE
#define HEADER_FILE

// contents

#endif
```

---

### 2.13 How to Design Your First Programs

* Break problems into smaller **functions**.
* Organize functions into multiple files if needed.
* Use comments and consistent naming for clarity.
