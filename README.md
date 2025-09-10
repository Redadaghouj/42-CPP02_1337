### 🖥️ CPP02 - 1337 Project

[![1337 Badge](https://img.shields.io/badge/1337-Project-blue)](https://www.42network.org/)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen) ![Grade](https://img.shields.io/badge/Grade-0%2F80-progress)
 

### Ad-hoc polymorphism, operator overloading and the Orthodox Canonical class form

---

## 📜 Project Overview

This project focuses on C++ concepts like ad-hoc polymorphism and operator overloading. It requires implementing classes in the Orthodox Canonical Form. The exercises are designed to help you understand how to design and implement robust classes, overload operators for fixed-point arithmetic, and apply these concepts in a practical problem.

> ⚠️ All code must follow the **C++98 standard**.

---

## 🚀 Features

### ✅ Mandatory Part

  * **Exercise 00: My First Class in Orthodox Canonical Form**: Create a `Fixed` class that represents a fixed-point number, implementing the Orthodox Canonical Form.
  * **Exercise 01: Towards a more useful fixed-point number class**: Add constructors to your `Fixed` class to handle integers and floating-point numbers, and implement functions to convert the fixed-point value to `int` and `float`. You must also overload the stream insertion operator (`<<`).
  * **Exercise 02: Now we're talking**: Overload the 6 comparison operators, 4 arithmetic operators, and 4 increment/decrement operators for your `Fixed` class. Additionally, implement static `min` and `max` member functions.

### ⚠️ Optional Exercise

  * **Exercise 03: BSP**: Implement a `Point` class and a function `bsp` to determine if a point is inside a triangle.
  * You can pass this module without completing this exercise.

-----

## 🛠️ Installation & Compilation

To compile any of the exercises, navigate to the corresponding directory and run `make`. The `Makefile` provided will compile the source files to the required executable name.

### 📌 Compilation Flags

Your code must be compiled with `c++` and the following flags:

```bash
-Wall -Wextra -Werror -std=c++98
```

The `-std=c++98` flag ensures your code adheres to the C++98 standard.

### 🔧 Cleanup

```bash
make clean      # Removes object files
make fclean     # Removes the executable and object files
make re         # Performs a full rebuild
```

-----

## 📏 Rules

  * **Language Standard**: Your code must follow the C++98 standard.
  * **Forbidden Functions**: The C functions `*printf()`, `*alloc()`, and `free()` are strictly forbidden. Using them will result in a grade of 0.
  * **Forbidden Keywords**: The `using namespace <ns_name>` and `friend` keywords are forbidden unless explicitly stated otherwise, resulting in a -42 grade.
  * **STL**: The Standard Template Library (STL), including containers (`vector`, `list`, `map`, etc.) and algorithms, is forbidden until Modules 08 and 09. Using them will result in a -42 grade.
  * **Memory Management**: All memory allocated with `new` must be properly deallocated with `delete` to avoid memory leaks.
  * **Headers**: All header files must include include guards to prevent double inclusion. Not doing so will result in a grade of 0.
  * **Output**: Every output message must end with a newline character and be displayed to the standard output.
  * **Header File Implementations**: Any function implementation placed in a header file (except for function templates) will result in a grade of 0.

-----

For complete project details, see the subject file:
[en.subject.pdf](https://www.google.com/search?q=https://github.com/redadaghouj/42-cpp02_1337/blob/bf5524b05feab23d05f330d9c0f4507a6db4b2f0/subject/en.subject.pdf)
