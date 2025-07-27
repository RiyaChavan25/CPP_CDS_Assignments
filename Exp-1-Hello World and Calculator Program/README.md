
# **Experiment 1: Hello World & Calculator Program**

---

### **Aim**

To print "Hello World" and implement a basic calculator using C++.

---

### **Tools Used**

* VS Code
* Programiz Online Compiler

---

## **Theory**

A C++ program begins with the `#include` directive, which includes the standard input/output library necessary for using `cin` and `cout`.
The statement `using namespace std;` allows direct use of these functions without the `std::` prefix.

Execution starts in the `main()` function, where `cout` displays messages like `"Welcome to C++ Programming!"` and `"Hello World"`, followed by `endl` to move to the next line.

The program then:

* Declares variables.
* Takes input using `cin`.
* Displays values using `cout`.
* Ends with `return 0;`, indicating successful termination.

This structure demonstrates fundamental C++ concepts like I/O operations, variable usage, and program flow.

---

### **Purpose of iostream**

The `iostream` library provides fundamental input/output capabilities in C++:

* `cin` for input
* `cout` for output

These are part of the `std` namespace and require either:

* `std::cout`/`std::cin`, or
* A global `using namespace std;` declaration.

---

## **Algorithm**

### **Program 1: Hello World**

1. Program Initialization
2. Begin program execution
3. Print: `Hello World`

---

### **Program 2: Calculator**

1. Prompt user: `"Enter a number:"`
2. Store input in variable `x`
3. Display confirmation: `"You entered: [x]"`

#### **Calculator Functionality**

* **Input Phase:**

  * Prompt: `"Enter number 1"` → Store in variable `a`
  * Prompt: `"Enter number 2"` → Store in variable `b`

* **Computation Phase:**

  * Sum: `a + b`
  * Difference: `a - b`
  * Product: `a * b`
  * Quotient: `a / b`

* **Output Phase:**

  * Display: `"Sum: [result]"`
  * Display: `"Subtraction: [result]"`
  * Display: `"Multiplication: [result]"`
  * Display: `"Division: [result]"`

4. End program execution

---

## **Explanation**

### **Program 1**

This program demonstrates the basic structure of a C++ program and use of the `cout` statement to display output.
Key points:

* Uses `#include <iostream>`
* Begins with `main()`
* Outputs `"Hello World"`
* Ends with `return 0;`

It helps beginners understand compiling and displaying output.

---

### **Program 2**

This program accepts two floating-point numbers as input and performs:

* Addition
* Subtraction
* Multiplication
* Division

Highlights:

* Uses `cin` for input and `cout` for output
* Uses `float` to preserve decimals
* Demonstrates arithmetic operations and output formatting

---

### **Conclusion**

Hence, we successfully printed "Hello World" and created a **basic calculator** in C++, understanding the structure, syntax, and I/O operations of the language.

