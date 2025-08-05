# Chapter 1 — Basics: Building Blocks of a C++ Program

This chapter introduces the fundamental elements of C++: how programs are structured, how data is handled, and how to interact with users.

---

### 1.1 Statements & Program Structure

* A C++ program is made up of **statements**, typically ending with a semicolon (`;`).
* The `main()` function is where execution begins.
* Code is grouped into **blocks** using `{}`.

```cpp
int main() {
    return 0;
}
```

---

### 1.2 Comments

* Use `//` for single-line comments.
* Use `/* */` for multi-line comments.
* Comments are ignored by the compiler and used to explain code.

---

### 1.3 Objects and Variables

* **Variables** store values with a specific data type (`int`, `double`, `std::string`, etc.).
* Objects are instances of data types or user-defined types.

---

### 1.4 Variable Assignment and Initialization

* Assignment (`=`) gives a value to a variable **after** declaration.
* Initialization gives a value **at the time of declaration**.

```cpp
int x = 5;   // initialization
x = 10;      // assignment
```

---

### 1.5 I/O with `iostream`: `cout`, `cin`, `endl`

* Use `std::cout` to print, `std::cin` to get input.
* `std::endl` adds a newline and flushes the buffer.

```cpp
std::cout << "Enter a number: ";
int x;
std::cin >> x;
```

---

### 1.6 Uninitialized Variables & Undefined Behavior

* Uninitialized variables can hold **garbage values**.
* Using them leads to **undefined behavior** (anything can happen—bad idea).

---

### 1.7 Keywords & Naming Identifiers

* **Keywords** are reserved (e.g., `int`, `return`, `if`) — you can't use them as names.
* Identifiers must:

  * Start with a letter or underscore
  * Not use spaces or special characters
  * Be meaningful and consistent (`camelCase` or `snake_case`)

---

### 1.8 Whitespace & Basic Formatting

* Whitespace (spaces, tabs, newlines) makes code readable.
* C++ ignores extra whitespace.

```cpp
int    x =    5;  // still valid
```

---

### 1.9 Literals & Operators

* **Literals** are fixed values: `42`, `'a'`, `3.14`, `"hello"`.
* **Operators** perform operations: `+`, `-`, `*`, `/`, `=`, `==`, etc.

---

### 1.10 Expressions

* An **expression** evaluates to a value.
* Can include variables, literals, and operators.

```cpp
int result = (5 + 3) * 2;
```

---

### 1.11 Your First Program

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, world!\n";
    return 0;
}
```

* Compile → Run → Output
* This is the foundation. Every C++ program builds from here.
